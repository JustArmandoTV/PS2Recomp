#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021B0F0
// Address: 0x21b0f0 - 0x21b3a0
void sub_0021B0F0_0x21b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B0F0_0x21b0f0");
#endif

    switch (ctx->pc) {
        case 0x21b0f0u: goto label_21b0f0;
        case 0x21b0f4u: goto label_21b0f4;
        case 0x21b0f8u: goto label_21b0f8;
        case 0x21b0fcu: goto label_21b0fc;
        case 0x21b100u: goto label_21b100;
        case 0x21b104u: goto label_21b104;
        case 0x21b108u: goto label_21b108;
        case 0x21b10cu: goto label_21b10c;
        case 0x21b110u: goto label_21b110;
        case 0x21b114u: goto label_21b114;
        case 0x21b118u: goto label_21b118;
        case 0x21b11cu: goto label_21b11c;
        case 0x21b120u: goto label_21b120;
        case 0x21b124u: goto label_21b124;
        case 0x21b128u: goto label_21b128;
        case 0x21b12cu: goto label_21b12c;
        case 0x21b130u: goto label_21b130;
        case 0x21b134u: goto label_21b134;
        case 0x21b138u: goto label_21b138;
        case 0x21b13cu: goto label_21b13c;
        case 0x21b140u: goto label_21b140;
        case 0x21b144u: goto label_21b144;
        case 0x21b148u: goto label_21b148;
        case 0x21b14cu: goto label_21b14c;
        case 0x21b150u: goto label_21b150;
        case 0x21b154u: goto label_21b154;
        case 0x21b158u: goto label_21b158;
        case 0x21b15cu: goto label_21b15c;
        case 0x21b160u: goto label_21b160;
        case 0x21b164u: goto label_21b164;
        case 0x21b168u: goto label_21b168;
        case 0x21b16cu: goto label_21b16c;
        case 0x21b170u: goto label_21b170;
        case 0x21b174u: goto label_21b174;
        case 0x21b178u: goto label_21b178;
        case 0x21b17cu: goto label_21b17c;
        case 0x21b180u: goto label_21b180;
        case 0x21b184u: goto label_21b184;
        case 0x21b188u: goto label_21b188;
        case 0x21b18cu: goto label_21b18c;
        case 0x21b190u: goto label_21b190;
        case 0x21b194u: goto label_21b194;
        case 0x21b198u: goto label_21b198;
        case 0x21b19cu: goto label_21b19c;
        case 0x21b1a0u: goto label_21b1a0;
        case 0x21b1a4u: goto label_21b1a4;
        case 0x21b1a8u: goto label_21b1a8;
        case 0x21b1acu: goto label_21b1ac;
        case 0x21b1b0u: goto label_21b1b0;
        case 0x21b1b4u: goto label_21b1b4;
        case 0x21b1b8u: goto label_21b1b8;
        case 0x21b1bcu: goto label_21b1bc;
        case 0x21b1c0u: goto label_21b1c0;
        case 0x21b1c4u: goto label_21b1c4;
        case 0x21b1c8u: goto label_21b1c8;
        case 0x21b1ccu: goto label_21b1cc;
        case 0x21b1d0u: goto label_21b1d0;
        case 0x21b1d4u: goto label_21b1d4;
        case 0x21b1d8u: goto label_21b1d8;
        case 0x21b1dcu: goto label_21b1dc;
        case 0x21b1e0u: goto label_21b1e0;
        case 0x21b1e4u: goto label_21b1e4;
        case 0x21b1e8u: goto label_21b1e8;
        case 0x21b1ecu: goto label_21b1ec;
        case 0x21b1f0u: goto label_21b1f0;
        case 0x21b1f4u: goto label_21b1f4;
        case 0x21b1f8u: goto label_21b1f8;
        case 0x21b1fcu: goto label_21b1fc;
        case 0x21b200u: goto label_21b200;
        case 0x21b204u: goto label_21b204;
        case 0x21b208u: goto label_21b208;
        case 0x21b20cu: goto label_21b20c;
        case 0x21b210u: goto label_21b210;
        case 0x21b214u: goto label_21b214;
        case 0x21b218u: goto label_21b218;
        case 0x21b21cu: goto label_21b21c;
        case 0x21b220u: goto label_21b220;
        case 0x21b224u: goto label_21b224;
        case 0x21b228u: goto label_21b228;
        case 0x21b22cu: goto label_21b22c;
        case 0x21b230u: goto label_21b230;
        case 0x21b234u: goto label_21b234;
        case 0x21b238u: goto label_21b238;
        case 0x21b23cu: goto label_21b23c;
        case 0x21b240u: goto label_21b240;
        case 0x21b244u: goto label_21b244;
        case 0x21b248u: goto label_21b248;
        case 0x21b24cu: goto label_21b24c;
        case 0x21b250u: goto label_21b250;
        case 0x21b254u: goto label_21b254;
        case 0x21b258u: goto label_21b258;
        case 0x21b25cu: goto label_21b25c;
        case 0x21b260u: goto label_21b260;
        case 0x21b264u: goto label_21b264;
        case 0x21b268u: goto label_21b268;
        case 0x21b26cu: goto label_21b26c;
        case 0x21b270u: goto label_21b270;
        case 0x21b274u: goto label_21b274;
        case 0x21b278u: goto label_21b278;
        case 0x21b27cu: goto label_21b27c;
        case 0x21b280u: goto label_21b280;
        case 0x21b284u: goto label_21b284;
        case 0x21b288u: goto label_21b288;
        case 0x21b28cu: goto label_21b28c;
        case 0x21b290u: goto label_21b290;
        case 0x21b294u: goto label_21b294;
        case 0x21b298u: goto label_21b298;
        case 0x21b29cu: goto label_21b29c;
        case 0x21b2a0u: goto label_21b2a0;
        case 0x21b2a4u: goto label_21b2a4;
        case 0x21b2a8u: goto label_21b2a8;
        case 0x21b2acu: goto label_21b2ac;
        case 0x21b2b0u: goto label_21b2b0;
        case 0x21b2b4u: goto label_21b2b4;
        case 0x21b2b8u: goto label_21b2b8;
        case 0x21b2bcu: goto label_21b2bc;
        case 0x21b2c0u: goto label_21b2c0;
        case 0x21b2c4u: goto label_21b2c4;
        case 0x21b2c8u: goto label_21b2c8;
        case 0x21b2ccu: goto label_21b2cc;
        case 0x21b2d0u: goto label_21b2d0;
        case 0x21b2d4u: goto label_21b2d4;
        case 0x21b2d8u: goto label_21b2d8;
        case 0x21b2dcu: goto label_21b2dc;
        case 0x21b2e0u: goto label_21b2e0;
        case 0x21b2e4u: goto label_21b2e4;
        case 0x21b2e8u: goto label_21b2e8;
        case 0x21b2ecu: goto label_21b2ec;
        case 0x21b2f0u: goto label_21b2f0;
        case 0x21b2f4u: goto label_21b2f4;
        case 0x21b2f8u: goto label_21b2f8;
        case 0x21b2fcu: goto label_21b2fc;
        case 0x21b300u: goto label_21b300;
        case 0x21b304u: goto label_21b304;
        case 0x21b308u: goto label_21b308;
        case 0x21b30cu: goto label_21b30c;
        case 0x21b310u: goto label_21b310;
        case 0x21b314u: goto label_21b314;
        case 0x21b318u: goto label_21b318;
        case 0x21b31cu: goto label_21b31c;
        case 0x21b320u: goto label_21b320;
        case 0x21b324u: goto label_21b324;
        case 0x21b328u: goto label_21b328;
        case 0x21b32cu: goto label_21b32c;
        case 0x21b330u: goto label_21b330;
        case 0x21b334u: goto label_21b334;
        case 0x21b338u: goto label_21b338;
        case 0x21b33cu: goto label_21b33c;
        case 0x21b340u: goto label_21b340;
        case 0x21b344u: goto label_21b344;
        case 0x21b348u: goto label_21b348;
        case 0x21b34cu: goto label_21b34c;
        case 0x21b350u: goto label_21b350;
        case 0x21b354u: goto label_21b354;
        case 0x21b358u: goto label_21b358;
        case 0x21b35cu: goto label_21b35c;
        case 0x21b360u: goto label_21b360;
        case 0x21b364u: goto label_21b364;
        case 0x21b368u: goto label_21b368;
        case 0x21b36cu: goto label_21b36c;
        case 0x21b370u: goto label_21b370;
        case 0x21b374u: goto label_21b374;
        case 0x21b378u: goto label_21b378;
        case 0x21b37cu: goto label_21b37c;
        case 0x21b380u: goto label_21b380;
        case 0x21b384u: goto label_21b384;
        case 0x21b388u: goto label_21b388;
        case 0x21b38cu: goto label_21b38c;
        case 0x21b390u: goto label_21b390;
        case 0x21b394u: goto label_21b394;
        case 0x21b398u: goto label_21b398;
        case 0x21b39cu: goto label_21b39c;
        default: break;
    }

    ctx->pc = 0x21b0f0u;

