#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DD0D0
// Address: 0x3dd0d0 - 0x3dd380
void sub_003DD0D0_0x3dd0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD0D0_0x3dd0d0");
#endif

    switch (ctx->pc) {
        case 0x3dd0d0u: goto label_3dd0d0;
        case 0x3dd0d4u: goto label_3dd0d4;
        case 0x3dd0d8u: goto label_3dd0d8;
        case 0x3dd0dcu: goto label_3dd0dc;
        case 0x3dd0e0u: goto label_3dd0e0;
        case 0x3dd0e4u: goto label_3dd0e4;
        case 0x3dd0e8u: goto label_3dd0e8;
        case 0x3dd0ecu: goto label_3dd0ec;
        case 0x3dd0f0u: goto label_3dd0f0;
        case 0x3dd0f4u: goto label_3dd0f4;
        case 0x3dd0f8u: goto label_3dd0f8;
        case 0x3dd0fcu: goto label_3dd0fc;
        case 0x3dd100u: goto label_3dd100;
        case 0x3dd104u: goto label_3dd104;
        case 0x3dd108u: goto label_3dd108;
        case 0x3dd10cu: goto label_3dd10c;
        case 0x3dd110u: goto label_3dd110;
        case 0x3dd114u: goto label_3dd114;
        case 0x3dd118u: goto label_3dd118;
        case 0x3dd11cu: goto label_3dd11c;
        case 0x3dd120u: goto label_3dd120;
        case 0x3dd124u: goto label_3dd124;
        case 0x3dd128u: goto label_3dd128;
        case 0x3dd12cu: goto label_3dd12c;
        case 0x3dd130u: goto label_3dd130;
        case 0x3dd134u: goto label_3dd134;
        case 0x3dd138u: goto label_3dd138;
        case 0x3dd13cu: goto label_3dd13c;
        case 0x3dd140u: goto label_3dd140;
        case 0x3dd144u: goto label_3dd144;
        case 0x3dd148u: goto label_3dd148;
        case 0x3dd14cu: goto label_3dd14c;
        case 0x3dd150u: goto label_3dd150;
        case 0x3dd154u: goto label_3dd154;
        case 0x3dd158u: goto label_3dd158;
        case 0x3dd15cu: goto label_3dd15c;
        case 0x3dd160u: goto label_3dd160;
        case 0x3dd164u: goto label_3dd164;
        case 0x3dd168u: goto label_3dd168;
        case 0x3dd16cu: goto label_3dd16c;
        case 0x3dd170u: goto label_3dd170;
        case 0x3dd174u: goto label_3dd174;
        case 0x3dd178u: goto label_3dd178;
        case 0x3dd17cu: goto label_3dd17c;
        case 0x3dd180u: goto label_3dd180;
        case 0x3dd184u: goto label_3dd184;
        case 0x3dd188u: goto label_3dd188;
        case 0x3dd18cu: goto label_3dd18c;
        case 0x3dd190u: goto label_3dd190;
        case 0x3dd194u: goto label_3dd194;
        case 0x3dd198u: goto label_3dd198;
        case 0x3dd19cu: goto label_3dd19c;
        case 0x3dd1a0u: goto label_3dd1a0;
        case 0x3dd1a4u: goto label_3dd1a4;
        case 0x3dd1a8u: goto label_3dd1a8;
        case 0x3dd1acu: goto label_3dd1ac;
        case 0x3dd1b0u: goto label_3dd1b0;
        case 0x3dd1b4u: goto label_3dd1b4;
        case 0x3dd1b8u: goto label_3dd1b8;
        case 0x3dd1bcu: goto label_3dd1bc;
        case 0x3dd1c0u: goto label_3dd1c0;
        case 0x3dd1c4u: goto label_3dd1c4;
        case 0x3dd1c8u: goto label_3dd1c8;
        case 0x3dd1ccu: goto label_3dd1cc;
        case 0x3dd1d0u: goto label_3dd1d0;
        case 0x3dd1d4u: goto label_3dd1d4;
        case 0x3dd1d8u: goto label_3dd1d8;
        case 0x3dd1dcu: goto label_3dd1dc;
        case 0x3dd1e0u: goto label_3dd1e0;
        case 0x3dd1e4u: goto label_3dd1e4;
        case 0x3dd1e8u: goto label_3dd1e8;
        case 0x3dd1ecu: goto label_3dd1ec;
        case 0x3dd1f0u: goto label_3dd1f0;
        case 0x3dd1f4u: goto label_3dd1f4;
        case 0x3dd1f8u: goto label_3dd1f8;
        case 0x3dd1fcu: goto label_3dd1fc;
        case 0x3dd200u: goto label_3dd200;
        case 0x3dd204u: goto label_3dd204;
        case 0x3dd208u: goto label_3dd208;
        case 0x3dd20cu: goto label_3dd20c;
        case 0x3dd210u: goto label_3dd210;
        case 0x3dd214u: goto label_3dd214;
        case 0x3dd218u: goto label_3dd218;
        case 0x3dd21cu: goto label_3dd21c;
        case 0x3dd220u: goto label_3dd220;
        case 0x3dd224u: goto label_3dd224;
        case 0x3dd228u: goto label_3dd228;
        case 0x3dd22cu: goto label_3dd22c;
        case 0x3dd230u: goto label_3dd230;
        case 0x3dd234u: goto label_3dd234;
        case 0x3dd238u: goto label_3dd238;
        case 0x3dd23cu: goto label_3dd23c;
        case 0x3dd240u: goto label_3dd240;
        case 0x3dd244u: goto label_3dd244;
        case 0x3dd248u: goto label_3dd248;
        case 0x3dd24cu: goto label_3dd24c;
        case 0x3dd250u: goto label_3dd250;
        case 0x3dd254u: goto label_3dd254;
        case 0x3dd258u: goto label_3dd258;
        case 0x3dd25cu: goto label_3dd25c;
        case 0x3dd260u: goto label_3dd260;
        case 0x3dd264u: goto label_3dd264;
        case 0x3dd268u: goto label_3dd268;
        case 0x3dd26cu: goto label_3dd26c;
        case 0x3dd270u: goto label_3dd270;
        case 0x3dd274u: goto label_3dd274;
        case 0x3dd278u: goto label_3dd278;
        case 0x3dd27cu: goto label_3dd27c;
        case 0x3dd280u: goto label_3dd280;
        case 0x3dd284u: goto label_3dd284;
        case 0x3dd288u: goto label_3dd288;
        case 0x3dd28cu: goto label_3dd28c;
        case 0x3dd290u: goto label_3dd290;
        case 0x3dd294u: goto label_3dd294;
        case 0x3dd298u: goto label_3dd298;
        case 0x3dd29cu: goto label_3dd29c;
        case 0x3dd2a0u: goto label_3dd2a0;
        case 0x3dd2a4u: goto label_3dd2a4;
        case 0x3dd2a8u: goto label_3dd2a8;
        case 0x3dd2acu: goto label_3dd2ac;
        case 0x3dd2b0u: goto label_3dd2b0;
        case 0x3dd2b4u: goto label_3dd2b4;
        case 0x3dd2b8u: goto label_3dd2b8;
        case 0x3dd2bcu: goto label_3dd2bc;
        case 0x3dd2c0u: goto label_3dd2c0;
        case 0x3dd2c4u: goto label_3dd2c4;
        case 0x3dd2c8u: goto label_3dd2c8;
        case 0x3dd2ccu: goto label_3dd2cc;
        case 0x3dd2d0u: goto label_3dd2d0;
        case 0x3dd2d4u: goto label_3dd2d4;
        case 0x3dd2d8u: goto label_3dd2d8;
        case 0x3dd2dcu: goto label_3dd2dc;
        case 0x3dd2e0u: goto label_3dd2e0;
        case 0x3dd2e4u: goto label_3dd2e4;
        case 0x3dd2e8u: goto label_3dd2e8;
        case 0x3dd2ecu: goto label_3dd2ec;
        case 0x3dd2f0u: goto label_3dd2f0;
        case 0x3dd2f4u: goto label_3dd2f4;
        case 0x3dd2f8u: goto label_3dd2f8;
        case 0x3dd2fcu: goto label_3dd2fc;
        case 0x3dd300u: goto label_3dd300;
        case 0x3dd304u: goto label_3dd304;
        case 0x3dd308u: goto label_3dd308;
        case 0x3dd30cu: goto label_3dd30c;
        case 0x3dd310u: goto label_3dd310;
        case 0x3dd314u: goto label_3dd314;
        case 0x3dd318u: goto label_3dd318;
        case 0x3dd31cu: goto label_3dd31c;
        case 0x3dd320u: goto label_3dd320;
        case 0x3dd324u: goto label_3dd324;
        case 0x3dd328u: goto label_3dd328;
        case 0x3dd32cu: goto label_3dd32c;
        case 0x3dd330u: goto label_3dd330;
        case 0x3dd334u: goto label_3dd334;
        case 0x3dd338u: goto label_3dd338;
        case 0x3dd33cu: goto label_3dd33c;
        case 0x3dd340u: goto label_3dd340;
        case 0x3dd344u: goto label_3dd344;
        case 0x3dd348u: goto label_3dd348;
        case 0x3dd34cu: goto label_3dd34c;
        case 0x3dd350u: goto label_3dd350;
        case 0x3dd354u: goto label_3dd354;
        case 0x3dd358u: goto label_3dd358;
        case 0x3dd35cu: goto label_3dd35c;
        case 0x3dd360u: goto label_3dd360;
        case 0x3dd364u: goto label_3dd364;
        case 0x3dd368u: goto label_3dd368;
        case 0x3dd36cu: goto label_3dd36c;
        case 0x3dd370u: goto label_3dd370;
        case 0x3dd374u: goto label_3dd374;
        case 0x3dd378u: goto label_3dd378;
        case 0x3dd37cu: goto label_3dd37c;
        default: break;
    }

    ctx->pc = 0x3dd0d0u;

