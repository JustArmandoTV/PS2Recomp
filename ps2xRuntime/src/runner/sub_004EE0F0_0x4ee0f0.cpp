#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EE0F0
// Address: 0x4ee0f0 - 0x4ee3a0
void sub_004EE0F0_0x4ee0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE0F0_0x4ee0f0");
#endif

    switch (ctx->pc) {
        case 0x4ee0f0u: goto label_4ee0f0;
        case 0x4ee0f4u: goto label_4ee0f4;
        case 0x4ee0f8u: goto label_4ee0f8;
        case 0x4ee0fcu: goto label_4ee0fc;
        case 0x4ee100u: goto label_4ee100;
        case 0x4ee104u: goto label_4ee104;
        case 0x4ee108u: goto label_4ee108;
        case 0x4ee10cu: goto label_4ee10c;
        case 0x4ee110u: goto label_4ee110;
        case 0x4ee114u: goto label_4ee114;
        case 0x4ee118u: goto label_4ee118;
        case 0x4ee11cu: goto label_4ee11c;
        case 0x4ee120u: goto label_4ee120;
        case 0x4ee124u: goto label_4ee124;
        case 0x4ee128u: goto label_4ee128;
        case 0x4ee12cu: goto label_4ee12c;
        case 0x4ee130u: goto label_4ee130;
        case 0x4ee134u: goto label_4ee134;
        case 0x4ee138u: goto label_4ee138;
        case 0x4ee13cu: goto label_4ee13c;
        case 0x4ee140u: goto label_4ee140;
        case 0x4ee144u: goto label_4ee144;
        case 0x4ee148u: goto label_4ee148;
        case 0x4ee14cu: goto label_4ee14c;
        case 0x4ee150u: goto label_4ee150;
        case 0x4ee154u: goto label_4ee154;
        case 0x4ee158u: goto label_4ee158;
        case 0x4ee15cu: goto label_4ee15c;
        case 0x4ee160u: goto label_4ee160;
        case 0x4ee164u: goto label_4ee164;
        case 0x4ee168u: goto label_4ee168;
        case 0x4ee16cu: goto label_4ee16c;
        case 0x4ee170u: goto label_4ee170;
        case 0x4ee174u: goto label_4ee174;
        case 0x4ee178u: goto label_4ee178;
        case 0x4ee17cu: goto label_4ee17c;
        case 0x4ee180u: goto label_4ee180;
        case 0x4ee184u: goto label_4ee184;
        case 0x4ee188u: goto label_4ee188;
        case 0x4ee18cu: goto label_4ee18c;
        case 0x4ee190u: goto label_4ee190;
        case 0x4ee194u: goto label_4ee194;
        case 0x4ee198u: goto label_4ee198;
        case 0x4ee19cu: goto label_4ee19c;
        case 0x4ee1a0u: goto label_4ee1a0;
        case 0x4ee1a4u: goto label_4ee1a4;
        case 0x4ee1a8u: goto label_4ee1a8;
        case 0x4ee1acu: goto label_4ee1ac;
        case 0x4ee1b0u: goto label_4ee1b0;
        case 0x4ee1b4u: goto label_4ee1b4;
        case 0x4ee1b8u: goto label_4ee1b8;
        case 0x4ee1bcu: goto label_4ee1bc;
        case 0x4ee1c0u: goto label_4ee1c0;
        case 0x4ee1c4u: goto label_4ee1c4;
        case 0x4ee1c8u: goto label_4ee1c8;
        case 0x4ee1ccu: goto label_4ee1cc;
        case 0x4ee1d0u: goto label_4ee1d0;
        case 0x4ee1d4u: goto label_4ee1d4;
        case 0x4ee1d8u: goto label_4ee1d8;
        case 0x4ee1dcu: goto label_4ee1dc;
        case 0x4ee1e0u: goto label_4ee1e0;
        case 0x4ee1e4u: goto label_4ee1e4;
        case 0x4ee1e8u: goto label_4ee1e8;
        case 0x4ee1ecu: goto label_4ee1ec;
        case 0x4ee1f0u: goto label_4ee1f0;
        case 0x4ee1f4u: goto label_4ee1f4;
        case 0x4ee1f8u: goto label_4ee1f8;
        case 0x4ee1fcu: goto label_4ee1fc;
        case 0x4ee200u: goto label_4ee200;
        case 0x4ee204u: goto label_4ee204;
        case 0x4ee208u: goto label_4ee208;
        case 0x4ee20cu: goto label_4ee20c;
        case 0x4ee210u: goto label_4ee210;
        case 0x4ee214u: goto label_4ee214;
        case 0x4ee218u: goto label_4ee218;
        case 0x4ee21cu: goto label_4ee21c;
        case 0x4ee220u: goto label_4ee220;
        case 0x4ee224u: goto label_4ee224;
        case 0x4ee228u: goto label_4ee228;
        case 0x4ee22cu: goto label_4ee22c;
        case 0x4ee230u: goto label_4ee230;
        case 0x4ee234u: goto label_4ee234;
        case 0x4ee238u: goto label_4ee238;
        case 0x4ee23cu: goto label_4ee23c;
        case 0x4ee240u: goto label_4ee240;
        case 0x4ee244u: goto label_4ee244;
        case 0x4ee248u: goto label_4ee248;
        case 0x4ee24cu: goto label_4ee24c;
        case 0x4ee250u: goto label_4ee250;
        case 0x4ee254u: goto label_4ee254;
        case 0x4ee258u: goto label_4ee258;
        case 0x4ee25cu: goto label_4ee25c;
        case 0x4ee260u: goto label_4ee260;
        case 0x4ee264u: goto label_4ee264;
        case 0x4ee268u: goto label_4ee268;
        case 0x4ee26cu: goto label_4ee26c;
        case 0x4ee270u: goto label_4ee270;
        case 0x4ee274u: goto label_4ee274;
        case 0x4ee278u: goto label_4ee278;
        case 0x4ee27cu: goto label_4ee27c;
        case 0x4ee280u: goto label_4ee280;
        case 0x4ee284u: goto label_4ee284;
        case 0x4ee288u: goto label_4ee288;
        case 0x4ee28cu: goto label_4ee28c;
        case 0x4ee290u: goto label_4ee290;
        case 0x4ee294u: goto label_4ee294;
        case 0x4ee298u: goto label_4ee298;
        case 0x4ee29cu: goto label_4ee29c;
        case 0x4ee2a0u: goto label_4ee2a0;
        case 0x4ee2a4u: goto label_4ee2a4;
        case 0x4ee2a8u: goto label_4ee2a8;
        case 0x4ee2acu: goto label_4ee2ac;
        case 0x4ee2b0u: goto label_4ee2b0;
        case 0x4ee2b4u: goto label_4ee2b4;
        case 0x4ee2b8u: goto label_4ee2b8;
        case 0x4ee2bcu: goto label_4ee2bc;
        case 0x4ee2c0u: goto label_4ee2c0;
        case 0x4ee2c4u: goto label_4ee2c4;
        case 0x4ee2c8u: goto label_4ee2c8;
        case 0x4ee2ccu: goto label_4ee2cc;
        case 0x4ee2d0u: goto label_4ee2d0;
        case 0x4ee2d4u: goto label_4ee2d4;
        case 0x4ee2d8u: goto label_4ee2d8;
        case 0x4ee2dcu: goto label_4ee2dc;
        case 0x4ee2e0u: goto label_4ee2e0;
        case 0x4ee2e4u: goto label_4ee2e4;
        case 0x4ee2e8u: goto label_4ee2e8;
        case 0x4ee2ecu: goto label_4ee2ec;
        case 0x4ee2f0u: goto label_4ee2f0;
        case 0x4ee2f4u: goto label_4ee2f4;
        case 0x4ee2f8u: goto label_4ee2f8;
        case 0x4ee2fcu: goto label_4ee2fc;
        case 0x4ee300u: goto label_4ee300;
        case 0x4ee304u: goto label_4ee304;
        case 0x4ee308u: goto label_4ee308;
        case 0x4ee30cu: goto label_4ee30c;
        case 0x4ee310u: goto label_4ee310;
        case 0x4ee314u: goto label_4ee314;
        case 0x4ee318u: goto label_4ee318;
        case 0x4ee31cu: goto label_4ee31c;
        case 0x4ee320u: goto label_4ee320;
        case 0x4ee324u: goto label_4ee324;
        case 0x4ee328u: goto label_4ee328;
        case 0x4ee32cu: goto label_4ee32c;
        case 0x4ee330u: goto label_4ee330;
        case 0x4ee334u: goto label_4ee334;
        case 0x4ee338u: goto label_4ee338;
        case 0x4ee33cu: goto label_4ee33c;
        case 0x4ee340u: goto label_4ee340;
        case 0x4ee344u: goto label_4ee344;
        case 0x4ee348u: goto label_4ee348;
        case 0x4ee34cu: goto label_4ee34c;
        case 0x4ee350u: goto label_4ee350;
        case 0x4ee354u: goto label_4ee354;
        case 0x4ee358u: goto label_4ee358;
        case 0x4ee35cu: goto label_4ee35c;
        case 0x4ee360u: goto label_4ee360;
        case 0x4ee364u: goto label_4ee364;
        case 0x4ee368u: goto label_4ee368;
        case 0x4ee36cu: goto label_4ee36c;
        case 0x4ee370u: goto label_4ee370;
        case 0x4ee374u: goto label_4ee374;
        case 0x4ee378u: goto label_4ee378;
        case 0x4ee37cu: goto label_4ee37c;
        case 0x4ee380u: goto label_4ee380;
        case 0x4ee384u: goto label_4ee384;
        case 0x4ee388u: goto label_4ee388;
        case 0x4ee38cu: goto label_4ee38c;
        case 0x4ee390u: goto label_4ee390;
        case 0x4ee394u: goto label_4ee394;
        case 0x4ee398u: goto label_4ee398;
        case 0x4ee39cu: goto label_4ee39c;
        default: break;
    }

    ctx->pc = 0x4ee0f0u;

