#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029F1E0
// Address: 0x29f1e0 - 0x29f2f0
void sub_0029F1E0_0x29f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F1E0_0x29f1e0");
#endif

    switch (ctx->pc) {
        case 0x29f20cu: goto label_29f20c;
        case 0x29f220u: goto label_29f220;
        case 0x29f260u: goto label_29f260;
        default: break;
    }

    ctx->pc = 0x29f1e0u;

    // 0x29f1e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29f1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29f1e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29f1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29f1e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29f1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29f1ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29f1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29f1f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29f1f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29f1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29f1f8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x29f1f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29f200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29f204: 0xc0a7c58  jal         func_29F160
    ctx->pc = 0x29F204u;
    SET_GPR_U32(ctx, 31, 0x29F20Cu);
    ctx->pc = 0x29F208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F204u;
            // 0x29f208: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29F160u;
    if (runtime->hasFunction(0x29F160u)) {
        auto targetFn = runtime->lookupFunction(0x29F160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F20Cu; }
        if (ctx->pc != 0x29F20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029F160_0x29f160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F20Cu; }
        if (ctx->pc != 0x29F20Cu) { return; }
    }
    ctx->pc = 0x29F20Cu;
label_29f20c:
    // 0x29f20c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x29f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29f210: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29f210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f214: 0x1860002a  blez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x29F214u;
    {
        const bool branch_taken_0x29f214 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x29F218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F214u;
            // 0x29f218: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f214) {
            ctx->pc = 0x29F2C0u;
            goto label_29f2c0;
        }
    }
    ctx->pc = 0x29F21Cu;
    // 0x29f21c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29f21cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f220:
    // 0x29f220: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x29f220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x29f224: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x29f224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f228: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x29f228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x29f22c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f230: 0x4610019  bgez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x29F230u;
    {
        const bool branch_taken_0x29f230 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x29f230) {
            ctx->pc = 0x29F298u;
            goto label_29f298;
        }
    }
    ctx->pc = 0x29F238u;
    // 0x29f238: 0x38023  negu        $s0, $v1
    ctx->pc = 0x29f238u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x29f23c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x29f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f240: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x29f240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x29f244: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x29f244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x29f248: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x29f248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x29f24c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F24Cu;
    {
        const bool branch_taken_0x29f24c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29f24c) {
            ctx->pc = 0x29F260u;
            goto label_29f260;
        }
    }
    ctx->pc = 0x29F254u;
    // 0x29f254: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29f254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f258: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x29F258u;
    SET_GPR_U32(ctx, 31, 0x29F260u);
    ctx->pc = 0x29F25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F258u;
            // 0x29f25c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F260u; }
        if (ctx->pc != 0x29F260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F260u; }
        if (ctx->pc != 0x29F260u) { return; }
    }
    ctx->pc = 0x29F260u;
label_29f260:
    // 0x29f260: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x29f260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29f264: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x29f264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29f268: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x29f268u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x29f26c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29f270: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x29f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29f274: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29f274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29f278: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x29f278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x29f27c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x29f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x29f280: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f284: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x29f284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x29f288: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x29f288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x29f28c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29F28Cu;
    {
        const bool branch_taken_0x29f28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F28Cu;
            // 0x29f290: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f28c) {
            ctx->pc = 0x29F2A8u;
            goto label_29f2a8;
        }
    }
    ctx->pc = 0x29F294u;
    // 0x29f294: 0x0  nop
    ctx->pc = 0x29f294u;
    // NOP
label_29f298:
    // 0x29f298: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29f298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29f29c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x29f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29f2a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f2a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x29f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_29f2a8:
    // 0x29f2a8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x29f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x29f2ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29f2acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29f2b0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x29f2b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29f2b4: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x29F2B4u;
    {
        const bool branch_taken_0x29f2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F2B4u;
            // 0x29f2b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f2b4) {
            ctx->pc = 0x29F220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f220;
        }
    }
    ctx->pc = 0x29F2BCu;
    // 0x29f2bc: 0x0  nop
    ctx->pc = 0x29f2bcu;
    // NOP
label_29f2c0:
    // 0x29f2c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29f2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29f2c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29f2c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29f2c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29f2c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29f2cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29f2ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29f2d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29f2d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29f2d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29f2d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29f2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x29F2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F2DCu;
            // 0x29f2e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F2E4u;
    // 0x29f2e4: 0x0  nop
    ctx->pc = 0x29f2e4u;
    // NOP
    // 0x29f2e8: 0x0  nop
    ctx->pc = 0x29f2e8u;
    // NOP
    // 0x29f2ec: 0x0  nop
    ctx->pc = 0x29f2ecu;
    // NOP
}