label_3dd0d0:
    // 0x3dd0d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3dd0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3dd0d4:
    // 0x3dd0d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dd0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dd0d8:
    // 0x3dd0d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dd0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3dd0dc:
    // 0x3dd0dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dd0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dd0e0:
    // 0x3dd0e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3dd0e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd0e4:
    // 0x3dd0e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dd0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dd0e8:
    // 0x3dd0e8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3dd0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_3dd0ec:
    // 0x3dd0ec: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x3dd0ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3dd0f0:
    // 0x3dd0f0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x3dd0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3dd0f4:
    // 0x3dd0f4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3dd0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_3dd0f8:
    // 0x3dd0f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dd0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dd0fc:
    // 0x3dd0fc: 0xc0f7bf8  jal         func_3DEFE0
label_3dd100:
    if (ctx->pc == 0x3DD100u) {
        ctx->pc = 0x3DD100u;
            // 0x3dd100: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD104u;
        goto label_3dd104;
    }
    ctx->pc = 0x3DD0FCu;
    SET_GPR_U32(ctx, 31, 0x3DD104u);
    ctx->pc = 0x3DD100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD0FCu;
            // 0x3dd100: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DEFE0u;
    if (runtime->hasFunction(0x3DEFE0u)) {
        auto targetFn = runtime->lookupFunction(0x3DEFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD104u; }
        if (ctx->pc != 0x3DD104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003DEFE0_0x3defe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD104u; }
        if (ctx->pc != 0x3DD104u) { return; }
    }
    ctx->pc = 0x3DD104u;