label_21b0f0:
    // 0x21b0f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b0f4:
    // 0x21b0f4: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_21b0f8:
    // 0x21b0f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21b0fc:
    // 0x21b0fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b100:
    // 0x21b100: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21b100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_21b104:
    // 0x21b104: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21b104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21b108:
    // 0x21b108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b10c:
    // 0x21b10c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x21b10cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_21b110:
    // 0x21b110: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b114:
    // 0x21b114: 0x2442e6d0  addiu       $v0, $v0, -0x1930
    ctx->pc = 0x21b114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960848));
label_21b118:
    // 0x21b118: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21b118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21b11c:
    // 0x21b11c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b120:
    // 0x21b120: 0x2442e6b0  addiu       $v0, $v0, -0x1950
    ctx->pc = 0x21b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
label_21b124:
    // 0x21b124: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21b124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21b128:
    // 0x21b128: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21b128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21b12c:
    // 0x21b12c: 0x3e00008  jr          $ra
label_21b130:
    if (ctx->pc == 0x21B130u) {
        ctx->pc = 0x21B130u;
            // 0x21b130: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->pc = 0x21B134u;
        goto label_21b134;
    }
    ctx->pc = 0x21B12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B12Cu;
            // 0x21b130: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B134u;
label_21b134:
    // 0x21b134: 0x0  nop
    ctx->pc = 0x21b134u;
    // NOP