label_4ee0f0:
    // 0x4ee0f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ee0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ee0f4:
    // 0x4ee0f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ee0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4ee0f8:
    // 0x4ee0f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ee0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ee0fc:
    // 0x4ee0fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ee0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ee100:
    // 0x4ee100: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ee100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ee104:
    // 0x4ee104: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ee104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ee108:
    // 0x4ee108: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ee108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ee10c:
    // 0x4ee10c: 0x8ca40da0  lw          $a0, 0xDA0($a1)
    ctx->pc = 0x4ee10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_4ee110:
    // 0x4ee110: 0x30832200  andi        $v1, $a0, 0x2200
    ctx->pc = 0x4ee110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8704);
label_4ee114:
    // 0x4ee114: 0x1460009b  bnez        $v1, . + 4 + (0x9B << 2)
label_4ee118:
    if (ctx->pc == 0x4EE118u) {
        ctx->pc = 0x4EE118u;
            // 0x4ee118: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE11Cu;
        goto label_4ee11c;
    }
    ctx->pc = 0x4EE114u;
    {
        const bool branch_taken_0x4ee114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EE118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE114u;
            // 0x4ee118: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee114) {
            ctx->pc = 0x4EE384u;
            goto label_4ee384;
        }
    }
    ctx->pc = 0x4EE11Cu;
