#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026D190
// Address: 0x26d190 - 0x26d370
void sub_0026D190_0x26d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D190_0x26d190");
#endif

    switch (ctx->pc) {
        case 0x26d190u: goto label_26d190;
        case 0x26d194u: goto label_26d194;
        case 0x26d198u: goto label_26d198;
        case 0x26d19cu: goto label_26d19c;
        case 0x26d1a0u: goto label_26d1a0;
        case 0x26d1a4u: goto label_26d1a4;
        case 0x26d1a8u: goto label_26d1a8;
        case 0x26d1acu: goto label_26d1ac;
        case 0x26d1b0u: goto label_26d1b0;
        case 0x26d1b4u: goto label_26d1b4;
        case 0x26d1b8u: goto label_26d1b8;
        case 0x26d1bcu: goto label_26d1bc;
        case 0x26d1c0u: goto label_26d1c0;
        case 0x26d1c4u: goto label_26d1c4;
        case 0x26d1c8u: goto label_26d1c8;
        case 0x26d1ccu: goto label_26d1cc;
        case 0x26d1d0u: goto label_26d1d0;
        case 0x26d1d4u: goto label_26d1d4;
        case 0x26d1d8u: goto label_26d1d8;
        case 0x26d1dcu: goto label_26d1dc;
        case 0x26d1e0u: goto label_26d1e0;
        case 0x26d1e4u: goto label_26d1e4;
        case 0x26d1e8u: goto label_26d1e8;
        case 0x26d1ecu: goto label_26d1ec;
        case 0x26d1f0u: goto label_26d1f0;
        case 0x26d1f4u: goto label_26d1f4;
        case 0x26d1f8u: goto label_26d1f8;
        case 0x26d1fcu: goto label_26d1fc;
        case 0x26d200u: goto label_26d200;
        case 0x26d204u: goto label_26d204;
        case 0x26d208u: goto label_26d208;
        case 0x26d20cu: goto label_26d20c;
        case 0x26d210u: goto label_26d210;
        case 0x26d214u: goto label_26d214;
        case 0x26d218u: goto label_26d218;
        case 0x26d21cu: goto label_26d21c;
        case 0x26d220u: goto label_26d220;
        case 0x26d224u: goto label_26d224;
        case 0x26d228u: goto label_26d228;
        case 0x26d22cu: goto label_26d22c;
        case 0x26d230u: goto label_26d230;
        case 0x26d234u: goto label_26d234;
        case 0x26d238u: goto label_26d238;
        case 0x26d23cu: goto label_26d23c;
        case 0x26d240u: goto label_26d240;
        case 0x26d244u: goto label_26d244;
        case 0x26d248u: goto label_26d248;
        case 0x26d24cu: goto label_26d24c;
        case 0x26d250u: goto label_26d250;
        case 0x26d254u: goto label_26d254;
        case 0x26d258u: goto label_26d258;
        case 0x26d25cu: goto label_26d25c;
        case 0x26d260u: goto label_26d260;
        case 0x26d264u: goto label_26d264;
        case 0x26d268u: goto label_26d268;
        case 0x26d26cu: goto label_26d26c;
        case 0x26d270u: goto label_26d270;
        case 0x26d274u: goto label_26d274;
        case 0x26d278u: goto label_26d278;
        case 0x26d27cu: goto label_26d27c;
        case 0x26d280u: goto label_26d280;
        case 0x26d284u: goto label_26d284;
        case 0x26d288u: goto label_26d288;
        case 0x26d28cu: goto label_26d28c;
        case 0x26d290u: goto label_26d290;
        case 0x26d294u: goto label_26d294;
        case 0x26d298u: goto label_26d298;
        case 0x26d29cu: goto label_26d29c;
        case 0x26d2a0u: goto label_26d2a0;
        case 0x26d2a4u: goto label_26d2a4;
        case 0x26d2a8u: goto label_26d2a8;
        case 0x26d2acu: goto label_26d2ac;
        case 0x26d2b0u: goto label_26d2b0;
        case 0x26d2b4u: goto label_26d2b4;
        case 0x26d2b8u: goto label_26d2b8;
        case 0x26d2bcu: goto label_26d2bc;
        case 0x26d2c0u: goto label_26d2c0;
        case 0x26d2c4u: goto label_26d2c4;
        case 0x26d2c8u: goto label_26d2c8;
        case 0x26d2ccu: goto label_26d2cc;
        case 0x26d2d0u: goto label_26d2d0;
        case 0x26d2d4u: goto label_26d2d4;
        case 0x26d2d8u: goto label_26d2d8;
        case 0x26d2dcu: goto label_26d2dc;
        case 0x26d2e0u: goto label_26d2e0;
        case 0x26d2e4u: goto label_26d2e4;
        case 0x26d2e8u: goto label_26d2e8;
        case 0x26d2ecu: goto label_26d2ec;
        case 0x26d2f0u: goto label_26d2f0;
        case 0x26d2f4u: goto label_26d2f4;
        case 0x26d2f8u: goto label_26d2f8;
        case 0x26d2fcu: goto label_26d2fc;
        case 0x26d300u: goto label_26d300;
        case 0x26d304u: goto label_26d304;
        case 0x26d308u: goto label_26d308;
        case 0x26d30cu: goto label_26d30c;
        case 0x26d310u: goto label_26d310;
        case 0x26d314u: goto label_26d314;
        case 0x26d318u: goto label_26d318;
        case 0x26d31cu: goto label_26d31c;
        case 0x26d320u: goto label_26d320;
        case 0x26d324u: goto label_26d324;
        case 0x26d328u: goto label_26d328;
        case 0x26d32cu: goto label_26d32c;
        case 0x26d330u: goto label_26d330;
        case 0x26d334u: goto label_26d334;
        case 0x26d338u: goto label_26d338;
        case 0x26d33cu: goto label_26d33c;
        case 0x26d340u: goto label_26d340;
        case 0x26d344u: goto label_26d344;
        case 0x26d348u: goto label_26d348;
        case 0x26d34cu: goto label_26d34c;
        case 0x26d350u: goto label_26d350;
        case 0x26d354u: goto label_26d354;
        case 0x26d358u: goto label_26d358;
        case 0x26d35cu: goto label_26d35c;
        case 0x26d360u: goto label_26d360;
        case 0x26d364u: goto label_26d364;
        case 0x26d368u: goto label_26d368;
        case 0x26d36cu: goto label_26d36c;
        default: break;
    }

    ctx->pc = 0x26d190u;

