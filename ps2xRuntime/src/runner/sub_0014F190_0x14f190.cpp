#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014F190
// Address: 0x14f190 - 0x14f8f0
void sub_0014F190_0x14f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F190_0x14f190");
#endif

    switch (ctx->pc) {
        case 0x14f1f4u: goto label_14f1f4;
        case 0x14f234u: goto label_14f234;
        case 0x14f250u: goto label_14f250;
        case 0x14f580u: goto label_14f580;
        case 0x14f588u: goto label_14f588;
        case 0x14f5c4u: goto label_14f5c4;
        case 0x14f5f0u: goto label_14f5f0;
        case 0x14f848u: goto label_14f848;
        case 0x14f8b8u: goto label_14f8b8;
        default: break;
    }

    ctx->pc = 0x14f190u;

    // 0x14f190: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x14f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x14f194: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14f198: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14f198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14f19c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14f19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14f1a0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x14f1a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f1a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14f1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14f1a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f1ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14f1b0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x14f1b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f1b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14f1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14f1b8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14f1b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f1bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14f1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14f1c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14f1c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f1c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14f1c8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14f1c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f1cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f1d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f1d4: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x14f1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x14f1d8: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x14f1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x14f1dc: 0xa3a0011f  sb          $zero, 0x11F($sp)
    ctx->pc = 0x14f1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 287), (uint8_t)GPR_U32(ctx, 0));
    // 0x14f1e0: 0xa3a0011e  sb          $zero, 0x11E($sp)
    ctx->pc = 0x14f1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 286), (uint8_t)GPR_U32(ctx, 0));
    // 0x14f1e4: 0xa3a0011d  sb          $zero, 0x11D($sp)
    ctx->pc = 0x14f1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x14f1e8: 0xa3a0011c  sb          $zero, 0x11C($sp)
    ctx->pc = 0x14f1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x14f1ec: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x14F1ECu;
    SET_GPR_U32(ctx, 31, 0x14F1F4u);
    ctx->pc = 0x14F1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F1ECu;
            // 0x14f1f0: 0xa3a0011b  sb          $zero, 0x11B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 283), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F1F4u; }
        if (ctx->pc != 0x14F1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F1F4u; }
        if (ctx->pc != 0x14F1F4u) { return; }
    }
    ctx->pc = 0x14F1F4u;
label_14f1f4:
    // 0x14f1f4: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x14f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x14f1f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f1fc: 0x8ea50010  lw          $a1, 0x10($s5)
    ctx->pc = 0x14f1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14f200: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f204: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x14f204u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f208: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x14f208u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14f20c: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x14f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x14f210: 0x240b0060  addiu       $t3, $zero, 0x60
    ctx->pc = 0x14f210u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x14f214: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14f214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14f218: 0x24180002  addiu       $t8, $zero, 0x2
    ctx->pc = 0x14f218u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f21c: 0x240d0003  addiu       $t5, $zero, 0x3
    ctx->pc = 0x14f21cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14f220: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x14f220u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x14f224: 0x64080008  daddiu      $t0, $zero, 0x8
    ctx->pc = 0x14f224u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x14f228: 0x6419000c  daddiu      $t9, $zero, 0xC
    ctx->pc = 0x14f228u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x14f22c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x14F22Cu;
    {
        const bool branch_taken_0x14f22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F22Cu;
            // 0x14f230: 0x640c0018  daddiu      $t4, $zero, 0x18 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f22c) {
            ctx->pc = 0x14F528u;
            goto label_14f528;
        }
    }
    ctx->pc = 0x14F234u;
label_14f234:
    // 0x14f234: 0x8e7804  sllv        $t7, $t6, $a0
    ctx->pc = 0x14f234u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 4) & 0x1F));
    // 0x14f238: 0xef7824  and         $t7, $a3, $t7
    ctx->pc = 0x14f238u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & GPR_U64(ctx, 15));
    // 0x14f23c: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x14f23cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x14f240: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x14f240u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x14f244: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x14F244u;
    {
        const bool branch_taken_0x14f244 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f244) {
            ctx->pc = 0x14F270u;
            goto label_14f270;
        }
    }
    ctx->pc = 0x14F24Cu;
    // 0x14f24c: 0x0  nop
    ctx->pc = 0x14f24cu;
    // NOP
label_14f250:
    // 0x14f250: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14f254: 0x8e7804  sllv        $t7, $t6, $a0
    ctx->pc = 0x14f254u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 4) & 0x1F));
    // 0x14f258: 0xef7824  and         $t7, $a3, $t7
    ctx->pc = 0x14f258u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & GPR_U64(ctx, 15));
    // 0x14f25c: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x14f25cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x14f260: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x14f260u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x14f264: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14F264u;
    {
        const bool branch_taken_0x14f264 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f264) {
            ctx->pc = 0x14F250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f250;
        }
    }
    ctx->pc = 0x14F26Cu;
    // 0x14f26c: 0x0  nop
    ctx->pc = 0x14f26cu;
    // NOP