label_21b138:
    // 0x21b138: 0x0  nop
    ctx->pc = 0x21b138u;
    // NOP
label_21b13c:
    // 0x21b13c: 0x0  nop
    ctx->pc = 0x21b13cu;
    // NOP
label_21b140:
    // 0x21b140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21b140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21b144:
    // 0x21b144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21b148:
    // 0x21b148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21b148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21b14c:
    // 0x21b14c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21b150:
    // 0x21b150: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_21b154:
    if (ctx->pc == 0x21B154u) {
        ctx->pc = 0x21B154u;
            // 0x21b154: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B158u;
        goto label_21b158;
    }
    ctx->pc = 0x21B150u;
    {
        const bool branch_taken_0x21b150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b150) {
            ctx->pc = 0x21B154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B150u;
            // 0x21b154: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B1B0u;
            goto label_21b1b0;
        }
    }
    ctx->pc = 0x21B158u;
label_21b158:
    // 0x21b158: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b15c:
    // 0x21b15c: 0x2442e6d0  addiu       $v0, $v0, -0x1930
    ctx->pc = 0x21b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960848));
label_21b160:
    // 0x21b160: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_21b164:
    if (ctx->pc == 0x21B164u) {
        ctx->pc = 0x21B164u;
            // 0x21b164: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21B168u;
        goto label_21b168;
    }
    ctx->pc = 0x21B160u;
    {
        const bool branch_taken_0x21b160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B160u;
            // 0x21b164: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b160) {
            ctx->pc = 0x21B184u;
            goto label_21b184;
        }
    }
    ctx->pc = 0x21B168u;