label_4ee11c:
    // 0x4ee11c: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x4ee11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_4ee120:
    // 0x4ee120: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4ee124:
    if (ctx->pc == 0x4EE124u) {
        ctx->pc = 0x4EE124u;
            // 0x4ee124: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE128u;
        goto label_4ee128;
    }
    ctx->pc = 0x4EE120u;
    {
        const bool branch_taken_0x4ee120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee120) {
            ctx->pc = 0x4EE124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE120u;
            // 0x4ee124: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE140u;
            goto label_4ee140;
        }
    }
    ctx->pc = 0x4EE128u;
label_4ee128:
    // 0x4ee128: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ee128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ee12c:
    // 0x4ee12c: 0xc14b7d4  jal         func_52DF50
label_4ee130:
    if (ctx->pc == 0x4EE130u) {
        ctx->pc = 0x4EE130u;
            // 0x4ee130: 0x8c443fe8  lw          $a0, 0x3FE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16360)));
        ctx->pc = 0x4EE134u;
        goto label_4ee134;
    }
    ctx->pc = 0x4EE12Cu;
    SET_GPR_U32(ctx, 31, 0x4EE134u);
    ctx->pc = 0x4EE130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE12Cu;
            // 0x4ee130: 0x8c443fe8  lw          $a0, 0x3FE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x52DF50u;
    if (runtime->hasFunction(0x52DF50u)) {
        auto targetFn = runtime->lookupFunction(0x52DF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE134u; }
        if (ctx->pc != 0x4EE134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0052DF50_0x52df50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE134u; }
        if (ctx->pc != 0x4EE134u) { return; }
    }
    ctx->pc = 0x4EE134u;
label_4ee134:
    // 0x4ee134: 0x10000002  b           . + 4 + (0x2 << 2)
label_4ee138:
    if (ctx->pc == 0x4EE138u) {
        ctx->pc = 0x4EE138u;
            // 0x4ee138: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4EE13Cu;
        goto label_4ee13c;
    }
    ctx->pc = 0x4EE134u;
    {
        const bool branch_taken_0x4ee134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE134u;
            // 0x4ee138: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee134) {
            ctx->pc = 0x4EE140u;
            goto label_4ee140;
        }
    }
    ctx->pc = 0x4EE13Cu;
label_4ee13c:
    // 0x4ee13c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4ee13cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee140:
    // 0x4ee140: 0x54600091  bnel        $v1, $zero, . + 4 + (0x91 << 2)
label_4ee144:
    if (ctx->pc == 0x4EE144u) {
        ctx->pc = 0x4EE144u;
            // 0x4ee144: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4EE148u;
        goto label_4ee148;
    }
    ctx->pc = 0x4EE140u;
    {
        const bool branch_taken_0x4ee140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee140) {
            ctx->pc = 0x4EE144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE140u;
            // 0x4ee144: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE388u;
            goto label_4ee388;
        }
    }
    ctx->pc = 0x4EE148u;