label_14f270:
    // 0x14f270: 0x108d0091  beq         $a0, $t5, . + 4 + (0x91 << 2)
    ctx->pc = 0x14F270u;
    {
        const bool branch_taken_0x14f270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 13));
        if (branch_taken_0x14f270) {
            ctx->pc = 0x14F4B8u;
            goto label_14f4b8;
        }
    }
    ctx->pc = 0x14F278u;
    // 0x14f278: 0x1098006d  beq         $a0, $t8, . + 4 + (0x6D << 2)
    ctx->pc = 0x14F278u;
    {
        const bool branch_taken_0x14f278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 24));
        if (branch_taken_0x14f278) {
            ctx->pc = 0x14F430u;
            goto label_14f430;
        }
    }
    ctx->pc = 0x14F280u;
    // 0x14f280: 0x108e0049  beq         $a0, $t6, . + 4 + (0x49 << 2)
    ctx->pc = 0x14F280u;
    {
        const bool branch_taken_0x14f280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        if (branch_taken_0x14f280) {
            ctx->pc = 0x14F3A8u;
            goto label_14f3a8;
        }
    }
    ctx->pc = 0x14F288u;
    // 0x14f288: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F288u;
    {
        const bool branch_taken_0x14f288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f288) {
            ctx->pc = 0x14F298u;
            goto label_14f298;
        }
    }
    ctx->pc = 0x14F290u;
    // 0x14f290: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x14F290u;
    {
        const bool branch_taken_0x14f290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f290) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F298u;
label_14f298:
    // 0x14f298: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x14f298u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14f29c: 0x240f1003  addiu       $t7, $zero, 0x1003
    ctx->pc = 0x14f29cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x14f2a0: 0x10ef0037  beq         $a3, $t7, . + 4 + (0x37 << 2)
    ctx->pc = 0x14F2A0u;
    {
        const bool branch_taken_0x14f2a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        if (branch_taken_0x14f2a0) {
            ctx->pc = 0x14F380u;
            goto label_14f380;
        }
    }
    ctx->pc = 0x14F2A8u;
    // 0x14f2a8: 0x240f0403  addiu       $t7, $zero, 0x403
    ctx->pc = 0x14f2a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x14f2ac: 0x10ef002a  beq         $a3, $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x14F2ACu;
    {
        const bool branch_taken_0x14f2ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        if (branch_taken_0x14f2ac) {
            ctx->pc = 0x14F358u;
            goto label_14f358;
        }
    }
    ctx->pc = 0x14F2B4u;
    // 0x14f2b4: 0x10ed001e  beq         $a3, $t5, . + 4 + (0x1E << 2)
    ctx->pc = 0x14F2B4u;
    {
        const bool branch_taken_0x14f2b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 13));
        if (branch_taken_0x14f2b4) {
            ctx->pc = 0x14F330u;
            goto label_14f330;
        }
    }
    ctx->pc = 0x14F2BCu;
    // 0x14f2bc: 0x240f1001  addiu       $t7, $zero, 0x1001
    ctx->pc = 0x14f2bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x14f2c0: 0x10ef0015  beq         $a3, $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x14F2C0u;
    {
        const bool branch_taken_0x14f2c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        if (branch_taken_0x14f2c0) {
            ctx->pc = 0x14F318u;
            goto label_14f318;
        }
    }
    ctx->pc = 0x14F2C8u;
    // 0x14f2c8: 0x240f0401  addiu       $t7, $zero, 0x401
    ctx->pc = 0x14f2c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x14f2cc: 0x10ef000c  beq         $a3, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x14F2CCu;
    {
        const bool branch_taken_0x14f2cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        if (branch_taken_0x14f2cc) {
            ctx->pc = 0x14F300u;
            goto label_14f300;
        }
    }
    ctx->pc = 0x14F2D4u;
    // 0x14f2d4: 0x10ee0004  beq         $a3, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F2D4u;
    {
        const bool branch_taken_0x14f2d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 14));
        if (branch_taken_0x14f2d4) {
            ctx->pc = 0x14F2E8u;
            goto label_14f2e8;
        }
    }
    ctx->pc = 0x14F2DCu;
    // 0x14f2dc: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x14F2DCu;
    {
        const bool branch_taken_0x14f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f2dc) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F2E4u;
    // 0x14f2e4: 0x0  nop
    ctx->pc = 0x14f2e4u;
    // NOP