label_21b168:
    // 0x21b168: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b16c:
    // 0x21b16c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_21b170:
    // 0x21b170: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_21b174:
    if (ctx->pc == 0x21B174u) {
        ctx->pc = 0x21B174u;
            // 0x21b174: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21B178u;
        goto label_21b178;
    }
    ctx->pc = 0x21B170u;
    {
        const bool branch_taken_0x21b170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B170u;
            // 0x21b174: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b170) {
            ctx->pc = 0x21B184u;
            goto label_21b184;
        }
    }
    ctx->pc = 0x21B178u;
label_21b178:
    // 0x21b178: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b17c:
    // 0x21b17c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_21b180:
    // 0x21b180: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21b180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21b184:
    // 0x21b184: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x21b184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_21b188:
    // 0x21b188: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21b188u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_21b18c:
    // 0x21b18c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_21b190:
    if (ctx->pc == 0x21B190u) {
        ctx->pc = 0x21B194u;
        goto label_21b194;
    }
    ctx->pc = 0x21B18Cu;
    {
        const bool branch_taken_0x21b18c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21b18c) {
            ctx->pc = 0x21B1ACu;
            goto label_21b1ac;
        }
    }
    ctx->pc = 0x21B194u;
label_21b194:
    // 0x21b194: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21b194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21b198:
    // 0x21b198: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x21b198u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_21b19c:
    // 0x21b19c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21b1a0:
    // 0x21b1a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b1a4:
    // 0x21b1a4: 0xc0a7ab4  jal         func_29EAD0
label_21b1a8:
    if (ctx->pc == 0x21B1A8u) {
        ctx->pc = 0x21B1A8u;
            // 0x21b1a8: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x21B1ACu;
        goto label_21b1ac;
    }
    ctx->pc = 0x21B1A4u;
    SET_GPR_U32(ctx, 31, 0x21B1ACu);
    ctx->pc = 0x21B1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B1A4u;
            // 0x21b1a8: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B1ACu; }
        if (ctx->pc != 0x21B1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B1ACu; }
        if (ctx->pc != 0x21B1ACu) { return; }
    }
    ctx->pc = 0x21B1ACu;
label_21b1ac:
    // 0x21b1ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21b1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b1b0:
    // 0x21b1b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21b1b4:
    // 0x21b1b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21b1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21b1b8:
    // 0x21b1b8: 0x3e00008  jr          $ra
label_21b1bc:
    if (ctx->pc == 0x21B1BCu) {
        ctx->pc = 0x21B1BCu;
            // 0x21b1bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x21B1C0u;
        goto label_21b1c0;
    }
    ctx->pc = 0x21B1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B1B8u;
            // 0x21b1bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B1C0u;
label_21b1c0:
    // 0x21b1c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21b1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_21b1c4:
    // 0x21b1c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21b1c8:
    // 0x21b1c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21b1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21b1cc:
    // 0x21b1cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21b1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21b1d0:
    // 0x21b1d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21b1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21b1d4:
    // 0x21b1d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21b1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21b1d8:
    // 0x21b1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21b1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21b1dc:
    // 0x21b1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21b1e0:
    // 0x21b1e0: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x21b1e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_21b1e4:
    // 0x21b1e4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21b1e8:
    // 0x21b1e8: 0xa39821  addu        $s3, $a1, $v1
    ctx->pc = 0x21b1e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_21b1ec:
    // 0x21b1ec: 0x80c20010  lb          $v0, 0x10($a2)
    ctx->pc = 0x21b1ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_21b1f0:
    // 0x21b1f0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x21b1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_21b1f4:
    // 0x21b1f4: 0xc29021  addu        $s2, $a2, $v0
    ctx->pc = 0x21b1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21b1f8:
    // 0x21b1f8: 0xc0a7a88  jal         func_29EA20