label_26d190:
    // 0x26d190: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26d190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_26d194:
    // 0x26d194: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26d194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d198:
    // 0x26d198: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26d198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_26d19c:
    // 0x26d19c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26d19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_26d1a0:
    // 0x26d1a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26d1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_26d1a4:
    // 0x26d1a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x26d1a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26d1a8:
    // 0x26d1a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26d1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_26d1ac:
    // 0x26d1ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x26d1acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26d1b0:
    // 0x26d1b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26d1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_26d1b4:
    // 0x26d1b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x26d1b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_26d1b8:
    // 0x26d1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26d1bc:
    // 0x26d1bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x26d1bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26d1c0:
    // 0x26d1c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26d1c4:
    // 0x26d1c4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x26d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_26d1c8:
    // 0x26d1c8: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x26d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_26d1cc:
    // 0x26d1cc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x26d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_26d1d0:
    // 0x26d1d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26d1d4:
    if (ctx->pc == 0x26D1D4u) {
        ctx->pc = 0x26D1D4u;
            // 0x26d1d4: 0x30710003  andi        $s1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x26D1D8u;
        goto label_26d1d8;
    }
    ctx->pc = 0x26D1D0u;
    {
        const bool branch_taken_0x26d1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1D0u;
            // 0x26d1d4: 0x30710003  andi        $s1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1d0) {
            ctx->pc = 0x26D1E0u;
            goto label_26d1e0;
        }
    }
    ctx->pc = 0x26D1D8u;