label_14f2e8:
    // 0x14f2e8: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x14f2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x14f2ec: 0xa3b9011f  sb          $t9, 0x11F($sp)
    ctx->pc = 0x14f2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 287), (uint8_t)GPR_U32(ctx, 25));
    // 0x14f2f0: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x14f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x14f2f4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x14F2F4u;
    {
        const bool branch_taken_0x14f2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F2F4u;
            // 0x14f2f8: 0xafa70130  sw          $a3, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2f4) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F2FCu;
    // 0x14f2fc: 0x0  nop
    ctx->pc = 0x14f2fcu;
    // NOP
label_14f300:
    // 0x14f300: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x14f300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x14f304: 0xa3ac011f  sb          $t4, 0x11F($sp)
    ctx->pc = 0x14f304u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 287), (uint8_t)GPR_U32(ctx, 12));
    // 0x14f308: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x14f308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x14f30c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x14F30Cu;
    {
        const bool branch_taken_0x14f30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F30Cu;
            // 0x14f310: 0xafa70130  sw          $a3, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f30c) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F314u;
    // 0x14f314: 0x0  nop
    ctx->pc = 0x14f314u;
    // NOP
label_14f318:
    // 0x14f318: 0x6407002c  daddiu      $a3, $zero, 0x2C
    ctx->pc = 0x14f318u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)44);
    // 0x14f31c: 0xa3a7011f  sb          $a3, 0x11F($sp)
    ctx->pc = 0x14f31cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 287), (uint8_t)GPR_U32(ctx, 7));
    // 0x14f320: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x14f320u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x14f324: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x14f324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x14f328: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x14F328u;
    {
        const bool branch_taken_0x14f328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F328u;
            // 0x14f32c: 0xafa70130  sw          $a3, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f328) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F330u;
label_14f330:
    // 0x14f330: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x14f330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x14f334: 0xa3ac011f  sb          $t4, 0x11F($sp)
    ctx->pc = 0x14f334u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 287), (uint8_t)GPR_U32(ctx, 12));
    // 0x14f338: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14f338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f33c: 0xa3ac011e  sb          $t4, 0x11E($sp)
    ctx->pc = 0x14f33cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 286), (uint8_t)GPR_U32(ctx, 12));
    // 0x14f340: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x14f340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
    // 0x14f344: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x14f344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x14f348: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x14f348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x14f34c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x14F34Cu;
    {
        const bool branch_taken_0x14f34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F34Cu;
            // 0x14f350: 0xafa70120  sw          $a3, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f34c) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F354u;
    // 0x14f354: 0x0  nop
    ctx->pc = 0x14f354u;
    // NOP
label_14f358:
    // 0x14f358: 0x64070024  daddiu      $a3, $zero, 0x24
    ctx->pc = 0x14f358u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)36);
    // 0x14f35c: 0xa3a7011f  sb          $a3, 0x11F($sp)
    ctx->pc = 0x14f35cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 287), (uint8_t)GPR_U32(ctx, 7));
    // 0x14f360: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14f360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f364: 0xa3a7011e  sb          $a3, 0x11E($sp)
    ctx->pc = 0x14f364u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 286), (uint8_t)GPR_U32(ctx, 7));
    // 0x14f368: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x14f368u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x14f36c: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x14f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x14f370: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x14f370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
    // 0x14f374: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x14f374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x14f378: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x14F378u;
    {
        const bool branch_taken_0x14f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F378u;
            // 0x14f37c: 0xafa70120  sw          $a3, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f378) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F380u;
label_14f380:
    // 0x14f380: 0x64070038  daddiu      $a3, $zero, 0x38
    ctx->pc = 0x14f380u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)56);
    // 0x14f384: 0xa3a7011f  sb          $a3, 0x11F($sp)
    ctx->pc = 0x14f384u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 287), (uint8_t)GPR_U32(ctx, 7));
    // 0x14f388: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14f388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f38c: 0xa3a7011e  sb          $a3, 0x11E($sp)
    ctx->pc = 0x14f38cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 286), (uint8_t)GPR_U32(ctx, 7));
    // 0x14f390: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x14f390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x14f394: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x14f394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x14f398: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x14f398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
    // 0x14f39c: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x14f39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x14f3a0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x14F3A0u;
    {
        const bool branch_taken_0x14f3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F3A0u;
            // 0x14f3a4: 0xafa70120  sw          $a3, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3a0) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F3A8u;
label_14f3a8:
    // 0x14f3a8: 0x8fcf0010  lw          $t7, 0x10($fp)
    ctx->pc = 0x14f3a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x14f3ac: 0x11eb0018  beq         $t7, $t3, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F3ACu;
    {
        const bool branch_taken_0x14f3ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        if (branch_taken_0x14f3ac) {
            ctx->pc = 0x14F410u;
            goto label_14f410;
        }
    }
    ctx->pc = 0x14F3B4u;
    // 0x14f3b4: 0x11ea0012  beq         $t7, $t2, . + 4 + (0x12 << 2)
    ctx->pc = 0x14F3B4u;
    {
        const bool branch_taken_0x14f3b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        if (branch_taken_0x14f3b4) {
            ctx->pc = 0x14F400u;
            goto label_14f400;
        }
    }
    ctx->pc = 0x14F3BCu;
    // 0x14f3bc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x14f3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14f3c0: 0x11e7000b  beq         $t7, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x14F3C0u;
    {
        const bool branch_taken_0x14f3c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 7));
        if (branch_taken_0x14f3c0) {
            ctx->pc = 0x14F3F0u;
            goto label_14f3f0;
        }
    }
    ctx->pc = 0x14F3C8u;
    // 0x14f3c8: 0x11f80003  beq         $t7, $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F3C8u;
    {
        const bool branch_taken_0x14f3c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 24));
        if (branch_taken_0x14f3c8) {
            ctx->pc = 0x14F3D8u;
            goto label_14f3d8;
        }
    }
    ctx->pc = 0x14F3D0u;
    // 0x14f3d0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x14F3D0u;
    {
        const bool branch_taken_0x14f3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f3d0) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F3D8u;