label_21b1fc:
    if (ctx->pc == 0x21B1FCu) {
        ctx->pc = 0x21B1FCu;
            // 0x21b1fc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x21B200u;
        goto label_21b200;
    }
    ctx->pc = 0x21B1F8u;
    SET_GPR_U32(ctx, 31, 0x21B200u);
    ctx->pc = 0x21B1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B1F8u;
            // 0x21b1fc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B200u; }
        if (ctx->pc != 0x21B200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B200u; }
        if (ctx->pc != 0x21B200u) { return; }
    }
    ctx->pc = 0x21B200u;
label_21b200:
    // 0x21b200: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x21b200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_21b204:
    // 0x21b204: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21b204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21b208:
    // 0x21b208: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_21b20c:
    if (ctx->pc == 0x21B20Cu) {
        ctx->pc = 0x21B20Cu;
            // 0x21b20c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x21B210u;
        goto label_21b210;
    }
    ctx->pc = 0x21B208u;
    {
        const bool branch_taken_0x21b208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B208u;
            // 0x21b20c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b208) {
            ctx->pc = 0x21B224u;
            goto label_21b224;
        }
    }
    ctx->pc = 0x21B210u;
label_21b210:
    // 0x21b210: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x21b210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21b214:
    // 0x21b214: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21b214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21b218:
    // 0x21b218: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21b218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b21c:
    // 0x21b21c: 0xc086a50  jal         func_21A940
label_21b220:
    if (ctx->pc == 0x21B220u) {
        ctx->pc = 0x21B220u;
            // 0x21b220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B224u;
        goto label_21b224;
    }
    ctx->pc = 0x21B21Cu;
    SET_GPR_U32(ctx, 31, 0x21B224u);
    ctx->pc = 0x21B220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B21Cu;
            // 0x21b220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A940u;
    if (runtime->hasFunction(0x21A940u)) {
        auto targetFn = runtime->lookupFunction(0x21A940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B224u; }
        if (ctx->pc != 0x21B224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A940_0x21a940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B224u; }
        if (ctx->pc != 0x21B224u) { return; }
    }
    ctx->pc = 0x21B224u;
label_21b224:
    // 0x21b224: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21b224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21b228:
    // 0x21b228: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21b228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21b22c:
    // 0x21b22c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21b22cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21b230:
    // 0x21b230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21b230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21b234:
    // 0x21b234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21b234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21b238:
    // 0x21b238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21b238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21b23c:
    // 0x21b23c: 0x3e00008  jr          $ra
label_21b240:
    if (ctx->pc == 0x21B240u) {
        ctx->pc = 0x21B240u;
            // 0x21b240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x21B244u;
        goto label_21b244;
    }
    ctx->pc = 0x21B23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B23Cu;
            // 0x21b240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B244u;
label_21b244:
    // 0x21b244: 0x0  nop
    ctx->pc = 0x21b244u;
    // NOP
label_21b248:
    // 0x21b248: 0x0  nop
    ctx->pc = 0x21b248u;
    // NOP
label_21b24c:
    // 0x21b24c: 0x0  nop
    ctx->pc = 0x21b24cu;
    // NOP
