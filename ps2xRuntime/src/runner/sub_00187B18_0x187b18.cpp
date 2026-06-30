#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187B18
// Address: 0x187b18 - 0x187b90
void sub_00187B18_0x187b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187B18_0x187b18");
#endif

    switch (ctx->pc) {
        case 0x187b4cu: goto label_187b4c;
        case 0x187b6cu: goto label_187b6c;
        default: break;
    }

    ctx->pc = 0x187b18u;

    // 0x187b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187b1c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x187b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x187b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187b24: 0x24635d9c  addiu       $v1, $v1, 0x5D9C
    ctx->pc = 0x187b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23964));
    // 0x187b28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x187b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x187b2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187b30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x187b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x187b34: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x187B34u;
    {
        const bool branch_taken_0x187b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187B34u;
            // 0x187b38: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b34) {
            ctx->pc = 0x187B80u;
            goto label_187b80;
        }
    }
    ctx->pc = 0x187B3Cu;
    // 0x187b3c: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x187b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x187b40: 0x26106030  addiu       $s0, $s0, 0x6030
    ctx->pc = 0x187b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24624));
    // 0x187b44: 0xc05f104  jal         func_17C410
    ctx->pc = 0x187B44u;
    SET_GPR_U32(ctx, 31, 0x187B4Cu);
    ctx->pc = 0x187B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187B44u;
            // 0x187b48: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C410u;
    if (runtime->hasFunction(0x17C410u)) {
        auto targetFn = runtime->lookupFunction(0x17C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B4Cu; }
        if (ctx->pc != 0x187B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C410_0x17c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B4Cu; }
        if (ctx->pc != 0x187B4Cu) { return; }
    }
    ctx->pc = 0x187B4Cu;
label_187b4c:
    // 0x187b4c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x187b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x187b50: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x187b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x187b54: 0x24505da4  addiu       $s0, $v0, 0x5DA4
    ctx->pc = 0x187b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23972));
    // 0x187b58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x187b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187b5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187B5Cu;
    {
        const bool branch_taken_0x187b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187B5Cu;
            // 0x187b60: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b5c) {
            ctx->pc = 0x187B70u;
            goto label_187b70;
        }
    }
    ctx->pc = 0x187B64u;
    // 0x187b64: 0xc045262  jal         func_114988
    ctx->pc = 0x187B64u;
    SET_GPR_U32(ctx, 31, 0x187B6Cu);
    ctx->pc = 0x114988u;
    if (runtime->hasFunction(0x114988u)) {
        auto targetFn = runtime->lookupFunction(0x114988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B6Cu; }
        if (ctx->pc != 0x187B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114988_0x114988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B6Cu; }
        if (ctx->pc != 0x187B6Cu) { return; }
    }
    ctx->pc = 0x187B6Cu;
label_187b6c:
    // 0x187b6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x187b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_187b70:
    // 0x187b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187b74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187b78: 0x805f1be  j           func_17C6F8
    ctx->pc = 0x187B78u;
    ctx->pc = 0x187B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187B78u;
            // 0x187b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C6F8u;
    if (runtime->hasFunction(0x17C6F8u)) {
        auto targetFn = runtime->lookupFunction(0x17C6F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017C6F8_0x17c6f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x187B80u;
label_187b80:
    // 0x187b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187b84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187b88: 0x3e00008  jr          $ra
    ctx->pc = 0x187B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187B88u;
            // 0x187b8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187B90u;
}