label_4ee148:
    // 0x4ee148: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x4ee148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_4ee14c:
    // 0x4ee14c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4ee14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4ee150:
    // 0x4ee150: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_4ee154:
    if (ctx->pc == 0x4EE154u) {
        ctx->pc = 0x4EE154u;
            // 0x4ee154: 0x8e240d98  lw          $a0, 0xD98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
        ctx->pc = 0x4EE158u;
        goto label_4ee158;
    }
    ctx->pc = 0x4EE150u;
    {
        const bool branch_taken_0x4ee150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4ee150) {
            ctx->pc = 0x4EE154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE150u;
            // 0x4ee154: 0x8e240d98  lw          $a0, 0xD98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE164u;
            goto label_4ee164;
        }
    }
    ctx->pc = 0x4EE158u;
label_4ee158:
    // 0x4ee158: 0x1000008a  b           . + 4 + (0x8A << 2)
label_4ee15c:
    if (ctx->pc == 0x4EE15Cu) {
        ctx->pc = 0x4EE160u;
        goto label_4ee160;
    }
    ctx->pc = 0x4EE158u;
    {
        const bool branch_taken_0x4ee158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee158) {
            ctx->pc = 0x4EE384u;
            goto label_4ee384;
        }
    }
    ctx->pc = 0x4EE160u;
label_4ee160:
    // 0x4ee160: 0x8e240d98  lw          $a0, 0xD98($s1)
    ctx->pc = 0x4ee160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_4ee164:
    // 0x4ee164: 0x8e420cbc  lw          $v0, 0xCBC($s2)
    ctx->pc = 0x4ee164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3260)));
label_4ee168:
    // 0x4ee168: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4ee168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4ee16c:
    // 0x4ee16c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ee16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ee170:
    // 0x4ee170: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ee170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ee174:
    // 0x4ee174: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x4ee174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ee178:
    // 0x4ee178: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ee178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ee17c:
    // 0x4ee17c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4ee17cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4ee180:
    // 0x4ee180: 0x320f809  jalr        $t9
label_4ee184:
    if (ctx->pc == 0x4EE184u) {
        ctx->pc = 0x4EE188u;
        goto label_4ee188;
    }
    ctx->pc = 0x4EE180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE188u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE188u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE188u; }
            if (ctx->pc != 0x4EE188u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE188u;
label_4ee188:
    // 0x4ee188: 0x8e040d98  lw          $a0, 0xD98($s0)
    ctx->pc = 0x4ee188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4ee18c:
    // 0x4ee18c: 0x8e420cbc  lw          $v0, 0xCBC($s2)
    ctx->pc = 0x4ee18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3260)));
label_4ee190:
    // 0x4ee190: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4ee190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4ee194:
    // 0x4ee194: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ee194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ee198:
    // 0x4ee198: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ee198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ee19c:
    // 0x4ee19c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x4ee19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ee1a0:
    // 0x4ee1a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ee1a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ee1a4:
    // 0x4ee1a4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x4ee1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_4ee1a8:
    // 0x4ee1a8: 0x320f809  jalr        $t9
label_4ee1ac:
    if (ctx->pc == 0x4EE1ACu) {
        ctx->pc = 0x4EE1B0u;
        goto label_4ee1b0;
    }
    ctx->pc = 0x4EE1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE1B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE1B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE1B0u; }
            if (ctx->pc != 0x4EE1B0u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE1B0u;
label_4ee1b0:
    // 0x4ee1b0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x4ee1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_4ee1b4:
    // 0x4ee1b4: 0x26240a50  addiu       $a0, $s1, 0xA50
    ctx->pc = 0x4ee1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_4ee1b8:
    // 0x4ee1b8: 0xc0eea24  jal         func_3BA890
label_4ee1bc:
    if (ctx->pc == 0x4EE1BCu) {
        ctx->pc = 0x4EE1BCu;
            // 0x4ee1bc: 0xae220a7c  sw          $v0, 0xA7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2684), GPR_U32(ctx, 2));
        ctx->pc = 0x4EE1C0u;
        goto label_4ee1c0;
    }
    ctx->pc = 0x4EE1B8u;
    SET_GPR_U32(ctx, 31, 0x4EE1C0u);
    ctx->pc = 0x4EE1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE1B8u;
            // 0x4ee1bc: 0xae220a7c  sw          $v0, 0xA7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE1C0u; }
        if (ctx->pc != 0x4EE1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE1C0u; }
        if (ctx->pc != 0x4EE1C0u) { return; }
    }
    ctx->pc = 0x4EE1C0u;
label_4ee1c0:
    // 0x4ee1c0: 0xc6010a7c  lwc1        $f1, 0xA7C($s0)
    ctx->pc = 0x4ee1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ee1c4:
    // 0x4ee1c4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4ee1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4ee1c8:
    // 0x4ee1c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ee1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ee1cc:
    // 0x4ee1cc: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x4ee1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_4ee1d0:
    // 0x4ee1d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4ee1d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4ee1d4:
    // 0x4ee1d4: 0xc0eea24  jal         func_3BA890