label_21b250:
    // 0x21b250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21b254:
    // 0x21b254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21b258:
    // 0x21b258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21b258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21b25c:
    // 0x21b25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21b260:
    // 0x21b260: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_21b264:
    if (ctx->pc == 0x21B264u) {
        ctx->pc = 0x21B264u;
            // 0x21b264: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B268u;
        goto label_21b268;
    }
    ctx->pc = 0x21B260u;
    {
        const bool branch_taken_0x21b260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b260) {
            ctx->pc = 0x21B264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21B260u;
            // 0x21b264: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21B2D0u;
            goto label_21b2d0;
        }
    }
    ctx->pc = 0x21B268u;
label_21b268:
    // 0x21b268: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b26c:
    // 0x21b26c: 0x2442e6b0  addiu       $v0, $v0, -0x1950
    ctx->pc = 0x21b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
label_21b270:
    // 0x21b270: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_21b274:
    if (ctx->pc == 0x21B274u) {
        ctx->pc = 0x21B274u;
            // 0x21b274: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21B278u;
        goto label_21b278;
    }
    ctx->pc = 0x21B270u;
    {
        const bool branch_taken_0x21b270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B270u;
            // 0x21b274: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b270) {
            ctx->pc = 0x21B2A4u;
            goto label_21b2a4;
        }
    }
    ctx->pc = 0x21B278u;
label_21b278:
    // 0x21b278: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b27c:
    // 0x21b27c: 0x2442e6d0  addiu       $v0, $v0, -0x1930
    ctx->pc = 0x21b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960848));
label_21b280:
    // 0x21b280: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_21b284:
    if (ctx->pc == 0x21B284u) {
        ctx->pc = 0x21B284u;
            // 0x21b284: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21B288u;
        goto label_21b288;
    }
    ctx->pc = 0x21B280u;
    {
        const bool branch_taken_0x21b280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B280u;
            // 0x21b284: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b280) {
            ctx->pc = 0x21B2A4u;
            goto label_21b2a4;
        }
    }
    ctx->pc = 0x21B288u;
label_21b288:
    // 0x21b288: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b28c:
    // 0x21b28c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_21b290:
    // 0x21b290: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_21b294:
    if (ctx->pc == 0x21B294u) {
        ctx->pc = 0x21B294u;
            // 0x21b294: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x21B298u;
        goto label_21b298;
    }
    ctx->pc = 0x21B290u;
    {
        const bool branch_taken_0x21b290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B290u;
            // 0x21b294: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b290) {
            ctx->pc = 0x21B2A4u;
            goto label_21b2a4;
        }
    }
    ctx->pc = 0x21B298u;
label_21b298:
    // 0x21b298: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21b298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_21b29c:
    // 0x21b29c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_21b2a0:
    // 0x21b2a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21b2a4:
    // 0x21b2a4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x21b2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_21b2a8:
    // 0x21b2a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21b2a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_21b2ac:
    // 0x21b2ac: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_21b2b0:
    if (ctx->pc == 0x21B2B0u) {
        ctx->pc = 0x21B2B4u;
        goto label_21b2b4;
    }
    ctx->pc = 0x21B2ACu;
    {
        const bool branch_taken_0x21b2ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21b2ac) {
            ctx->pc = 0x21B2CCu;
            goto label_21b2cc;
        }
    }
    ctx->pc = 0x21B2B4u;
label_21b2b4:
    // 0x21b2b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21b2b8:
    // 0x21b2b8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x21b2b8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_21b2bc:
    // 0x21b2bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_21b2c0:
    // 0x21b2c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b2c4:
    // 0x21b2c4: 0xc0a7ab4  jal         func_29EAD0
label_21b2c8:
    if (ctx->pc == 0x21B2C8u) {
        ctx->pc = 0x21B2C8u;
            // 0x21b2c8: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x21B2CCu;
        goto label_21b2cc;
    }
    ctx->pc = 0x21B2C4u;
    SET_GPR_U32(ctx, 31, 0x21B2CCu);
    ctx->pc = 0x21B2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B2C4u;
            // 0x21b2c8: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B2CCu; }
        if (ctx->pc != 0x21B2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B2CCu; }
        if (ctx->pc != 0x21B2CCu) { return; }
    }
    ctx->pc = 0x21B2CCu;