label_14f3d8:
    // 0x14f3d8: 0x8fc7001c  lw          $a3, 0x1C($fp)
    ctx->pc = 0x14f3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x14f3dc: 0xa3b9011e  sb          $t9, 0x11E($sp)
    ctx->pc = 0x14f3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 286), (uint8_t)GPR_U32(ctx, 25));
    // 0x14f3e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14f3e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3e4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x14F3E4u;
    {
        const bool branch_taken_0x14f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F3E4u;
            // 0x14f3e8: 0xafa70120  sw          $a3, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3e4) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F3ECu;
    // 0x14f3ec: 0x0  nop
    ctx->pc = 0x14f3ecu;
    // NOP
label_14f3f0:
    // 0x14f3f0: 0x8fd7001c  lw          $s7, 0x1C($fp)
    ctx->pc = 0x14f3f0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x14f3f4: 0xa3a9011d  sb          $t1, 0x11D($sp)
    ctx->pc = 0x14f3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 285), (uint8_t)GPR_U32(ctx, 9));
    // 0x14f3f8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x14F3F8u;
    {
        const bool branch_taken_0x14f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F3F8u;
            // 0x14f3fc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3f8) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F400u;
label_14f400:
    // 0x14f400: 0x8fd4001c  lw          $s4, 0x1C($fp)
    ctx->pc = 0x14f400u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x14f404: 0xa3a8011c  sb          $t0, 0x11C($sp)
    ctx->pc = 0x14f404u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 284), (uint8_t)GPR_U32(ctx, 8));
    // 0x14f408: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x14F408u;
    {
        const bool branch_taken_0x14f408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F408u;
            // 0x14f40c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f408) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F410u;
label_14f410:
    // 0x14f410: 0x8fd4001c  lw          $s4, 0x1C($fp)
    ctx->pc = 0x14f410u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x14f414: 0xa3a9011c  sb          $t1, 0x11C($sp)
    ctx->pc = 0x14f414u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 284), (uint8_t)GPR_U32(ctx, 9));
    // 0x14f418: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14f418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f41c: 0xa3a9011b  sb          $t1, 0x11B($sp)
    ctx->pc = 0x14f41cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 283), (uint8_t)GPR_U32(ctx, 9));
    // 0x14f420: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14f420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f424: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x14F424u;
    {
        const bool branch_taken_0x14f424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F424u;
            // 0x14f428: 0x26960008  addiu       $s6, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f424) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F42Cu;
    // 0x14f42c: 0x0  nop
    ctx->pc = 0x14f42cu;
    // NOP
label_14f430:
    // 0x14f430: 0x8fc70020  lw          $a3, 0x20($fp)
    ctx->pc = 0x14f430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x14f434: 0x10eb0018  beq         $a3, $t3, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F434u;
    {
        const bool branch_taken_0x14f434 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        if (branch_taken_0x14f434) {
            ctx->pc = 0x14F498u;
            goto label_14f498;
        }
    }
    ctx->pc = 0x14F43Cu;
    // 0x14f43c: 0x240f0040  addiu       $t7, $zero, 0x40
    ctx->pc = 0x14f43cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14f440: 0x10ef0011  beq         $a3, $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x14F440u;
    {
        const bool branch_taken_0x14f440 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        if (branch_taken_0x14f440) {
            ctx->pc = 0x14F488u;
            goto label_14f488;
        }
    }
    ctx->pc = 0x14F448u;
    // 0x14f448: 0x10ea000b  beq         $a3, $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x14F448u;
    {
        const bool branch_taken_0x14f448 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x14f448) {
            ctx->pc = 0x14F478u;
            goto label_14f478;
        }
    }
    ctx->pc = 0x14F450u;
    // 0x14f450: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x14f450u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14f454: 0x10ef0004  beq         $a3, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F454u;
    {
        const bool branch_taken_0x14f454 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        if (branch_taken_0x14f454) {
            ctx->pc = 0x14F468u;
            goto label_14f468;
        }
    }
    ctx->pc = 0x14F45Cu;
    // 0x14f45c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x14F45Cu;
    {
        const bool branch_taken_0x14f45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f45c) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F464u;
    // 0x14f464: 0x0  nop
    ctx->pc = 0x14f464u;
    // NOP
label_14f468:
    // 0x14f468: 0x8fd7002c  lw          $s7, 0x2C($fp)
    ctx->pc = 0x14f468u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x14f46c: 0xa3a9011d  sb          $t1, 0x11D($sp)
    ctx->pc = 0x14f46cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 285), (uint8_t)GPR_U32(ctx, 9));
    // 0x14f470: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x14F470u;
    {
        const bool branch_taken_0x14f470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F470u;
            // 0x14f474: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f470) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F478u;
label_14f478:
    // 0x14f478: 0x8fd4002c  lw          $s4, 0x2C($fp)
    ctx->pc = 0x14f478u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x14f47c: 0xa3a8011c  sb          $t0, 0x11C($sp)
    ctx->pc = 0x14f47cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 284), (uint8_t)GPR_U32(ctx, 8));
    // 0x14f480: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14F480u;
    {
        const bool branch_taken_0x14f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F480u;
            // 0x14f484: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f480) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F488u;
label_14f488:
    // 0x14f488: 0x8fd6002c  lw          $s6, 0x2C($fp)
    ctx->pc = 0x14f488u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x14f48c: 0xa3a8011b  sb          $t0, 0x11B($sp)
    ctx->pc = 0x14f48cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 283), (uint8_t)GPR_U32(ctx, 8));
    // 0x14f490: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14F490u;
    {
        const bool branch_taken_0x14f490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F490u;
            // 0x14f494: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f490) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F498u;
label_14f498:
    // 0x14f498: 0x8fd4002c  lw          $s4, 0x2C($fp)
    ctx->pc = 0x14f498u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x14f49c: 0xa3a9011c  sb          $t1, 0x11C($sp)
    ctx->pc = 0x14f49cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 284), (uint8_t)GPR_U32(ctx, 9));
    // 0x14f4a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14f4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4a4: 0xa3a9011b  sb          $t1, 0x11B($sp)
    ctx->pc = 0x14f4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 283), (uint8_t)GPR_U32(ctx, 9));
    // 0x14f4a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14f4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14F4ACu;
    {
        const bool branch_taken_0x14f4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4ACu;
            // 0x14f4b0: 0x26960008  addiu       $s6, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4ac) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F4B4u;
    // 0x14f4b4: 0x0  nop
    ctx->pc = 0x14f4b4u;
    // NOP
label_14f4b8:
    // 0x14f4b8: 0x8fcf0030  lw          $t7, 0x30($fp)
    ctx->pc = 0x14f4b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x14f4bc: 0x11eb0010  beq         $t7, $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x14F4BCu;
    {
        const bool branch_taken_0x14f4bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        if (branch_taken_0x14f4bc) {
            ctx->pc = 0x14F500u;
            goto label_14f500;
        }
    }
    ctx->pc = 0x14F4C4u;
    // 0x14f4c4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x14f4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14f4c8: 0x11e70009  beq         $t7, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F4C8u;
    {
        const bool branch_taken_0x14f4c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 7));
        if (branch_taken_0x14f4c8) {
            ctx->pc = 0x14F4F0u;
            goto label_14f4f0;
        }
    }
    ctx->pc = 0x14F4D0u;
    // 0x14f4d0: 0x11ea0003  beq         $t7, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F4D0u;
    {
        const bool branch_taken_0x14f4d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        if (branch_taken_0x14f4d0) {
            ctx->pc = 0x14F4E0u;
            goto label_14f4e0;
        }
    }
    ctx->pc = 0x14F4D8u;
    // 0x14f4d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14F4D8u;
    {
        const bool branch_taken_0x14f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4d8) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F4E0u;
