#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00110CD8
// Address: 0x110cd8 - 0x110dc8
void sub_00110CD8_0x110cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110CD8_0x110cd8");
#endif

    switch (ctx->pc) {
        case 0x110d30u: goto label_110d30;
        case 0x110d58u: goto label_110d58;
        case 0x110d74u: goto label_110d74;
        default: break;
    }

    ctx->pc = 0x110cd8u;

    // 0x110cd8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x110cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x110cdc: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x110cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x110ce0: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x110ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x110ce4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x110ce4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ce8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x110ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x110cec: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x110cecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cf0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x110cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x110cf4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x110cf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cf8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x110cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x110cfc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x110cfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d00: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x110d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x110d04: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x110d04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d08: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x110d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x110d0c: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x110d0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d10: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x110d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x110d14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x110d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d18: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x110d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x110d1c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x110d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110d20: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x110d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x110d24: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x110d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x110d28: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x110d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x110d2c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x110d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_110d30:
    // 0x110d30: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x110d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x110d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110d38: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x110d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d3c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x110d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x110d40: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x110d40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x110d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x110d48: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x110d48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d4c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x110d4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d50: 0xc04410c  jal         func_110430
    ctx->pc = 0x110D50u;
    SET_GPR_U32(ctx, 31, 0x110D58u);
    ctx->pc = 0x110D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110D50u;
            // 0x110d54: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110D58u; }
        if (ctx->pc != 0x110D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110D58u; }
        if (ctx->pc != 0x110D58u) { return; }
    }
    ctx->pc = 0x110D58u;
label_110d58:
    // 0x110d58: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x110d58u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x110d5c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x110D5Cu;
    {
        const bool branch_taken_0x110d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110D5Cu;
            // 0x110d60: 0x8fa200c8  lw          $v0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d5c) {
            ctx->pc = 0x110D90u;
            goto label_110d90;
        }
    }
    ctx->pc = 0x110D64u;
    // 0x110d64: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x110D64u;
    {
        const bool branch_taken_0x110d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110D64u;
            // 0x110d68: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d64) {
            ctx->pc = 0x110D90u;
            goto label_110d90;
        }
    }
    ctx->pc = 0x110D6Cu;
    // 0x110d6c: 0xc0434f6  jal         func_10D3D8
    ctx->pc = 0x110D6Cu;
    SET_GPR_U32(ctx, 31, 0x110D74u);
    ctx->pc = 0x110D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110D6Cu;
            // 0x110d70: 0x2222018  mult        $a0, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D3D8u;
    if (runtime->hasFunction(0x10D3D8u)) {
        auto targetFn = runtime->lookupFunction(0x10D3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110D74u; }
        if (ctx->pc != 0x110D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D3D8_0x10d3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110D74u; }
        if (ctx->pc != 0x110D74u) { return; }
    }
    ctx->pc = 0x110D74u;
label_110d74:
    // 0x110d74: 0x2a23007f  slti        $v1, $s1, 0x7F
    ctx->pc = 0x110d74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x110d78: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x110D78u;
    {
        const bool branch_taken_0x110d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x110d78) {
            ctx->pc = 0x110D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x110D78u;
            // 0x110d7c: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x110D80u;
            goto label_110d80;
        }
    }
    ctx->pc = 0x110D80u;
label_110d80:
    // 0x110d80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x110d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x110d84: 0x2a420065  slti        $v0, $s2, 0x65
    ctx->pc = 0x110d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x110d88: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x110D88u;
    {
        const bool branch_taken_0x110d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110D88u;
            // 0x110d8c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d88) {
            ctx->pc = 0x110D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110d30;
        }
    }
    ctx->pc = 0x110D90u;
label_110d90:
    // 0x110d90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x110d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d94: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x110d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x110d98: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x110d98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x110d9c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x110d9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x110da0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x110da0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x110da4: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x110da4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x110da8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x110da8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x110dac: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x110dacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x110db0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x110db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110db4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x110db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110db8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x110db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x110DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110DBCu;
            // 0x110dc0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110DC4u;
    // 0x110dc4: 0x0  nop
    ctx->pc = 0x110dc4u;
    // NOP
}