label_21b2cc:
    // 0x21b2cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21b2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b2d0:
    // 0x21b2d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21b2d4:
    // 0x21b2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21b2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21b2d8:
    // 0x21b2d8: 0x3e00008  jr          $ra
label_21b2dc:
    if (ctx->pc == 0x21B2DCu) {
        ctx->pc = 0x21B2DCu;
            // 0x21b2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x21B2E0u;
        goto label_21b2e0;
    }
    ctx->pc = 0x21B2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B2D8u;
            // 0x21b2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B2E0u;
label_21b2e0:
    // 0x21b2e0: 0x3e00008  jr          $ra
label_21b2e4:
    if (ctx->pc == 0x21B2E4u) {
        ctx->pc = 0x21B2E4u;
            // 0x21b2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B2E8u;
        goto label_21b2e8;
    }
    ctx->pc = 0x21B2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B2E0u;
            // 0x21b2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B2E8u;
label_21b2e8:
    // 0x21b2e8: 0x0  nop
    ctx->pc = 0x21b2e8u;
    // NOP
label_21b2ec:
    // 0x21b2ec: 0x0  nop
    ctx->pc = 0x21b2ecu;
    // NOP
label_21b2f0:
    // 0x21b2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21b2f4:
    // 0x21b2f4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_21b2f8:
    if (ctx->pc == 0x21B2F8u) {
        ctx->pc = 0x21B2F8u;
            // 0x21b2f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x21B2FCu;
        goto label_21b2fc;
    }
    ctx->pc = 0x21B2F4u;
    {
        const bool branch_taken_0x21b2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B2F4u;
            // 0x21b2f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2f4) {
            ctx->pc = 0x21B30Cu;
            goto label_21b30c;
        }
    }
    ctx->pc = 0x21B2FCu;
label_21b2fc:
    // 0x21b2fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x21b2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21b300:
    // 0x21b300: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x21b300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_21b304:
    // 0x21b304: 0x320f809  jalr        $t9
label_21b308:
    if (ctx->pc == 0x21B308u) {
        ctx->pc = 0x21B308u;
            // 0x21b308: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21B30Cu;
        goto label_21b30c;
    }
    ctx->pc = 0x21B304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x21B30Cu);
        ctx->pc = 0x21B308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B304u;
            // 0x21b308: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21B30Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21B30Cu; }
            if (ctx->pc != 0x21B30Cu) { return; }
        }
        }
    }
    ctx->pc = 0x21B30Cu;
label_21b30c:
    // 0x21b30c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21b310:
    // 0x21b310: 0x3e00008  jr          $ra
label_21b314:
    if (ctx->pc == 0x21B314u) {
        ctx->pc = 0x21B314u;
            // 0x21b314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x21B318u;
        goto label_21b318;
    }
    ctx->pc = 0x21B310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B310u;
            // 0x21b314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B318u;
label_21b318:
    // 0x21b318: 0x0  nop
    ctx->pc = 0x21b318u;
    // NOP
label_21b31c:
    // 0x21b31c: 0x0  nop
    ctx->pc = 0x21b31cu;
    // NOP
label_21b320:
    // 0x21b320: 0x3e00008  jr          $ra
label_21b324:
    if (ctx->pc == 0x21B324u) {
        ctx->pc = 0x21B324u;
            // 0x21b324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x21B328u;
        goto label_21b328;
    }
    ctx->pc = 0x21B320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B320u;
            // 0x21b324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B328u;
label_21b328:
    // 0x21b328: 0x0  nop
    ctx->pc = 0x21b328u;
    // NOP
label_21b32c:
    // 0x21b32c: 0x0  nop
    ctx->pc = 0x21b32cu;
    // NOP
label_21b330:
    // 0x21b330: 0x3e00008  jr          $ra