label_14f4e0:
    // 0x14f4e0: 0x8fd4003c  lw          $s4, 0x3C($fp)
    ctx->pc = 0x14f4e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x14f4e4: 0xa3a8011c  sb          $t0, 0x11C($sp)
    ctx->pc = 0x14f4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 284), (uint8_t)GPR_U32(ctx, 8));
    // 0x14f4e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14F4E8u;
    {
        const bool branch_taken_0x14f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4E8u;
            // 0x14f4ec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4e8) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F4F0u;
label_14f4f0:
    // 0x14f4f0: 0x8fd6003c  lw          $s6, 0x3C($fp)
    ctx->pc = 0x14f4f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x14f4f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14f4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14F4F8u;
    {
        const bool branch_taken_0x14f4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F4F8u;
            // 0x14f4fc: 0xa3a8011b  sb          $t0, 0x11B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 283), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4f8) {
            ctx->pc = 0x14F518u;
            goto label_14f518;
        }
    }
    ctx->pc = 0x14F500u;
label_14f500:
    // 0x14f500: 0x8fd4003c  lw          $s4, 0x3C($fp)
    ctx->pc = 0x14f500u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x14f504: 0xa3a9011c  sb          $t1, 0x11C($sp)
    ctx->pc = 0x14f504u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 284), (uint8_t)GPR_U32(ctx, 9));
    // 0x14f508: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14f508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f50c: 0xa3a9011b  sb          $t1, 0x11B($sp)
    ctx->pc = 0x14f50cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 283), (uint8_t)GPR_U32(ctx, 9));
    // 0x14f510: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14f510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f514: 0x26960008  addiu       $s6, $s4, 0x8
    ctx->pc = 0x14f514u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_14f518:
    // 0x14f518: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14f518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14f51c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x14f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x14f520: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14f520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14f524: 0x0  nop
    ctx->pc = 0x14f524u;
    // NOP
label_14f528:
    // 0x14f528: 0xc3382a  slt         $a3, $a2, $v1
    ctx->pc = 0x14f528u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14f52c: 0x54e0ff41  bnel        $a3, $zero, . + 4 + (-0xBF << 2)
    ctx->pc = 0x14F52Cu;
    {
        const bool branch_taken_0x14f52c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f52c) {
            ctx->pc = 0x14F530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F52Cu;
            // 0x14f530: 0x8ea70000  lw          $a3, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F234u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f234;
        }
    }
    ctx->pc = 0x14F534u;
    // 0x14f534: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14f534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14f538: 0x186000dd  blez        $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x14F538u;
    {
        const bool branch_taken_0x14f538 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14F53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F538u;
            // 0x14f53c: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f538) {
            ctx->pc = 0x14F8B0u;
            goto label_14f8b0;
        }
    }
    ctx->pc = 0x14F540u;
    // 0x14f540: 0x93a3011f  lbu         $v1, 0x11F($sp)
    ctx->pc = 0x14f540u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 287)));
    // 0x14f544: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x14f544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f548: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x14f548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x14f54c: 0x93a3011e  lbu         $v1, 0x11E($sp)
    ctx->pc = 0x14f54cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 286)));
    // 0x14f550: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x14f550u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f554: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x14f554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x14f558: 0x93a3011d  lbu         $v1, 0x11D($sp)
    ctx->pc = 0x14f558u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 285)));
    // 0x14f55c: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x14f55cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f560: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x14f560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x14f564: 0x93a3011c  lbu         $v1, 0x11C($sp)
    ctx->pc = 0x14f564u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x14f568: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x14f568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f56c: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x14f56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x14f570: 0x93a3011b  lbu         $v1, 0x11B($sp)
    ctx->pc = 0x14f570u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 283)));
    // 0x14f574: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x14f574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f578: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x14f578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x14f57c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x14f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_14f580:
    // 0x14f580: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x14f580u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f584: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x14f584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_14f588:
    // 0x14f588: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x14f588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14f58c: 0x2861001b  slti        $at, $v1, 0x1B
    ctx->pc = 0x14f58cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x14f590: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F590u;
    {
        const bool branch_taken_0x14f590 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f590) {
            ctx->pc = 0x14F5A8u;
            goto label_14f5a8;
        }
    }
    ctx->pc = 0x14F598u;
    // 0x14f598: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x14f598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x14f59c: 0x241e001a  addiu       $fp, $zero, 0x1A
    ctx->pc = 0x14f59cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14f5a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F5A0u;
    {
        const bool branch_taken_0x14f5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F5A0u;
            // 0x14f5a4: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5a0) {
            ctx->pc = 0x14F5B0u;
            goto label_14f5b0;
        }
    }
    ctx->pc = 0x14F5A8u;
