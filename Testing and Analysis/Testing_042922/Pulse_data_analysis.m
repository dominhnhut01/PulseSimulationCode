clear all;
close all;
clc;

data=readmatrix('prelim_pulse_042922.csv');
t = data(:,1);
volt = data(:,2);
gain = 1/0.343078; % coverting the voltage out to mmHg
pp = volt*gain; % Pulse Pressue (mmHg)
plot(t,pp)
return

data = xlsread('excel\SDS00012.csv','A13:E90000');
time = data(:,1).*1000;
channels = data(:,2) - min(data(:,2));
channels_norm = channels./max(channels);
%release_val = channels_norm(:, 1);
output = channels_norm(:, 1);
%in_val = channels_norm(:, 3);

figure(1)
hold on;
%plot(time,release_val, 'LineWidth',3);
%plot(time, in_val, 'LineWidth',3)
plot(time, output, 'LineWidth',3)
xlabel("Time");
ylabel("Normalize pressure");
legend(["System response"])