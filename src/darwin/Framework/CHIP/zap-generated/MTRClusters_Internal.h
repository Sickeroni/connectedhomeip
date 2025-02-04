/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#import <Foundation/Foundation.h>

#import "MTRClusters.h"
#import "MTRDevice.h"
#import "MTRDevice_Internal.h"

@interface MTRClusterIdentify ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterGroups ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterScenes ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterOnOff ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterOnOffSwitchConfiguration ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterLevelControl ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterBinaryInputBasic ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterDescriptor ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterBinding ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterAccessControl ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterActions ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterBasicInformation ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterOTASoftwareUpdateProvider ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterOTASoftwareUpdateRequestor ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterLocalizationConfiguration ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterTimeFormatLocalization ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterUnitLocalization ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterPowerSourceConfiguration ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterPowerSource ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterGeneralCommissioning ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterNetworkCommissioning ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterDiagnosticLogs ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterGeneralDiagnostics ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterSoftwareDiagnostics ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterThreadNetworkDiagnostics ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterWiFiNetworkDiagnostics ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterEthernetNetworkDiagnostics ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterBridgedDeviceBasicInformation ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterSwitch ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterAdministratorCommissioning ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterOperationalCredentials ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterGroupKeyManagement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterFixedLabel ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterUserLabel ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterBooleanState ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterModeSelect ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterLaundryWasherModeSelect ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterRefrigeratorAndTemperatureControlledCabinetModeSelect ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterRVCRunModeSelect ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterRVCCleanModeSelect ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterTemperatureControl ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterRefrigeratorAlarm ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterDishwasherModeSelect ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterAirQuality ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterSmokeCOAlarm ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterOperationalState ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterHEPAFilterMonitoring ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterActivatedCarbonFilterMonitoring ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterCeramicFilterMonitoring ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterElectrostaticFilterMonitoring ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterUVFilterMonitoring ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterIonizingFilterMonitoring ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterZeoliteFilterMonitoring ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterOzoneFilterMonitoring ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterWaterTankMonitoring ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterFuelTankMonitoring ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterInkCartridgeMonitoring ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterTonerCartridgeMonitoring ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterDoorLock ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterWindowCovering ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterBarrierControl ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterPumpConfigurationAndControl ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterThermostat ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterFanControl ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterThermostatUserInterfaceConfiguration ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterColorControl ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterBallastConfiguration ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterIlluminanceMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterTemperatureMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterPressureMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterFlowMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterRelativeHumidityMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterOccupancySensing ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterCarbonMonoxideConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterCarbonDioxideConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterEthyleneConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterEthyleneOxideConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterHydrogenConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterHydrogenSulfideConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterNitricOxideConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterNitrogenDioxideConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterOxygenConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterOzoneConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterSulfurDioxideConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterDissolvedOxygenConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterBromateConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterChloraminesConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterChlorineConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterFecalColiformEColiConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterFluorideConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterHaloaceticAcidsConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterTotalTrihalomethanesConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterTotalColiformBacteriaConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterTurbidityConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterCopperConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterLeadConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterManganeseConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterSulfateConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterBromodichloromethaneConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterBromoformConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterChlorodibromomethaneConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterChloroformConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterSodiumConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterPM25ConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterFormaldehydeConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterPM1ConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterPM10ConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterTotalVolatileOrganicCompoundsConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterRadonConcentrationMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterWakeOnLAN ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterChannel ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterTargetNavigator ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterMediaPlayback ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterMediaInput ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterLowPower ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterKeypadInput ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterContentLauncher ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterAudioOutput ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterApplicationLauncher ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterApplicationBasic ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterAccountLogin ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterElectricalMeasurement ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end

@interface MTRClusterUnitTesting ()
@property (nonatomic, readonly) uint16_t endpoint;
@property (nonatomic, readonly) MTRDevice * device;
@end