label_14f5a8:
    // 0x14f5a8: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x14f5a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f5ac: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x14f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_14f5b0:
    // 0x14f5b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14f5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f5b4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14f5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f5b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14f5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14f5bc: 0xc056b20  jal         func_15AC80
    ctx->pc = 0x14F5BCu;
    SET_GPR_U32(ctx, 31, 0x14F5C4u);
    ctx->pc = 0x14F5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F5BCu;
            // 0x14f5c0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC80u;
    if (runtime->hasFunction(0x15AC80u)) {
        auto targetFn = runtime->lookupFunction(0x15AC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F5C4u; }
        if (ctx->pc != 0x14F5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC80_0x15ac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F5C4u; }
        if (ctx->pc != 0x14F5C4u) { return; }
    }
    ctx->pc = 0x14F5C4u;
label_14f5c4:
    // 0x14f5c4: 0x1bc0009e  blez        $fp, . + 4 + (0x9E << 2)
    ctx->pc = 0x14F5C4u;
    {
        const bool branch_taken_0x14f5c4 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x14F5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F5C4u;
            // 0x14f5c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5c4) {
            ctx->pc = 0x14F840u;
            goto label_14f840;
        }
    }
    ctx->pc = 0x14F5CCu;
    // 0x14f5cc: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x14f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x14f5d0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x14f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x14f5d4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x14f5d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14f5d8: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x14f5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x14f5dc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x14f5dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14f5e0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x14f5e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f5e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x14f5e8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x14f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x14f5ec: 0x0  nop
    ctx->pc = 0x14f5ecu;
    // NOP
label_14f5f0:
    // 0x14f5f0: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x14f5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14f5f4: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x14f5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14f5f8: 0x94c80000  lhu         $t0, 0x0($a2)
    ctx->pc = 0x14f5f8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f5fc: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x14f5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x14f600: 0x7ba600e0  lq          $a2, 0xE0($sp)
    ctx->pc = 0x14f600u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14f604: 0x1064018  mult        $t0, $t0, $a2
    ctx->pc = 0x14f604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14f608: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x14f608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14f60c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x14f60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x14f610: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x14f610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x14f614: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x14f614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14f618: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x14f618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x14f61c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x14f61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f620: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14f620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f624: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x14f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f628: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x14f628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14f62c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x14f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f630: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x14f630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14f634: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14f634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14f638: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x14F638u;
    {
        const bool branch_taken_0x14f638 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F638u;
            // 0x14f63c: 0xac44000c  sw          $a0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f638) {
            ctx->pc = 0x14F680u;
            goto label_14f680;
        }
    }
    ctx->pc = 0x14F640u;
    // 0x14f640: 0x96680000  lhu         $t0, 0x0($s3)
    ctx->pc = 0x14f640u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14f644: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x14f644u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14f648: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x14f648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14f64c: 0x1064018  mult        $t0, $t0, $a2
    ctx->pc = 0x14f64cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14f650: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x14f650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x14f654: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x14f654u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x14f658: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x14f658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14f65c: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x14f65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x14f660: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x14f660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14f664: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x14f664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x14f668: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x14f668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14f66c: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x14f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x14f670: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x14f670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x14f674: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x14f674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x14f678: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x14f678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x14f67c: 0x0  nop
    ctx->pc = 0x14f67cu;
    // NOP
label_14f680:
    // 0x14f680: 0x12e0004d  beqz        $s7, . + 4 + (0x4D << 2)
    ctx->pc = 0x14F680u;
    {
        const bool branch_taken_0x14f680 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f680) {
            ctx->pc = 0x14F7B8u;
            goto label_14f7b8;
        }
    }
    ctx->pc = 0x14F688u;
    // 0x14f688: 0x96480000  lhu         $t0, 0x0($s2)
    ctx->pc = 0x14f688u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14f68c: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x14f68cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14f690: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x14f690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14f694: 0x1064018  mult        $t0, $t0, $a2
    ctx->pc = 0x14f694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14f698: 0x2e84021  addu        $t0, $s7, $t0
    ctx->pc = 0x14f698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
    // 0x14f69c: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x14f69cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x14f6a0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x14f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f6a4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x14f6a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14f6a8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14f6a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f6ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14F6ACu;
    {
        const bool branch_taken_0x14f6ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6ACu;
            // 0x14f6b0: 0x2469021  addu        $s2, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6ac) {
            ctx->pc = 0x14F6C4u;
            goto label_14f6c4;
        }
    }
    ctx->pc = 0x14F6B4u;
    // 0x14f6b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f6b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14f6b8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14f6b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14f6bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14F6BCu;
    {
        const bool branch_taken_0x14f6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6BCu;
            // 0x14f6c0: 0xc5000004  lwc1        $f0, 0x4($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6bc) {
            ctx->pc = 0x14F6DCu;
            goto label_14f6dc;
        }
    }
    ctx->pc = 0x14F6C4u;