label_3dd104:
    // 0x3dd104: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3dd104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3dd108:
    // 0x3dd108: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x3dd108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_3dd10c:
    // 0x3dd10c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_3dd110:
    if (ctx->pc == 0x3DD110u) {
        ctx->pc = 0x3DD114u;
        goto label_3dd114;
    }
    ctx->pc = 0x3DD10Cu;
    {
        const bool branch_taken_0x3dd10c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd10c) {
            ctx->pc = 0x3DD0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3dd0f8;
        }
    }
    ctx->pc = 0x3DD114u;
label_3dd114:
    // 0x3dd114: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dd114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3dd118:
    // 0x3dd118: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dd118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd11c:
    // 0x3dd11c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dd11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dd120:
    // 0x3dd120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dd120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd124:
    // 0x3dd124: 0x3e00008  jr          $ra
label_3dd128:
    if (ctx->pc == 0x3DD128u) {
        ctx->pc = 0x3DD128u;
            // 0x3dd128: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3DD12Cu;
        goto label_3dd12c;
    }
    ctx->pc = 0x3DD124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD124u;
            // 0x3dd128: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DD12Cu;
label_3dd12c:
    // 0x3dd12c: 0x0  nop
    ctx->pc = 0x3dd12cu;
    // NOP
label_3dd130:
    // 0x3dd130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3dd130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3dd134:
    // 0x3dd134: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3dd134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3dd138:
    // 0x3dd138: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3dd138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3dd13c:
    // 0x3dd13c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3dd13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3dd140:
    // 0x3dd140: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3dd140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd144:
    // 0x3dd144: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dd144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3dd148:
    // 0x3dd148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dd148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dd14c:
    // 0x3dd14c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dd14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dd150:
    // 0x3dd150: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3dd150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3dd154:
    // 0x3dd154: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3dd158:
    if (ctx->pc == 0x3DD158u) {
        ctx->pc = 0x3DD158u;
            // 0x3dd158: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD15Cu;
        goto label_3dd15c;
    }
    ctx->pc = 0x3DD154u;
    {
        const bool branch_taken_0x3dd154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD154u;
            // 0x3dd158: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd154) {
            ctx->pc = 0x3DD198u;
            goto label_3dd198;
        }
    }
    ctx->pc = 0x3DD15Cu;