label_4ee1d8:
    if (ctx->pc == 0x4EE1D8u) {
        ctx->pc = 0x4EE1D8u;
            // 0x4ee1d8: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->pc = 0x4EE1DCu;
        goto label_4ee1dc;
    }
    ctx->pc = 0x4EE1D4u;
    SET_GPR_U32(ctx, 31, 0x4EE1DCu);
    ctx->pc = 0x4EE1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE1D4u;
            // 0x4ee1d8: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE1DCu; }
        if (ctx->pc != 0x4EE1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE1DCu; }
        if (ctx->pc != 0x4EE1DCu) { return; }
    }
    ctx->pc = 0x4EE1DCu;
label_4ee1dc:
    // 0x4ee1dc: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x4ee1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_4ee1e0:
    // 0x4ee1e0: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4ee1e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4ee1e4:
    // 0x4ee1e4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4ee1e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4ee1e8:
    // 0x4ee1e8: 0x320f809  jalr        $t9
label_4ee1ec:
    if (ctx->pc == 0x4EE1ECu) {
        ctx->pc = 0x4EE1ECu;
            // 0x4ee1ec: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x4EE1F0u;
        goto label_4ee1f0;
    }
    ctx->pc = 0x4EE1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE1F0u);
        ctx->pc = 0x4EE1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE1E8u;
            // 0x4ee1ec: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE1F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE1F0u; }
            if (ctx->pc != 0x4EE1F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE1F0u;
label_4ee1f0:
    // 0x4ee1f0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x4ee1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_4ee1f4:
    // 0x4ee1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ee1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ee1f8:
    // 0x4ee1f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ee1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ee1fc:
    // 0x4ee1fc: 0xc078534  jal         func_1E14D0
label_4ee200:
    if (ctx->pc == 0x4EE200u) {
        ctx->pc = 0x4EE200u;
            // 0x4ee200: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4EE204u;
        goto label_4ee204;
    }
    ctx->pc = 0x4EE1FCu;
    SET_GPR_U32(ctx, 31, 0x4EE204u);
    ctx->pc = 0x4EE200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE1FCu;
            // 0x4ee200: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E14D0u;
    if (runtime->hasFunction(0x1E14D0u)) {
        auto targetFn = runtime->lookupFunction(0x1E14D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE204u; }
        if (ctx->pc != 0x4EE204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E14D0_0x1e14d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE204u; }
        if (ctx->pc != 0x4EE204u) { return; }
    }
    ctx->pc = 0x4EE204u;
label_4ee204:
    // 0x4ee204: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x4ee204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4ee208:
    // 0x4ee208: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x4ee208u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4ee20c:
    // 0x4ee20c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4ee210:
    if (ctx->pc == 0x4EE210u) {
        ctx->pc = 0x4EE210u;
            // 0x4ee210: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE214u;
        goto label_4ee214;
    }
    ctx->pc = 0x4EE20Cu;
    {
        const bool branch_taken_0x4ee20c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4EE210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE20Cu;
            // 0x4ee210: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee20c) {
            ctx->pc = 0x4EE224u;
            goto label_4ee224;
        }
    }
    ctx->pc = 0x4EE214u;
label_4ee214:
    // 0x4ee214: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4ee214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4ee218:
    // 0x4ee218: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4ee21c:
    if (ctx->pc == 0x4EE21Cu) {
        ctx->pc = 0x4EE220u;
        goto label_4ee220;
    }
    ctx->pc = 0x4EE218u;
    {
        const bool branch_taken_0x4ee218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee218) {
            ctx->pc = 0x4EE224u;
            goto label_4ee224;
        }
    }
    ctx->pc = 0x4EE220u;
label_4ee220:
    // 0x4ee220: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x4ee220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ee224:
    // 0x4ee224: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4ee228:
    if (ctx->pc == 0x4EE228u) {
        ctx->pc = 0x4EE22Cu;
        goto label_4ee22c;
    }
    ctx->pc = 0x4EE224u;
    {
        const bool branch_taken_0x4ee224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee224) {
            ctx->pc = 0x4EE240u;
            goto label_4ee240;
        }
    }
    ctx->pc = 0x4EE22Cu;
label_4ee22c:
    // 0x4ee22c: 0xc075eb4  jal         func_1D7AD0
label_4ee230:
    if (ctx->pc == 0x4EE230u) {
        ctx->pc = 0x4EE230u;
            // 0x4ee230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE234u;
        goto label_4ee234;
    }
    ctx->pc = 0x4EE22Cu;
    SET_GPR_U32(ctx, 31, 0x4EE234u);
    ctx->pc = 0x4EE230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE22Cu;
            // 0x4ee230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE234u; }
        if (ctx->pc != 0x4EE234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE234u; }
        if (ctx->pc != 0x4EE234u) { return; }
    }
    ctx->pc = 0x4EE234u;
