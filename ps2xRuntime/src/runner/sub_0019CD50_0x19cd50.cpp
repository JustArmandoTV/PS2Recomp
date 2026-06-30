#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CD50
// Address: 0x19cd50 - 0x19cdd8
void sub_0019CD50_0x19cd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CD50_0x19cd50");
#endif

    switch (ctx->pc) {
        case 0x19cd78u: goto label_19cd78;
        case 0x19cd98u: goto label_19cd98;
        default: break;
    }

    ctx->pc = 0x19cd50u;

    // 0x19cd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cd54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cd58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19cd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19cd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19cd60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19cd60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd64: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x19cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19cd68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19cd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19cd6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19cd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19cd70: 0xc040eb6  jal         func_103AD8
    ctx->pc = 0x19CD70u;
    SET_GPR_U32(ctx, 31, 0x19CD78u);
    ctx->pc = 0x19CD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD70u;
            // 0x19cd74: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103AD8u;
    if (runtime->hasFunction(0x103AD8u)) {
        auto targetFn = runtime->lookupFunction(0x103AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD78u; }
        if (ctx->pc != 0x19CD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103AD8_0x103ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD78u; }
        if (ctx->pc != 0x19CD78u) { return; }
    }
    ctx->pc = 0x19CD78u;
label_19cd78:
    // 0x19cd78: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x19cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x19cd7c: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x19cd7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x19cd80: 0xac510080  sw          $s1, 0x80($v0)
    ctx->pc = 0x19cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 17));
    // 0x19cd84: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x19cd84u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x19cd88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19cd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19cd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd90: 0xc040f9c  jal         func_103E70
    ctx->pc = 0x19CD90u;
    SET_GPR_U32(ctx, 31, 0x19CD98u);
    ctx->pc = 0x19CD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CD90u;
            // 0x19cd94: 0x103103  sra         $a2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103E70u;
    if (runtime->hasFunction(0x103E70u)) {
        auto targetFn = runtime->lookupFunction(0x103E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD98u; }
        if (ctx->pc != 0x19CD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103E70_0x103e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD98u; }
        if (ctx->pc != 0x19CD98u) { return; }
    }
    ctx->pc = 0x19CD98u;
label_19cd98:
    // 0x19cd98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19cd98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19cd9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cda0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19cda0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19cda4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19cda4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cda8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19cda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19cdac: 0x3e00008  jr          $ra
    ctx->pc = 0x19CDACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CDACu;
            // 0x19cdb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CDB4u;
    // 0x19cdb4: 0x0  nop
    ctx->pc = 0x19cdb4u;
    // NOP
    // 0x19cdb8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19cdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x19CDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CDBCu;
            // 0x19cdc0: 0xac44993c  sw          $a0, -0x66C4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940988), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CDC4u;
    // 0x19cdc4: 0x0  nop
    ctx->pc = 0x19cdc4u;
    // NOP
    // 0x19cdc8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x19cdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x19CDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CDCCu;
            // 0x19cdd0: 0x8c62993c  lw          $v0, -0x66C4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940988)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CDD4u;
    // 0x19cdd4: 0x0  nop
    ctx->pc = 0x19cdd4u;
    // NOP
}