label_26d1d8:
    // 0x26d1d8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x26d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_26d1dc:
    // 0x26d1dc: 0x0  nop
    ctx->pc = 0x26d1dcu;
    // NOP
label_26d1e0:
    // 0x26d1e0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x26d1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_26d1e4:
    // 0x26d1e4: 0x10c00040  beqz        $a2, . + 4 + (0x40 << 2)
label_26d1e8:
    if (ctx->pc == 0x26D1E8u) {
        ctx->pc = 0x26D1ECu;
        goto label_26d1ec;
    }
    ctx->pc = 0x26D1E4u;
    {
        const bool branch_taken_0x26d1e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d1e4) {
            ctx->pc = 0x26D2E8u;
            goto label_26d2e8;
        }
    }
    ctx->pc = 0x26D1ECu;
label_26d1ec:
    // 0x26d1ec: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x26d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_26d1f0:
    // 0x26d1f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26d1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26d1f4:
    // 0x26d1f4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x26d1f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_26d1f8:
    // 0x26d1f8: 0x320f809  jalr        $t9
label_26d1fc:
    if (ctx->pc == 0x26D1FCu) {
        ctx->pc = 0x26D1FCu;
            // 0x26d1fc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26D200u;
        goto label_26d200;
    }
    ctx->pc = 0x26D1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26D200u);
        ctx->pc = 0x26D1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1F8u;
            // 0x26d1fc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26D200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26D200u; }
            if (ctx->pc != 0x26D200u) { return; }
        }
        }
    }
    ctx->pc = 0x26D200u;
label_26d200:
    // 0x26d200: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26d200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_26d204:
    // 0x26d204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d208:
    // 0x26d208: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26d208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26d20c:
    // 0x26d20c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_26d210:
    // 0x26d210: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26d210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_26d214:
    // 0x26d214: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_26d218:
    // 0x26d218: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26d218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26d21c:
    // 0x26d21c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_26d220:
    if (ctx->pc == 0x26D220u) {
        ctx->pc = 0x26D220u;
            // 0x26d220: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26D224u;
        goto label_26d224;
    }
    ctx->pc = 0x26D21Cu;
    {
        const bool branch_taken_0x26d21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D21Cu;
            // 0x26d220: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d21c) {
            ctx->pc = 0x26D230u;
            goto label_26d230;
        }
    }
    ctx->pc = 0x26D224u;
label_26d224:
    // 0x26d224: 0xc09a8b0  jal         func_26A2C0
label_26d228:
    if (ctx->pc == 0x26D228u) {
        ctx->pc = 0x26D22Cu;
        goto label_26d22c;
    }
    ctx->pc = 0x26D224u;
    SET_GPR_U32(ctx, 31, 0x26D22Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D22Cu; }
        if (ctx->pc != 0x26D22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D22Cu; }
        if (ctx->pc != 0x26D22Cu) { return; }
    }
    ctx->pc = 0x26D22Cu;
label_26d22c:
    // 0x26d22c: 0x0  nop
    ctx->pc = 0x26d22cu;
    // NOP
label_26d230:
    // 0x26d230: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26d230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_26d234:
    // 0x26d234: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26d234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_26d238:
    // 0x26d238: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x26d238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_26d23c:
    // 0x26d23c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x26d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_26d240:
    // 0x26d240: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x26d240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26d244:
    // 0x26d244: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x26d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_26d248:
    // 0x26d248: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x26d248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_26d24c:
    // 0x26d24c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x26d24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_26d250:
    // 0x26d250: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x26d250u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_26d254:
    // 0x26d254: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_26d258:
    if (ctx->pc == 0x26D258u) {
        ctx->pc = 0x26D25Cu;
        goto label_26d25c;
    }
    ctx->pc = 0x26D254u;
    {
        const bool branch_taken_0x26d254 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d254) {
            ctx->pc = 0x26D268u;
            goto label_26d268;
        }
    }
    ctx->pc = 0x26D25Cu;