label_4ee234:
    // 0x4ee234: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4ee238:
    if (ctx->pc == 0x4EE238u) {
        ctx->pc = 0x4EE23Cu;
        goto label_4ee23c;
    }
    ctx->pc = 0x4EE234u;
    {
        const bool branch_taken_0x4ee234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee234) {
            ctx->pc = 0x4EE240u;
            goto label_4ee240;
        }
    }
    ctx->pc = 0x4EE23Cu;
label_4ee23c:
    // 0x4ee23c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ee23cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee240:
    // 0x4ee240: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
label_4ee244:
    if (ctx->pc == 0x4EE244u) {
        ctx->pc = 0x4EE244u;
            // 0x4ee244: 0x8e220e34  lw          $v0, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->pc = 0x4EE248u;
        goto label_4ee248;
    }
    ctx->pc = 0x4EE240u;
    {
        const bool branch_taken_0x4ee240 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee240) {
            ctx->pc = 0x4EE244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE240u;
            // 0x4ee244: 0x8e220e34  lw          $v0, 0xE34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE270u;
            goto label_4ee270;
        }
    }
    ctx->pc = 0x4EE248u;
label_4ee248:
    // 0x4ee248: 0xc040180  jal         func_100600
label_4ee24c:
    if (ctx->pc == 0x4EE24Cu) {
        ctx->pc = 0x4EE24Cu;
            // 0x4ee24c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x4EE250u;
        goto label_4ee250;
    }
    ctx->pc = 0x4EE248u;
    SET_GPR_U32(ctx, 31, 0x4EE250u);
    ctx->pc = 0x4EE24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE248u;
            // 0x4ee24c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE250u; }
        if (ctx->pc != 0x4EE250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE250u; }
        if (ctx->pc != 0x4EE250u) { return; }
    }
    ctx->pc = 0x4EE250u;
label_4ee250:
    // 0x4ee250: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4ee254:
    if (ctx->pc == 0x4EE254u) {
        ctx->pc = 0x4EE258u;
        goto label_4ee258;
    }
    ctx->pc = 0x4EE250u;
    {
        const bool branch_taken_0x4ee250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee250) {
            ctx->pc = 0x4EE26Cu;
            goto label_4ee26c;
        }
    }
    ctx->pc = 0x4EE258u;
label_4ee258:
    // 0x4ee258: 0x820511aa  lb          $a1, 0x11AA($s0)
    ctx->pc = 0x4ee258u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_4ee25c:
    // 0x4ee25c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ee25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ee260:
    // 0x4ee260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ee260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee264:
    // 0x4ee264: 0xc151b50  jal         func_546D40
label_4ee268:
    if (ctx->pc == 0x4EE268u) {
        ctx->pc = 0x4EE268u;
            // 0x4ee268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE26Cu;
        goto label_4ee26c;
    }
    ctx->pc = 0x4EE264u;
    SET_GPR_U32(ctx, 31, 0x4EE26Cu);
    ctx->pc = 0x4EE268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE264u;
            // 0x4ee268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x546D40u;
    if (runtime->hasFunction(0x546D40u)) {
        auto targetFn = runtime->lookupFunction(0x546D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE26Cu; }
        if (ctx->pc != 0x4EE26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00546D40_0x546d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE26Cu; }
        if (ctx->pc != 0x4EE26Cu) { return; }
    }
    ctx->pc = 0x4EE26Cu;
label_4ee26c:
    // 0x4ee26c: 0x8e220e34  lw          $v0, 0xE34($s1)
    ctx->pc = 0x4ee26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_4ee270:
    // 0x4ee270: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4ee270u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4ee274:
    // 0x4ee274: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4ee278:
    if (ctx->pc == 0x4EE278u) {
        ctx->pc = 0x4EE278u;
            // 0x4ee278: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE27Cu;
        goto label_4ee27c;
    }
    ctx->pc = 0x4EE274u;
    {
        const bool branch_taken_0x4ee274 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4EE278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE274u;
            // 0x4ee278: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee274) {
            ctx->pc = 0x4EE28Cu;
            goto label_4ee28c;
        }
    }
    ctx->pc = 0x4EE27Cu;
label_4ee27c:
    // 0x4ee27c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4ee27cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4ee280:
    // 0x4ee280: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4ee284:
    if (ctx->pc == 0x4EE284u) {
        ctx->pc = 0x4EE288u;
        goto label_4ee288;
    }
    ctx->pc = 0x4EE280u;
    {
        const bool branch_taken_0x4ee280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee280) {
            ctx->pc = 0x4EE28Cu;
            goto label_4ee28c;
        }
    }
    ctx->pc = 0x4EE288u;
