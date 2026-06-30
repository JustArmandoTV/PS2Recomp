#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00303E10
// Address: 0x303e10 - 0x303e90
void sub_00303E10_0x303e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303E10_0x303e10");
#endif

    switch (ctx->pc) {
        case 0x303e58u: goto label_303e58;
        case 0x303e74u: goto label_303e74;
        default: break;
    }

    ctx->pc = 0x303e10u;

    // 0x303e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x303e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x303e14: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x303e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x303e18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x303e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x303e1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303e20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303e24: 0x8c900d74  lw          $s0, 0xD74($a0)
    ctx->pc = 0x303e24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
    // 0x303e28: 0x8c63f280  lw          $v1, -0xD80($v1)
    ctx->pc = 0x303e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963840)));
    // 0x303e2c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x303e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x303e30: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x303e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x303e34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x303e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x303e38: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x303E38u;
    {
        const bool branch_taken_0x303e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303e38) {
            ctx->pc = 0x303E3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303E38u;
            // 0x303e3c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303E78u;
            goto label_303e78;
        }
    }
    ctx->pc = 0x303E40u;
    // 0x303e40: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x303e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x303e44: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x303e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x303e48: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x303e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x303e4c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x303e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x303e50: 0xc0a545c  jal         func_295170
    ctx->pc = 0x303E50u;
    SET_GPR_U32(ctx, 31, 0x303E58u);
    ctx->pc = 0x303E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303E50u;
            // 0x303e54: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E58u; }
        if (ctx->pc != 0x303E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E58u; }
        if (ctx->pc != 0x303E58u) { return; }
    }
    ctx->pc = 0x303E58u;
label_303e58:
    // 0x303e58: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x303e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
    // 0x303e5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x303e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x303e60: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x303e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x303e64: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x303e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x303e68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x303e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x303e6c: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x303E6Cu;
    SET_GPR_U32(ctx, 31, 0x303E74u);
    ctx->pc = 0x303E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303E6Cu;
            // 0x303e70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E74u; }
        if (ctx->pc != 0x303E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303E74u; }
        if (ctx->pc != 0x303E74u) { return; }
    }
    ctx->pc = 0x303E74u;
label_303e74:
    // 0x303e74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x303e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_303e78:
    // 0x303e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303e7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303e80: 0x3e00008  jr          $ra
    ctx->pc = 0x303E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303E80u;
            // 0x303e84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303E88u;
    // 0x303e88: 0x0  nop
    ctx->pc = 0x303e88u;
    // NOP
    // 0x303e8c: 0x0  nop
    ctx->pc = 0x303e8cu;
    // NOP
}