label_26d25c:
    // 0x26d25c: 0x10000006  b           . + 4 + (0x6 << 2)
label_26d260:
    if (ctx->pc == 0x26D260u) {
        ctx->pc = 0x26D260u;
            // 0x26d260: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x26D264u;
        goto label_26d264;
    }
    ctx->pc = 0x26D25Cu;
    {
        const bool branch_taken_0x26d25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D25Cu;
            // 0x26d260: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d25c) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26D264u;
label_26d264:
    // 0x26d264: 0x0  nop
    ctx->pc = 0x26d264u;
    // NOP
label_26d268:
    // 0x26d268: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26d268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26d26c:
    // 0x26d26c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x26d26cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_26d270:
    // 0x26d270: 0x320f809  jalr        $t9
label_26d274:
    if (ctx->pc == 0x26D274u) {
        ctx->pc = 0x26D278u;
        goto label_26d278;
    }
    ctx->pc = 0x26D270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26D278u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x26D278u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26D278u; }
            if (ctx->pc != 0x26D278u) { return; }
        }
        }
    }
    ctx->pc = 0x26D278u;
label_26d278:
    // 0x26d278: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x26d278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_26d27c:
    // 0x26d27c: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x26d27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_26d280:
    // 0x26d280: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x26d280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_26d284:
    // 0x26d284: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x26d284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_26d288:
    // 0x26d288: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26d288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26d28c:
    // 0x26d28c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x26d28cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_26d290:
    // 0x26d290: 0x320f809  jalr        $t9
label_26d294:
    if (ctx->pc == 0x26D294u) {
        ctx->pc = 0x26D294u;
            // 0x26d294: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x26D298u;
        goto label_26d298;
    }
    ctx->pc = 0x26D290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26D298u);
        ctx->pc = 0x26D294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D290u;
            // 0x26d294: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26D298u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26D298u; }
            if (ctx->pc != 0x26D298u) { return; }
        }
        }
    }
    ctx->pc = 0x26D298u;
label_26d298:
    // 0x26d298: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x26d298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_26d29c:
    // 0x26d29c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26d29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26d2a0:
    // 0x26d2a0: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_26d2a4:
    // 0x26d2a4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x26d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_26d2a8:
    // 0x26d2a8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x26d2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_26d2ac:
    // 0x26d2ac: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_26d2b0:
    // 0x26d2b0: 0xc0a8448  jal         func_2A1120
label_26d2b4:
    if (ctx->pc == 0x26D2B4u) {
        ctx->pc = 0x26D2B4u;
            // 0x26d2b4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x26D2B8u;
        goto label_26d2b8;
    }
    ctx->pc = 0x26D2B0u;
    SET_GPR_U32(ctx, 31, 0x26D2B8u);
    ctx->pc = 0x26D2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D2B0u;
            // 0x26d2b4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2B8u; }
        if (ctx->pc != 0x26D2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2B8u; }
        if (ctx->pc != 0x26D2B8u) { return; }
    }
    ctx->pc = 0x26D2B8u;
label_26d2b8:
    // 0x26d2b8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26d2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_26d2bc:
    // 0x26d2bc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x26d2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_26d2c0:
    // 0x26d2c0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_26d2c4:
    // 0x26d2c4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x26d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_26d2c8:
    // 0x26d2c8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x26d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_26d2cc:
    // 0x26d2cc: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_26d2d0:
    if (ctx->pc == 0x26D2D0u) {
        ctx->pc = 0x26D2D4u;
        goto label_26d2d4;
    }
    ctx->pc = 0x26D2CCu;
    {
        const bool branch_taken_0x26d2cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d2cc) {
            ctx->pc = 0x26D2E8u;
            goto label_26d2e8;
        }
    }
    ctx->pc = 0x26D2D4u;
label_26d2d4:
    // 0x26d2d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26d2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26d2d8:
    // 0x26d2d8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x26d2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_26d2dc:
    // 0x26d2dc: 0x320f809  jalr        $t9