label_14f6c4:
    // 0x14f6c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x14f6c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x14f6c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f6c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14f6cc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14f6ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14f6d0: 0x0  nop
    ctx->pc = 0x14f6d0u;
    // NOP
    // 0x14f6d4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x14f6d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x14f6d8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x14f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f6dc:
    // 0x14f6dc: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x14f6dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14f6e0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14f6e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f6e4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14F6E4u;
    {
        const bool branch_taken_0x14f6e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f6e4) {
            ctx->pc = 0x14F6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6E4u;
            // 0x14f6e8: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F6FCu;
            goto label_14f6fc;
        }
    }
    ctx->pc = 0x14F6ECu;
    // 0x14f6ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f6ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14f6f0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x14f6f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x14f6f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F6F4u;
    {
        const bool branch_taken_0x14f6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F6F4u;
            // 0x14f6f8: 0xc5000008  lwc1        $f0, 0x8($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6f4) {
            ctx->pc = 0x14F710u;
            goto label_14f710;
        }
    }
    ctx->pc = 0x14F6FCu;
label_14f6fc:
    // 0x14f6fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f6fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14f700: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x14f700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x14f704: 0x0  nop
    ctx->pc = 0x14f704u;
    // NOP
    // 0x14f708: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x14f708u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x14f70c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x14f70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f710:
    // 0x14f710: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x14f710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14f714: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14f714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f718: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14F718u;
    {
        const bool branch_taken_0x14f718 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f718) {
            ctx->pc = 0x14F71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F718u;
            // 0x14f71c: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F730u;
            goto label_14f730;
        }
    }
    ctx->pc = 0x14F720u;
    // 0x14f720: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f720u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14f724: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x14f724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x14f728: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14F728u;
    {
        const bool branch_taken_0x14f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F728u;
            // 0x14f72c: 0xc500000c  lwc1        $f0, 0xC($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f728) {
            ctx->pc = 0x14F744u;
            goto label_14f744;
        }
    }
    ctx->pc = 0x14F730u;
label_14f730:
    // 0x14f730: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f730u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14f734: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x14f734u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x14f738: 0x0  nop
    ctx->pc = 0x14f738u;
    // NOP
    // 0x14f73c: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x14f73cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x14f740: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x14f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f744:
    // 0x14f744: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14f744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14f748: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14f748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f74c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14F74Cu;
    {
        const bool branch_taken_0x14f74c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f74c) {
            ctx->pc = 0x14F750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F74Cu;
            // 0x14f750: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F764u;
            goto label_14f764;
        }
    }
    ctx->pc = 0x14F754u;
    // 0x14f754: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14f758: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x14f758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x14f75c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14F75Cu;
    {
        const bool branch_taken_0x14f75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f75c) {
            ctx->pc = 0x14F774u;
            goto label_14f774;
        }
    }
    ctx->pc = 0x14F764u;
label_14f764:
    // 0x14f764: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14f764u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14f768: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x14f768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x14f76c: 0x0  nop
    ctx->pc = 0x14f76cu;
    // NOP
    // 0x14f770: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x14f770u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_14f774:
    // 0x14f774: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x14F774u;
    {
        const bool branch_taken_0x14f774 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f774) {
            ctx->pc = 0x14F7A8u;
            goto label_14f7a8;
        }
    }
    ctx->pc = 0x14F77Cu;
    // 0x14f77c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14f77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14f780: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14f780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14f784: 0x74042  srl         $t0, $a3, 1
    ctx->pc = 0x14f784u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x14f788: 0x63842  srl         $a3, $a2, 1
    ctx->pc = 0x14f788u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x14f78c: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x14f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
    // 0x14f790: 0x25460001  addiu       $a2, $t2, 0x1
    ctx->pc = 0x14f790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x14f794: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x14f794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x14f798: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x14f798u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x14f79c: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x14f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x14f7a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14F7A0u;
    {
        const bool branch_taken_0x14f7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7A0u;
            // 0x14f7a4: 0xac49001c  sw          $t1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7a0) {
            ctx->pc = 0x14F7B8u;
            goto label_14f7b8;
        }
    }
    ctx->pc = 0x14F7A8u;
label_14f7a8:
    // 0x14f7a8: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x14f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x14f7ac: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x14f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x14f7b0: 0xac4a0018  sw          $t2, 0x18($v0)
    ctx->pc = 0x14f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 10));
    // 0x14f7b4: 0xac49001c  sw          $t1, 0x1C($v0)
    ctx->pc = 0x14f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 9));
label_14f7b8:
    // 0x14f7b8: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x14F7B8u;
    {
        const bool branch_taken_0x14f7b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f7b8) {
            ctx->pc = 0x14F7F0u;
            goto label_14f7f0;
        }
    }
    ctx->pc = 0x14F7C0u;
    // 0x14f7c0: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x14f7c0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f7c4: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x14f7c4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14f7c8: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x14f7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14f7cc: 0x1064018  mult        $t0, $t0, $a2
    ctx->pc = 0x14f7ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14f7d0: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x14f7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x14f7d4: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x14f7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x14f7d8: 0x2883021  addu        $a2, $s4, $t0
    ctx->pc = 0x14f7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x14f7dc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x14f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f7e0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x14f7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x14f7e4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x14f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f7e8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x14f7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x14f7ec: 0x0  nop
    ctx->pc = 0x14f7ecu;
    // NOP