label_3dd15c:
    // 0x3dd15c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3dd15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd160:
    // 0x3dd160: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3dd160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd164:
    // 0x3dd164: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3dd164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd168:
    // 0x3dd168: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3dd168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3dd16c:
    // 0x3dd16c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3dd16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3dd170:
    // 0x3dd170: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3dd170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3dd174:
    // 0x3dd174: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3dd174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dd178:
    // 0x3dd178: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3dd178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3dd17c:
    // 0x3dd17c: 0x320f809  jalr        $t9
label_3dd180:
    if (ctx->pc == 0x3DD180u) {
        ctx->pc = 0x3DD184u;
        goto label_3dd184;
    }
    ctx->pc = 0x3DD17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DD184u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DD184u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DD184u; }
            if (ctx->pc != 0x3DD184u) { return; }
        }
        }
    }
    ctx->pc = 0x3DD184u;
label_3dd184:
    // 0x3dd184: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3dd184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3dd188:
    // 0x3dd188: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3dd188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3dd18c:
    // 0x3dd18c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3dd18cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3dd190:
    // 0x3dd190: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3dd194:
    if (ctx->pc == 0x3DD194u) {
        ctx->pc = 0x3DD194u;
            // 0x3dd194: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3DD198u;
        goto label_3dd198;
    }
    ctx->pc = 0x3DD190u;
    {
        const bool branch_taken_0x3dd190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD190u;
            // 0x3dd194: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd190) {
            ctx->pc = 0x3DD168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3dd168;
        }
    }
    ctx->pc = 0x3DD198u;
label_3dd198:
    // 0x3dd198: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3dd198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dd19c:
    // 0x3dd19c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3dd19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3dd1a0:
    // 0x3dd1a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3dd1a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dd1a4:
    // 0x3dd1a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dd1a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dd1a8:
    // 0x3dd1a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dd1a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd1ac:
    // 0x3dd1ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dd1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dd1b0:
    // 0x3dd1b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dd1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd1b4:
    // 0x3dd1b4: 0x3e00008  jr          $ra
label_3dd1b8:
    if (ctx->pc == 0x3DD1B8u) {
        ctx->pc = 0x3DD1B8u;
            // 0x3dd1b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3DD1BCu;
        goto label_3dd1bc;
    }
    ctx->pc = 0x3DD1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD1B4u;
            // 0x3dd1b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DD1BCu;
label_3dd1bc:
    // 0x3dd1bc: 0x0  nop
    ctx->pc = 0x3dd1bcu;
    // NOP
