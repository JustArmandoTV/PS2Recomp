#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178C18
// Address: 0x178c18 - 0x178c80
void sub_00178C18_0x178c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178C18_0x178c18");
#endif

    switch (ctx->pc) {
        case 0x178c2cu: goto label_178c2c;
        case 0x178c3cu: goto label_178c3c;
        default: break;
    }

    ctx->pc = 0x178c18u;

    // 0x178c18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178c20: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x178c20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x178c24: 0x2610d5d8  addiu       $s0, $s0, -0x2A28
    ctx->pc = 0x178c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956504));
    // 0x178c28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_178c2c:
    // 0x178c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178c34: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x178C34u;
    SET_GPR_U32(ctx, 31, 0x178C3Cu);
    ctx->pc = 0x178C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178C34u;
            // 0x178c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C3Cu; }
        if (ctx->pc != 0x178C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C3Cu; }
        if (ctx->pc != 0x178C3Cu) { return; }
    }
    ctx->pc = 0x178C3Cu;
label_178c3c:
    // 0x178c3c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x178c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x178c40: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x178c40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x178c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x178C48u;
    {
        const bool branch_taken_0x178c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178C48u;
            // 0x178c4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c48) {
            ctx->pc = 0x178C68u;
            goto label_178c68;
        }
    }
    ctx->pc = 0x178C50u;
    // 0x178c50: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x178c50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x178c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178c58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178c5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178c60: 0x3e00008  jr          $ra
    ctx->pc = 0x178C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178C60u;
            // 0x178c64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178C68u;
label_178c68:
    // 0x178c68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178c6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178c74: 0x804a508  j           func_129420
    ctx->pc = 0x178C74u;
    ctx->pc = 0x178C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178C74u;
            // 0x178c78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x178C7Cu;
    // 0x178c7c: 0x0  nop
    ctx->pc = 0x178c7cu;
    // NOP
}
