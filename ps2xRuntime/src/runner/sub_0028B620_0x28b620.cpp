#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B620
// Address: 0x28b620 - 0x28b780
void sub_0028B620_0x28b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B620_0x28b620");
#endif

    switch (ctx->pc) {
        case 0x28b660u: goto label_28b660;
        case 0x28b698u: goto label_28b698;
        case 0x28b6b8u: goto label_28b6b8;
        case 0x28b6e0u: goto label_28b6e0;
        default: break;
    }

    ctx->pc = 0x28b620u;

    // 0x28b620: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28b620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28b624: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x28b624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b628: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28b628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28b62c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x28b62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b630: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28b630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28b634: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28b634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28b638: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x28b638u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b63c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28b63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28b640: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x28b640u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b644: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28b644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28b648: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x28b648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28b64c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28b650: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28b654: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28b654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28b658: 0xc0a2ce4  jal         func_28B390
    ctx->pc = 0x28B658u;
    SET_GPR_U32(ctx, 31, 0x28B660u);
    ctx->pc = 0x28B65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B658u;
            // 0x28b65c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B390u;
    if (runtime->hasFunction(0x28B390u)) {
        auto targetFn = runtime->lookupFunction(0x28B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B660u; }
        if (ctx->pc != 0x28B660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B390_0x28b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B660u; }
        if (ctx->pc != 0x28B660u) { return; }
    }
    ctx->pc = 0x28B660u;
label_28b660:
    // 0x28b660: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x28b660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28b664: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x28b664u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28b668: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B668u;
    {
        const bool branch_taken_0x28b668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b668) {
            ctx->pc = 0x28B678u;
            goto label_28b678;
        }
    }
    ctx->pc = 0x28B670u;
    // 0x28b670: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x28b670u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x28b674: 0x0  nop
    ctx->pc = 0x28b674u;
    // NOP
label_28b678:
    // 0x28b678: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x28b678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28b67c: 0x10963c  dsll32      $s2, $s0, 24
    ctx->pc = 0x28b67cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 24));
    // 0x28b680: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28b680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b684: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28b684u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28b688: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x28B688u;
    {
        const bool branch_taken_0x28b688 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B688u;
            // 0x28b68c: 0x12963f  dsra32      $s2, $s2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b688) {
            ctx->pc = 0x28B750u;
            goto label_28b750;
        }
    }
    ctx->pc = 0x28B690u;
    // 0x28b690: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28b690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b694: 0x0  nop
    ctx->pc = 0x28b694u;
    // NOP
label_28b698:
    // 0x28b698: 0xa3a0009c  sb          $zero, 0x9C($sp)
    ctx->pc = 0x28b698u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b69c: 0xa3a00098  sb          $zero, 0x98($sp)
    ctx->pc = 0x28b69cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b6a0: 0xa3a00094  sb          $zero, 0x94($sp)
    ctx->pc = 0x28b6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x28b6a4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x28b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28b6a8: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x28b6a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28b6ac: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x28B6ACu;
    {
        const bool branch_taken_0x28b6ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B6ACu;
            // 0x28b6b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6ac) {
            ctx->pc = 0x28B6F8u;
            goto label_28b6f8;
        }
    }
    ctx->pc = 0x28B6B4u;
    // 0x28b6b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28b6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b6b8:
    // 0x28b6b8: 0x12740009  beq         $s3, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x28B6B8u;
    {
        const bool branch_taken_0x28b6b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x28b6b8) {
            ctx->pc = 0x28B6E0u;
            goto label_28b6e0;
        }
    }
    ctx->pc = 0x28B6C0u;
    // 0x28b6c0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x28b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28b6c4: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x28b6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x28b6c8: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x28b6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x28b6cc: 0x27a80098  addiu       $t0, $sp, 0x98
    ctx->pc = 0x28b6ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x28b6d0: 0x27a90094  addiu       $t1, $sp, 0x94
    ctx->pc = 0x28b6d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x28b6d4: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x28b6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x28b6d8: 0xc0a2d40  jal         func_28B500
    ctx->pc = 0x28B6D8u;
    SET_GPR_U32(ctx, 31, 0x28B6E0u);
    ctx->pc = 0x28B6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B6D8u;
            // 0x28b6dc: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B500u;
    if (runtime->hasFunction(0x28B500u)) {
        auto targetFn = runtime->lookupFunction(0x28B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B6E0u; }
        if (ctx->pc != 0x28B6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B500_0x28b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B6E0u; }
        if (ctx->pc != 0x28B6E0u) { return; }
    }
    ctx->pc = 0x28B6E0u;