label_21b334:
    if (ctx->pc == 0x21B334u) {
        ctx->pc = 0x21B334u;
            // 0x21b334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B338u;
        goto label_21b338;
    }
    ctx->pc = 0x21B330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B330u;
            // 0x21b334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B338u;
label_21b338:
    // 0x21b338: 0x0  nop
    ctx->pc = 0x21b338u;
    // NOP
label_21b33c:
    // 0x21b33c: 0x0  nop
    ctx->pc = 0x21b33cu;
    // NOP
label_21b340:
    // 0x21b340: 0x3e00008  jr          $ra
label_21b344:
    if (ctx->pc == 0x21B344u) {
        ctx->pc = 0x21B348u;
        goto label_21b348;
    }
    ctx->pc = 0x21B340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B348u;
label_21b348:
    // 0x21b348: 0x0  nop
    ctx->pc = 0x21b348u;
    // NOP
label_21b34c:
    // 0x21b34c: 0x0  nop
    ctx->pc = 0x21b34cu;
    // NOP
label_21b350:
    // 0x21b350: 0x3e00008  jr          $ra
label_21b354:
    if (ctx->pc == 0x21B354u) {
        ctx->pc = 0x21B358u;
        goto label_21b358;
    }
    ctx->pc = 0x21B350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B358u;
label_21b358:
    // 0x21b358: 0x0  nop
    ctx->pc = 0x21b358u;
    // NOP
label_21b35c:
    // 0x21b35c: 0x0  nop
    ctx->pc = 0x21b35cu;
    // NOP
label_21b360:
    // 0x21b360: 0x3e00008  jr          $ra
label_21b364:
    if (ctx->pc == 0x21B364u) {
        ctx->pc = 0x21B364u;
            // 0x21b364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21B368u;
        goto label_21b368;
    }
    ctx->pc = 0x21B360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B360u;
            // 0x21b364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B368u;
label_21b368:
    // 0x21b368: 0x0  nop
    ctx->pc = 0x21b368u;
    // NOP
label_21b36c:
    // 0x21b36c: 0x0  nop
    ctx->pc = 0x21b36cu;
    // NOP
label_21b370:
    // 0x21b370: 0x3e00008  jr          $ra
label_21b374:
    if (ctx->pc == 0x21B374u) {
        ctx->pc = 0x21B378u;
        goto label_21b378;
    }
    ctx->pc = 0x21B370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B378u;
label_21b378:
    // 0x21b378: 0x0  nop
    ctx->pc = 0x21b378u;
    // NOP
label_21b37c:
    // 0x21b37c: 0x0  nop
    ctx->pc = 0x21b37cu;
    // NOP
label_21b380:
    // 0x21b380: 0x3e00008  jr          $ra
label_21b384:
    if (ctx->pc == 0x21B384u) {
        ctx->pc = 0x21B388u;
        goto label_21b388;
    }
    ctx->pc = 0x21B380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B388u;
label_21b388:
    // 0x21b388: 0x0  nop
    ctx->pc = 0x21b388u;
    // NOP
label_21b38c:
    // 0x21b38c: 0x0  nop
    ctx->pc = 0x21b38cu;
    // NOP
label_21b390:
    // 0x21b390: 0x3e00008  jr          $ra
label_21b394:
    if (ctx->pc == 0x21B394u) {
        ctx->pc = 0x21B394u;
            // 0x21b394: 0x24820044  addiu       $v0, $a0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
        ctx->pc = 0x21B398u;
        goto label_21b398;
    }
    ctx->pc = 0x21B390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B390u;
            // 0x21b394: 0x24820044  addiu       $v0, $a0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B398u;
label_21b398:
    // 0x21b398: 0x0  nop
    ctx->pc = 0x21b398u;
    // NOP
label_21b39c:
    // 0x21b39c: 0x0  nop
    ctx->pc = 0x21b39cu;
    // NOP
}