label_26d2e0:
    if (ctx->pc == 0x26D2E0u) {
        ctx->pc = 0x26D2E4u;
        goto label_26d2e4;
    }
    ctx->pc = 0x26D2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26D2E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x26D2E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26D2E4u; }
            if (ctx->pc != 0x26D2E4u) { return; }
        }
        }
    }
    ctx->pc = 0x26D2E4u;
label_26d2e4:
    // 0x26d2e4: 0x0  nop
    ctx->pc = 0x26d2e4u;
    // NOP
label_26d2e8:
    // 0x26d2e8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x26d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_26d2ec:
    // 0x26d2ec: 0x8e90000c  lw          $s0, 0xC($s4)
    ctx->pc = 0x26d2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_26d2f0:
    // 0x26d2f0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_26d2f4:
    // 0x26d2f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26d2f8:
    // 0x26d2f8: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x26d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_26d2fc:
    // 0x26d2fc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x26d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_26d300:
    // 0x26d300: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x26d300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_26d304:
    // 0x26d304: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26d304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26d308:
    // 0x26d308: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26d30c:
    if (ctx->pc == 0x26D30Cu) {
        ctx->pc = 0x26D30Cu;
            // 0x26d30c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26D310u;
        goto label_26d310;
    }
    ctx->pc = 0x26D308u;
    {
        const bool branch_taken_0x26d308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D308u;
            // 0x26d30c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d308) {
            ctx->pc = 0x26D318u;
            goto label_26d318;
        }
    }
    ctx->pc = 0x26D310u;
label_26d310:
    // 0x26d310: 0xc09a8b0  jal         func_26A2C0
label_26d314:
    if (ctx->pc == 0x26D314u) {
        ctx->pc = 0x26D318u;
        goto label_26d318;
    }
    ctx->pc = 0x26D310u;
    SET_GPR_U32(ctx, 31, 0x26D318u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D318u; }
        if (ctx->pc != 0x26D318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D318u; }
        if (ctx->pc != 0x26D318u) { return; }
    }
    ctx->pc = 0x26D318u;
label_26d318:
    // 0x26d318: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x26d318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_26d31c:
    // 0x26d31c: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x26d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_26d320:
    // 0x26d320: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x26d320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_26d324:
    // 0x26d324: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x26d324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_26d328:
    // 0x26d328: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x26d328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_26d32c:
    // 0x26d32c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x26d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_26d330:
    // 0x26d330: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x26d330u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_26d334:
    // 0x26d334: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x26d334u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_26d338:
    // 0x26d338: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26d338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_26d33c:
    // 0x26d33c: 0xc0a8448  jal         func_2A1120
label_26d340:
    if (ctx->pc == 0x26D340u) {
        ctx->pc = 0x26D340u;
            // 0x26d340: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x26D344u;
        goto label_26d344;
    }
    ctx->pc = 0x26D33Cu;
    SET_GPR_U32(ctx, 31, 0x26D344u);
    ctx->pc = 0x26D340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D33Cu;
            // 0x26d340: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D344u; }
        if (ctx->pc != 0x26D344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D344u; }
        if (ctx->pc != 0x26D344u) { return; }
    }
    ctx->pc = 0x26D344u;
label_26d344:
    // 0x26d344: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x26d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_26d348:
    // 0x26d348: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26d348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26d34c:
    // 0x26d34c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26d34cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26d350:
    // 0x26d350: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26d350u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26d354:
    // 0x26d354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26d354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26d358:
    // 0x26d358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26d35c:
    // 0x26d35c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x26d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_26d360:
    // 0x26d360: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26d360u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26d364:
    // 0x26d364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26d368:
    // 0x26d368: 0x3e00008  jr          $ra
label_26d36c:
    if (ctx->pc == 0x26D36Cu) {
        ctx->pc = 0x26D36Cu;
            // 0x26d36c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x26D370u;
        goto label_fallthrough_0x26d368;
    }
    ctx->pc = 0x26D368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D368u;
            // 0x26d36c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26d368:
    ctx->pc = 0x26D370u;
}