label_14f7f0:
    // 0x14f7f0: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x14F7F0u;
    {
        const bool branch_taken_0x14f7f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f7f0) {
            ctx->pc = 0x14F828u;
            goto label_14f828;
        }
    }
    ctx->pc = 0x14F7F8u;
    // 0x14f7f8: 0x96080000  lhu         $t0, 0x0($s0)
    ctx->pc = 0x14f7f8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f7fc: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x14f7fcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14f800: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x14f800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14f804: 0x1064018  mult        $t0, $t0, $a2
    ctx->pc = 0x14f804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14f808: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x14f808u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x14f80c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x14f80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x14f810: 0x2c83021  addu        $a2, $s6, $t0
    ctx->pc = 0x14f810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x14f814: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x14f814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f818: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x14f818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x14f81c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x14f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f820: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F820u;
    {
        const bool branch_taken_0x14f820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F820u;
            // 0x14f824: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f820) {
            ctx->pc = 0x14F830u;
            goto label_14f830;
        }
    }
    ctx->pc = 0x14F828u;
label_14f828:
    // 0x14f828: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x14f828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x14f82c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x14f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_14f830:
    // 0x14f830: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14f830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14f834: 0xbe302a  slt         $a2, $a1, $fp
    ctx->pc = 0x14f834u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x14f838: 0x14c0ff6d  bnez        $a2, . + 4 + (-0x93 << 2)
    ctx->pc = 0x14F838u;
    {
        const bool branch_taken_0x14f838 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F838u;
            // 0x14f83c: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f838) {
            ctx->pc = 0x14F5F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f5f0;
        }
    }
    ctx->pc = 0x14F840u;
label_14f840:
    // 0x14f840: 0xc056b28  jal         func_15ACA0
    ctx->pc = 0x14F840u;
    SET_GPR_U32(ctx, 31, 0x14F848u);
    ctx->pc = 0x14F844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F840u;
            // 0x14f844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ACA0u;
    if (runtime->hasFunction(0x15ACA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F848u; }
        if (ctx->pc != 0x14F848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ACA0_0x15aca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F848u; }
        if (ctx->pc != 0x14F848u) { return; }
    }
    ctx->pc = 0x14F848u;
label_14f848:
    // 0x14f848: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x14f848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14f84c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14F84Cu;
    {
        const bool branch_taken_0x14f84c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x14f84c) {
            ctx->pc = 0x14F878u;
            goto label_14f878;
        }
    }
    ctx->pc = 0x14F854u;
    // 0x14f854: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14f854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14f858: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x14f858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f85c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x14f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14f860: 0x2649823  subu        $s3, $s3, $a0
    ctx->pc = 0x14f860u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x14f864: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x14f864u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x14f868: 0x2248823  subu        $s1, $s1, $a0
    ctx->pc = 0x14f868u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x14f86c: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x14f86cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x14f870: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14f870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14f874: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x14f874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_14f878:
    // 0x14f878: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x14f878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14f87c: 0x1c60ff42  bgtz        $v1, . + 4 + (-0xBE << 2)
    ctx->pc = 0x14F87Cu;
    {
        const bool branch_taken_0x14f87c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x14f87c) {
            ctx->pc = 0x14F588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f588;
        }
    }
    ctx->pc = 0x14F884u;
    // 0x14f884: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x14f884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x14f888: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x14f888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14f88c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x14f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x14f890: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x14f890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x14f894: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x14f894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x14f898: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14f898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14f89c: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x14f89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x14f8a0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x14f8a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14f8a4: 0x5460ff36  bnel        $v1, $zero, . + 4 + (-0xCA << 2)
    ctx->pc = 0x14F8A4u;
    {
        const bool branch_taken_0x14f8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f8a4) {
            ctx->pc = 0x14F8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F8A4u;
            // 0x14f8a8: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f580;
        }
    }
    ctx->pc = 0x14F8ACu;
    // 0x14f8ac: 0x0  nop
    ctx->pc = 0x14f8acu;
    // NOP
label_14f8b0:
    // 0x14f8b0: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x14F8B0u;
    SET_GPR_U32(ctx, 31, 0x14F8B8u);
    ctx->pc = 0x14F8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F8B0u;
            // 0x14f8b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F8B8u; }
        if (ctx->pc != 0x14F8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F8B8u; }
        if (ctx->pc != 0x14F8B8u) { return; }
    }
    ctx->pc = 0x14F8B8u;
label_14f8b8:
    // 0x14f8b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14f8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14f8bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14f8bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14f8c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14f8c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14f8c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14f8c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14f8c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14f8c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f8cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14f8ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f8d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14f8d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f8d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14f8d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f8d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f8d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f8dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x14F8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F8E0u;
            // 0x14f8e4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14F8E8u;
    // 0x14f8e8: 0x0  nop
    ctx->pc = 0x14f8e8u;
    // NOP
    // 0x14f8ec: 0x0  nop
    ctx->pc = 0x14f8ecu;
    // NOP
}