label_4ee288:
    // 0x4ee288: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x4ee288u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ee28c:
    // 0x4ee28c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4ee290:
    if (ctx->pc == 0x4EE290u) {
        ctx->pc = 0x4EE294u;
        goto label_4ee294;
    }
    ctx->pc = 0x4EE28Cu;
    {
        const bool branch_taken_0x4ee28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee28c) {
            ctx->pc = 0x4EE2A8u;
            goto label_4ee2a8;
        }
    }
    ctx->pc = 0x4EE294u;
label_4ee294:
    // 0x4ee294: 0xc075eb4  jal         func_1D7AD0
label_4ee298:
    if (ctx->pc == 0x4EE298u) {
        ctx->pc = 0x4EE298u;
            // 0x4ee298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE29Cu;
        goto label_4ee29c;
    }
    ctx->pc = 0x4EE294u;
    SET_GPR_U32(ctx, 31, 0x4EE29Cu);
    ctx->pc = 0x4EE298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE294u;
            // 0x4ee298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE29Cu; }
        if (ctx->pc != 0x4EE29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE29Cu; }
        if (ctx->pc != 0x4EE29Cu) { return; }
    }
    ctx->pc = 0x4EE29Cu;
label_4ee29c:
    // 0x4ee29c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4ee2a0:
    if (ctx->pc == 0x4EE2A0u) {
        ctx->pc = 0x4EE2A4u;
        goto label_4ee2a4;
    }
    ctx->pc = 0x4EE29Cu;
    {
        const bool branch_taken_0x4ee29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ee29c) {
            ctx->pc = 0x4EE2A8u;
            goto label_4ee2a8;
        }
    }
    ctx->pc = 0x4EE2A4u;
label_4ee2a4:
    // 0x4ee2a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4ee2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ee2a8:
    // 0x4ee2a8: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_4ee2ac:
    if (ctx->pc == 0x4EE2ACu) {
        ctx->pc = 0x4EE2ACu;
            // 0x4ee2ac: 0x8e220a68  lw          $v0, 0xA68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
        ctx->pc = 0x4EE2B0u;
        goto label_4ee2b0;
    }
    ctx->pc = 0x4EE2A8u;
    {
        const bool branch_taken_0x4ee2a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee2a8) {
            ctx->pc = 0x4EE2ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE2A8u;
            // 0x4ee2ac: 0x8e220a68  lw          $v0, 0xA68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE344u;
            goto label_4ee344;
        }
    }
    ctx->pc = 0x4EE2B0u;
label_4ee2b0:
    // 0x4ee2b0: 0xc040180  jal         func_100600
label_4ee2b4:
    if (ctx->pc == 0x4EE2B4u) {
        ctx->pc = 0x4EE2B4u;
            // 0x4ee2b4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x4EE2B8u;
        goto label_4ee2b8;
    }
    ctx->pc = 0x4EE2B0u;
    SET_GPR_U32(ctx, 31, 0x4EE2B8u);
    ctx->pc = 0x4EE2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE2B0u;
            // 0x4ee2b4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE2B8u; }
        if (ctx->pc != 0x4EE2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE2B8u; }
        if (ctx->pc != 0x4EE2B8u) { return; }
    }
    ctx->pc = 0x4EE2B8u;
label_4ee2b8:
    // 0x4ee2b8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4ee2bc:
    if (ctx->pc == 0x4EE2BCu) {
        ctx->pc = 0x4EE2BCu;
            // 0x4ee2bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EE2C0u;
        goto label_4ee2c0;
    }
    ctx->pc = 0x4EE2B8u;
    {
        const bool branch_taken_0x4ee2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE2B8u;
            // 0x4ee2bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee2b8) {
            ctx->pc = 0x4EE340u;
            goto label_4ee340;
        }
    }
    ctx->pc = 0x4EE2C0u;
label_4ee2c0:
    // 0x4ee2c0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4ee2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4ee2c4:
    // 0x4ee2c4: 0x823211aa  lb          $s2, 0x11AA($s1)
    ctx->pc = 0x4ee2c4u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_4ee2c8:
    // 0x4ee2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ee2cc:
    // 0x4ee2cc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4ee2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4ee2d0:
    // 0x4ee2d0: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x4ee2d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_4ee2d4:
    // 0x4ee2d4: 0xc10ca68  jal         func_4329A0
label_4ee2d8:
    if (ctx->pc == 0x4EE2D8u) {
        ctx->pc = 0x4EE2D8u;
            // 0x4ee2d8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4EE2DCu;
        goto label_4ee2dc;
    }
    ctx->pc = 0x4EE2D4u;
    SET_GPR_U32(ctx, 31, 0x4EE2DCu);
    ctx->pc = 0x4EE2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE2D4u;
            // 0x4ee2d8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE2DCu; }
        if (ctx->pc != 0x4EE2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EE2DCu; }
        if (ctx->pc != 0x4EE2DCu) { return; }
    }
    ctx->pc = 0x4EE2DCu;