label_28b6e0:
    // 0x28b6e0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x28b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28b6e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28b6e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28b6e8: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x28b6e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28b6ec: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x28B6ECu;
    {
        const bool branch_taken_0x28b6ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B6ECu;
            // 0x28b6f0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6ec) {
            ctx->pc = 0x28B6B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b6b8;
        }
    }
    ctx->pc = 0x28B6F4u;
    // 0x28b6f4: 0x0  nop
    ctx->pc = 0x28b6f4u;
    // NOP
label_28b6f8:
    // 0x28b6f8: 0x121e3c  dsll32      $v1, $s2, 24
    ctx->pc = 0x28b6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 24));
    // 0x28b6fc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28b6fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28b700: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28b700u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28b704: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B704u;
    {
        const bool branch_taken_0x28b704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b704) {
            ctx->pc = 0x28B714u;
            goto label_28b714;
        }
    }
    ctx->pc = 0x28B70Cu;
    // 0x28b70c: 0x83a3009c  lb          $v1, 0x9C($sp)
    ctx->pc = 0x28b70cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x28b710: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28b710u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28b714:
    // 0x28b714: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B714u;
    {
        const bool branch_taken_0x28b714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b714) {
            ctx->pc = 0x28B724u;
            goto label_28b724;
        }
    }
    ctx->pc = 0x28B71Cu;
    // 0x28b71c: 0x83a30098  lb          $v1, 0x98($sp)
    ctx->pc = 0x28b71cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x28b720: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28b720u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28b724:
    // 0x28b724: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B724u;
    {
        const bool branch_taken_0x28b724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B724u;
            // 0x28b728: 0x3963c  dsll32      $s2, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b724) {
            ctx->pc = 0x28B738u;
            goto label_28b738;
        }
    }
    ctx->pc = 0x28B72Cu;
    // 0x28b72c: 0x83a30094  lb          $v1, 0x94($sp)
    ctx->pc = 0x28b72cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x28b730: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28b730u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28b734: 0x3963c  dsll32      $s2, $v1, 24
    ctx->pc = 0x28b734u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 24));
label_28b738:
    // 0x28b738: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28b738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28b73c: 0x284182a  slt         $v1, $s4, $a0
    ctx->pc = 0x28b73cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28b740: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x28b740u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x28b744: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x28B744u;
    {
        const bool branch_taken_0x28b744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B744u;
            // 0x28b748: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b744) {
            ctx->pc = 0x28B698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b698;
        }
    }
    ctx->pc = 0x28B74Cu;
    // 0x28b74c: 0x0  nop
    ctx->pc = 0x28b74cu;
    // NOP
label_28b750:
    // 0x28b750: 0xa2d20000  sb          $s2, 0x0($s6)
    ctx->pc = 0x28b750u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x28b754: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28b754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28b758: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28b758u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28b75c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28b75cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b760: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28b760u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b764: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28b764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28b768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b76c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b76cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28b770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b774: 0x3e00008  jr          $ra
    ctx->pc = 0x28B774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B774u;
            // 0x28b778: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B77Cu;
    // 0x28b77c: 0x0  nop
    ctx->pc = 0x28b77cu;
    // NOP
}