label_3dd1c0:
    // 0x3dd1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dd1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3dd1c4:
    // 0x3dd1c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3dd1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dd1c8:
    // 0x3dd1c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dd1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3dd1cc:
    // 0x3dd1cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3dd1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3dd1d0:
    // 0x3dd1d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dd1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dd1d4:
    // 0x3dd1d4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3dd1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3dd1d8:
    // 0x3dd1d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dd1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd1dc:
    // 0x3dd1dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3dd1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3dd1e0:
    // 0x3dd1e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3dd1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3dd1e4:
    // 0x3dd1e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dd1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3dd1e8:
    // 0x3dd1e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3dd1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3dd1ec:
    // 0x3dd1ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3dd1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dd1f0:
    // 0x3dd1f0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3dd1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3dd1f4:
    // 0x3dd1f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3dd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd1f8:
    // 0x3dd1f8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3dd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3dd1fc:
    // 0x3dd1fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3dd1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3dd200:
    // 0x3dd200: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3dd200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3dd204:
    // 0x3dd204: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dd204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3dd208:
    // 0x3dd208: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3dd208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3dd20c:
    // 0x3dd20c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3dd20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3dd210:
    // 0x3dd210: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3dd210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3dd214:
    // 0x3dd214: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3dd214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3dd218:
    // 0x3dd218: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3dd218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3dd21c:
    // 0x3dd21c: 0xc0a997c  jal         func_2A65F0
label_3dd220:
    if (ctx->pc == 0x3DD220u) {
        ctx->pc = 0x3DD220u;
            // 0x3dd220: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3DD224u;
        goto label_3dd224;
    }
    ctx->pc = 0x3DD21Cu;
    SET_GPR_U32(ctx, 31, 0x3DD224u);
    ctx->pc = 0x3DD220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD21Cu;
            // 0x3dd220: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD224u; }
        if (ctx->pc != 0x3DD224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD224u; }
        if (ctx->pc != 0x3DD224u) { return; }
    }
    ctx->pc = 0x3DD224u;
label_3dd224:
    // 0x3dd224: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3dd224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3dd228:
    // 0x3dd228: 0xc0d879c  jal         func_361E70
label_3dd22c:
    if (ctx->pc == 0x3DD22Cu) {
        ctx->pc = 0x3DD22Cu;
            // 0x3dd22c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD230u;
        goto label_3dd230;
    }
    ctx->pc = 0x3DD228u;
    SET_GPR_U32(ctx, 31, 0x3DD230u);
    ctx->pc = 0x3DD22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD228u;
            // 0x3dd22c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD230u; }
        if (ctx->pc != 0x3DD230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD230u; }
        if (ctx->pc != 0x3DD230u) { return; }
    }
    ctx->pc = 0x3DD230u;
label_3dd230:
    // 0x3dd230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dd230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3dd234:
    // 0x3dd234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dd234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd238:
    // 0x3dd238: 0x3e00008  jr          $ra
label_3dd23c:
    if (ctx->pc == 0x3DD23Cu) {
        ctx->pc = 0x3DD23Cu;
            // 0x3dd23c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3DD240u;
        goto label_3dd240;
    }
    ctx->pc = 0x3DD238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD238u;
            // 0x3dd23c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DD240u;
label_3dd240:
    // 0x3dd240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dd240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3dd244:
    // 0x3dd244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dd244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3dd248:
    // 0x3dd248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dd248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3dd24c:
    // 0x3dd24c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3dd24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3dd250:
    // 0x3dd250: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3dd254:
    if (ctx->pc == 0x3DD254u) {
        ctx->pc = 0x3DD254u;
            // 0x3dd254: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD258u;
        goto label_3dd258;
    }
    ctx->pc = 0x3DD250u;
    {
        const bool branch_taken_0x3dd250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD250u;
            // 0x3dd254: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd250) {
            ctx->pc = 0x3DD370u;
            goto label_3dd370;
        }
    }
    ctx->pc = 0x3DD258u;
label_3dd258:
    // 0x3dd258: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3dd258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3dd25c:
    // 0x3dd25c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3dd25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3dd260:
    // 0x3dd260: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3dd260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3dd264:
    // 0x3dd264: 0xc075128  jal         func_1D44A0
