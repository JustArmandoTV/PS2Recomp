#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193F58
// Address: 0x193f58 - 0x193fb8
void sub_00193F58_0x193f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193F58_0x193f58");
#endif

    switch (ctx->pc) {
        case 0x193f6cu: goto label_193f6c;
        case 0x193fa8u: goto label_193fa8;
        default: break;
    }

    ctx->pc = 0x193f58u;

    // 0x193f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193f60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x193f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x193f64: 0xc06599a  jal         func_196668
    ctx->pc = 0x193F64u;
    SET_GPR_U32(ctx, 31, 0x193F6Cu);
    ctx->pc = 0x193F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193F64u;
            // 0x193f68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F6Cu; }
        if (ctx->pc != 0x193F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F6Cu; }
        if (ctx->pc != 0x193F6Cu) { return; }
    }
    ctx->pc = 0x193F6Cu;
label_193f6c:
    // 0x193f6c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x193f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x193f70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f74: 0x34a50211  ori         $a1, $a1, 0x211
    ctx->pc = 0x193f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)529);
    // 0x193f78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x193F78u;
    {
        const bool branch_taken_0x193f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F78u;
            // 0x193f7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f78) {
            ctx->pc = 0x193F90u;
            goto label_193f90;
        }
    }
    ctx->pc = 0x193F80u;
    // 0x193f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193f84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x193f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193f88: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x193F88u;
    ctx->pc = 0x193F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193F88u;
            // 0x193f8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x193F90u;
label_193f90:
    // 0x193f90: 0x8e03037c  lw          $v1, 0x37C($s0)
    ctx->pc = 0x193f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x193f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193f98: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x193F98u;
    {
        const bool branch_taken_0x193f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x193F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F98u;
            // 0x193f9c: 0xae020428  sw          $v0, 0x428($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f98) {
            ctx->pc = 0x193FA8u;
            goto label_193fa8;
        }
    }
    ctx->pc = 0x193FA0u;
    // 0x193fa0: 0xc065a5a  jal         func_196968
    ctx->pc = 0x193FA0u;
    SET_GPR_U32(ctx, 31, 0x193FA8u);
    ctx->pc = 0x193FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193FA0u;
            // 0x193fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196968u;
    if (runtime->hasFunction(0x196968u)) {
        auto targetFn = runtime->lookupFunction(0x196968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FA8u; }
        if (ctx->pc != 0x193FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196968_0x196968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FA8u; }
        if (ctx->pc != 0x193FA8u) { return; }
    }
    ctx->pc = 0x193FA8u;
label_193fa8:
    // 0x193fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193fac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x193facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x193FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193FB0u;
            // 0x193fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193FB8u;
}
