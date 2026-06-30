#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198CD0
// Address: 0x198cd0 - 0x198d20
void sub_00198CD0_0x198cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198CD0_0x198cd0");
#endif

    switch (ctx->pc) {
        case 0x198ce4u: goto label_198ce4;
        default: break;
    }

    ctx->pc = 0x198cd0u;

    // 0x198cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x198cd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x198cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x198cdc: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x198CDCu;
    SET_GPR_U32(ctx, 31, 0x198CE4u);
    ctx->pc = 0x198CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198CDCu;
            // 0x198ce0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198CE4u; }
        if (ctx->pc != 0x198CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198CE4u; }
        if (ctx->pc != 0x198CE4u) { return; }
    }
    ctx->pc = 0x198CE4u;
label_198ce4:
    // 0x198ce4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x198ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ce8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x198ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x198cec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x198cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198cf0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198CF0u;
    {
        const bool branch_taken_0x198cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198CF0u;
            // 0x198cf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cf0) {
            ctx->pc = 0x198D0Cu;
            goto label_198d0c;
        }
    }
    ctx->pc = 0x198CF8u;
    // 0x198cf8: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x198cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x198cfc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x198cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d00: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x198d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x198d04: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x198d04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x198d08: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x198d08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_198d0c:
    // 0x198d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198d10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x198d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x198d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x198d18: 0x3e00008  jr          $ra
    ctx->pc = 0x198D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198D18u;
            // 0x198d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198D20u;
}