label_3dd268:
    if (ctx->pc == 0x3DD268u) {
        ctx->pc = 0x3DD268u;
            // 0x3dd268: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3DD26Cu;
        goto label_3dd26c;
    }
    ctx->pc = 0x3DD264u;
    SET_GPR_U32(ctx, 31, 0x3DD26Cu);
    ctx->pc = 0x3DD268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD264u;
            // 0x3dd268: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD26Cu; }
        if (ctx->pc != 0x3DD26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD26Cu; }
        if (ctx->pc != 0x3DD26Cu) { return; }
    }
    ctx->pc = 0x3DD26Cu;
label_3dd26c:
    // 0x3dd26c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3dd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3dd270:
    // 0x3dd270: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dd270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3dd274:
    // 0x3dd274: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3dd274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3dd278:
    // 0x3dd278: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3dd278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3dd27c:
    // 0x3dd27c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3dd27cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3dd280:
    // 0x3dd280: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3dd284:
    if (ctx->pc == 0x3DD284u) {
        ctx->pc = 0x3DD284u;
            // 0x3dd284: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x3DD288u;
        goto label_3dd288;
    }
    ctx->pc = 0x3DD280u;
    {
        const bool branch_taken_0x3dd280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD280u;
            // 0x3dd284: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd280) {
            ctx->pc = 0x3DD290u;
            goto label_3dd290;
        }
    }
    ctx->pc = 0x3DD288u;
label_3dd288:
    // 0x3dd288: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dd288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3dd28c:
    // 0x3dd28c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3dd28cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3dd290:
    // 0x3dd290: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3dd290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dd294:
    // 0x3dd294: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dd294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3dd298:
    // 0x3dd298: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3dd298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3dd29c:
    // 0x3dd29c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3dd29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3dd2a0:
    // 0x3dd2a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3dd2a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3dd2a4:
    // 0x3dd2a4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3dd2a8:
    if (ctx->pc == 0x3DD2A8u) {
        ctx->pc = 0x3DD2A8u;
            // 0x3dd2a8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3DD2ACu;
        goto label_3dd2ac;
    }
    ctx->pc = 0x3DD2A4u;
    {
        const bool branch_taken_0x3dd2a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd2a4) {
            ctx->pc = 0x3DD2A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD2A4u;
            // 0x3dd2a8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD2B8u;
            goto label_3dd2b8;
        }
    }
    ctx->pc = 0x3DD2ACu;
label_3dd2ac:
    // 0x3dd2ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dd2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3dd2b0:
    // 0x3dd2b0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3dd2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3dd2b4:
    // 0x3dd2b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3dd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dd2b8:
    // 0x3dd2b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3dd2bc:
    // 0x3dd2bc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3dd2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3dd2c0:
    // 0x3dd2c0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3dd2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3dd2c4:
    // 0x3dd2c4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3dd2c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3dd2c8:
    // 0x3dd2c8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3dd2cc:
    if (ctx->pc == 0x3DD2CCu) {
        ctx->pc = 0x3DD2CCu;
            // 0x3dd2cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3DD2D0u;
        goto label_3dd2d0;
    }
    ctx->pc = 0x3DD2C8u;
    {
        const bool branch_taken_0x3dd2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd2c8) {
            ctx->pc = 0x3DD2CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD2C8u;
            // 0x3dd2cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD2DCu;
            goto label_3dd2dc;
        }
    }
    ctx->pc = 0x3DD2D0u;
label_3dd2d0:
    // 0x3dd2d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3dd2d4:
    // 0x3dd2d4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3dd2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3dd2d8:
    // 0x3dd2d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3dd2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dd2dc:
    // 0x3dd2dc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3dd2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3dd2e0:
    // 0x3dd2e0: 0x320f809  jalr        $t9