label_4ee2dc:
    // 0x4ee2dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4ee2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4ee2e0:
    // 0x4ee2e0: 0x12163c  dsll32      $v0, $s2, 24
    ctx->pc = 0x4ee2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 24));
label_4ee2e4:
    // 0x4ee2e4: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4ee2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4ee2e8:
    // 0x4ee2e8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4ee2e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4ee2ec:
    // 0x4ee2ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ee2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4ee2f0:
    // 0x4ee2f0: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x4ee2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_4ee2f4:
    // 0x4ee2f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4ee2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ee2f8:
    // 0x4ee2f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4ee2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4ee2fc:
    // 0x4ee2fc: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x4ee2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_4ee300:
    // 0x4ee300: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ee300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ee304:
    // 0x4ee304: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x4ee304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_4ee308:
    // 0x4ee308: 0x3c02e014  lui         $v0, 0xE014
    ctx->pc = 0x4ee308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57364 << 16));
label_4ee30c:
    // 0x4ee30c: 0x344414ff  ori         $a0, $v0, 0x14FF
    ctx->pc = 0x4ee30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5375);
label_4ee310:
    // 0x4ee310: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4ee310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_4ee314:
    // 0x4ee314: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x4ee314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_4ee318:
    // 0x4ee318: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x4ee318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_4ee31c:
    // 0x4ee31c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x4ee31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_4ee320:
    // 0x4ee320: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4ee320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ee324:
    // 0x4ee324: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4ee324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4ee328:
    // 0x4ee328: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x4ee328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_4ee32c:
    // 0x4ee32c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4ee32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4ee330:
    // 0x4ee330: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4ee330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ee334:
    // 0x4ee334: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x4ee334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_4ee338:
    // 0x4ee338: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x4ee338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_4ee33c:
    // 0x4ee33c: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x4ee33cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_4ee340:
    // 0x4ee340: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x4ee340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
label_4ee344:
    // 0x4ee344: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4ee348:
    if (ctx->pc == 0x4EE348u) {
        ctx->pc = 0x4EE348u;
            // 0x4ee348: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4EE34Cu;
        goto label_4ee34c;
    }
    ctx->pc = 0x4EE344u;
    {
        const bool branch_taken_0x4ee344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ee344) {
            ctx->pc = 0x4EE348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE344u;
            // 0x4ee348: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EE374u;
            goto label_4ee374;
        }
    }
    ctx->pc = 0x4EE34Cu;
label_4ee34c:
    // 0x4ee34c: 0x8e220a68  lw          $v0, 0xA68($s1)
    ctx->pc = 0x4ee34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
label_4ee350:
    // 0x4ee350: 0x26230a50  addiu       $v1, $s1, 0xA50
    ctx->pc = 0x4ee350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_4ee354:
    // 0x4ee354: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ee354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ee358:
    // 0x4ee358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ee358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ee35c:
    // 0x4ee35c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4ee35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4ee360:
    // 0x4ee360: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x4ee360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_4ee364:
    // 0x4ee364: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4ee364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4ee368:
    // 0x4ee368: 0x320f809  jalr        $t9
label_4ee36c:
    if (ctx->pc == 0x4EE36Cu) {
        ctx->pc = 0x4EE370u;
        goto label_4ee370;
    }
    ctx->pc = 0x4EE368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE370u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE370u; }
            if (ctx->pc != 0x4EE370u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE370u;
label_4ee370:
    // 0x4ee370: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4ee370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ee374:
    // 0x4ee374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ee374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ee378:
    // 0x4ee378: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4ee378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4ee37c:
    // 0x4ee37c: 0x320f809  jalr        $t9
label_4ee380:
    if (ctx->pc == 0x4EE380u) {
        ctx->pc = 0x4EE380u;
            // 0x4ee380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EE384u;
        goto label_4ee384;
    }
    ctx->pc = 0x4EE37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EE384u);
        ctx->pc = 0x4EE380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE37Cu;
            // 0x4ee380: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EE384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EE384u; }
            if (ctx->pc != 0x4EE384u) { return; }
        }
        }
    }
    ctx->pc = 0x4EE384u;
label_4ee384:
    // 0x4ee384: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ee384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ee388:
    // 0x4ee388: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ee388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ee38c:
    // 0x4ee38c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ee38cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ee390:
    // 0x4ee390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ee390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ee394:
    // 0x4ee394: 0x3e00008  jr          $ra
label_4ee398:
    if (ctx->pc == 0x4EE398u) {
        ctx->pc = 0x4EE398u;
            // 0x4ee398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4EE39Cu;
        goto label_4ee39c;
    }
    ctx->pc = 0x4EE394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EE394u;
            // 0x4ee398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EE39Cu;
label_4ee39c:
    // 0x4ee39c: 0x0  nop
    ctx->pc = 0x4ee39cu;
    // NOP
}