label_3dd2e4:
    if (ctx->pc == 0x3DD2E4u) {
        ctx->pc = 0x3DD2E4u;
            // 0x3dd2e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3DD2E8u;
        goto label_3dd2e8;
    }
    ctx->pc = 0x3DD2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3DD2E8u);
        ctx->pc = 0x3DD2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD2E0u;
            // 0x3dd2e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3DD2E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3DD2E8u; }
            if (ctx->pc != 0x3DD2E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3DD2E8u;
label_3dd2e8:
    // 0x3dd2e8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3dd2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3dd2ec:
    // 0x3dd2ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dd2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3dd2f0:
    // 0x3dd2f0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3dd2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3dd2f4:
    // 0x3dd2f4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3dd2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3dd2f8:
    // 0x3dd2f8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3dd2f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3dd2fc:
    // 0x3dd2fc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3dd2fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3dd300:
    // 0x3dd300: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3dd304:
    if (ctx->pc == 0x3DD304u) {
        ctx->pc = 0x3DD304u;
            // 0x3dd304: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x3DD308u;
        goto label_3dd308;
    }
    ctx->pc = 0x3DD300u;
    {
        const bool branch_taken_0x3dd300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd300) {
            ctx->pc = 0x3DD304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD300u;
            // 0x3dd304: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD314u;
            goto label_3dd314;
        }
    }
    ctx->pc = 0x3DD308u;
label_3dd308:
    // 0x3dd308: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dd308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3dd30c:
    // 0x3dd30c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3dd30cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3dd310:
    // 0x3dd310: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3dd310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3dd314:
    // 0x3dd314: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dd314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3dd318:
    // 0x3dd318: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3dd318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3dd31c:
    // 0x3dd31c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3dd31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3dd320:
    // 0x3dd320: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3dd320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3dd324:
    // 0x3dd324: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3dd324u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3dd328:
    // 0x3dd328: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3dd32c:
    if (ctx->pc == 0x3DD32Cu) {
        ctx->pc = 0x3DD330u;
        goto label_3dd330;
    }
    ctx->pc = 0x3DD328u;
    {
        const bool branch_taken_0x3dd328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd328) {
            ctx->pc = 0x3DD338u;
            goto label_3dd338;
        }
    }
    ctx->pc = 0x3DD330u;
label_3dd330:
    // 0x3dd330: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dd330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3dd334:
    // 0x3dd334: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3dd334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3dd338:
    // 0x3dd338: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dd338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3dd33c:
    // 0x3dd33c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3dd33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3dd340:
    // 0x3dd340: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3dd340u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3dd344:
    // 0x3dd344: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3dd348:
    if (ctx->pc == 0x3DD348u) {
        ctx->pc = 0x3DD34Cu;
        goto label_3dd34c;
    }
    ctx->pc = 0x3DD344u;
    {
        const bool branch_taken_0x3dd344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd344) {
            ctx->pc = 0x3DD354u;
            goto label_3dd354;
        }
    }
    ctx->pc = 0x3DD34Cu;
label_3dd34c:
    // 0x3dd34c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dd34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3dd350:
    // 0x3dd350: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x3dd350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_3dd354:
    // 0x3dd354: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dd354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3dd358:
    // 0x3dd358: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3dd358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3dd35c:
    // 0x3dd35c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3dd35cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3dd360:
    // 0x3dd360: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3dd364:
    if (ctx->pc == 0x3DD364u) {
        ctx->pc = 0x3DD364u;
            // 0x3dd364: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3DD368u;
        goto label_3dd368;
    }
    ctx->pc = 0x3DD360u;
    {
        const bool branch_taken_0x3dd360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd360) {
            ctx->pc = 0x3DD364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD360u;
            // 0x3dd364: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD374u;
            goto label_3dd374;
        }
    }
    ctx->pc = 0x3DD368u;
label_3dd368:
    // 0x3dd368: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3dd368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3dd36c:
    // 0x3dd36c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x3dd36cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_3dd370:
    // 0x3dd370: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dd370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3dd374:
    // 0x3dd374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dd374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd378:
    // 0x3dd378: 0x3e00008  jr          $ra
label_3dd37c:
    if (ctx->pc == 0x3DD37Cu) {
        ctx->pc = 0x3DD37Cu;
            // 0x3dd37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3DD380u;
        goto label_fallthrough_0x3dd378;
    }
    ctx->pc = 0x3DD378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD378u;
            // 0x3dd37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3dd378:
    ctx->pc = 0x3DD380u;
}
