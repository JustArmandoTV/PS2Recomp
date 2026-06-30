#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D9D90
// Address: 0x2d9d90 - 0x2d9e60
void sub_002D9D90_0x2d9d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9D90_0x2d9d90");
#endif

    switch (ctx->pc) {
        case 0x2d9dccu: goto label_2d9dcc;
        case 0x2d9e04u: goto label_2d9e04;
        case 0x2d9e20u: goto label_2d9e20;
        case 0x2d9e48u: goto label_2d9e48;
        default: break;
    }

    ctx->pc = 0x2d9d90u;

    // 0x2d9d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d9d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d9d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d9d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d9d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d9d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9da0: 0x908302c4  lbu         $v1, 0x2C4($a0)
    ctx->pc = 0x2d9da0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 708)));
    // 0x2d9da4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D9DA4u;
    {
        const bool branch_taken_0x2d9da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9DA4u;
            // 0x2d9da8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9da4) {
            ctx->pc = 0x2D9E48u;
            goto label_2d9e48;
        }
    }
    ctx->pc = 0x2D9DACu;
    // 0x2d9dac: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x2d9dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x2d9db0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d9db4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2d9db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d9db8: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x2d9db8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x2d9dbc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2d9dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x2d9dc0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d9dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d9dc4: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x2D9DC4u;
    SET_GPR_U32(ctx, 31, 0x2D9DCCu);
    ctx->pc = 0x2D9DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9DC4u;
            // 0x2d9dc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DCCu; }
        if (ctx->pc != 0x2D9DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DCCu; }
        if (ctx->pc != 0x2D9DCCu) { return; }
    }
    ctx->pc = 0x2D9DCCu;
label_2d9dcc:
    // 0x2d9dcc: 0xa20002c4  sb          $zero, 0x2C4($s0)
    ctx->pc = 0x2d9dccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 708), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9dd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9dd4: 0x8c420da0  lw          $v0, 0xDA0($v0)
    ctx->pc = 0x2d9dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
    // 0x2d9dd8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2d9dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2d9ddc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D9DDCu;
    {
        const bool branch_taken_0x2d9ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9ddc) {
            ctx->pc = 0x2D9DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9DDCu;
            // 0x2d9de0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9E24u;
            goto label_2d9e24;
        }
    }
    ctx->pc = 0x2D9DE4u;
    // 0x2d9de4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d9de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d9de8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2d9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2d9dec: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2d9decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2d9df0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d9df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d9df4: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x2d9df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2d9df8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2d9df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2d9dfc: 0xc0a545c  jal         func_295170
    ctx->pc = 0x2D9DFCu;
    SET_GPR_U32(ctx, 31, 0x2D9E04u);
    ctx->pc = 0x2D9E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9DFCu;
            // 0x2d9e00: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E04u; }
        if (ctx->pc != 0x2D9E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E04u; }
        if (ctx->pc != 0x2D9E04u) { return; }
    }
    ctx->pc = 0x2D9E04u;
label_2d9e04:
    // 0x2d9e04: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x2d9e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
    // 0x2d9e08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d9e0c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d9e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d9e10: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2d9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x2d9e14: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d9e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d9e18: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x2D9E18u;
    SET_GPR_U32(ctx, 31, 0x2D9E20u);
    ctx->pc = 0x2D9E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E18u;
            // 0x2d9e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E20u; }
        if (ctx->pc != 0x2D9E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E20u; }
        if (ctx->pc != 0x2D9E20u) { return; }
    }
    ctx->pc = 0x2D9E20u;
label_2d9e20:
    // 0x2d9e20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9e24:
    // 0x2d9e24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d9e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9e2c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2d9e2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2d9e30: 0x8c420d70  lw          $v0, 0xD70($v0)
    ctx->pc = 0x2d9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
    // 0x2d9e34: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2d9e34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2d9e38: 0xa04300dd  sb          $v1, 0xDD($v0)
    ctx->pc = 0x2d9e38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 221), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9e3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9e40: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2D9E40u;
    SET_GPR_U32(ctx, 31, 0x2D9E48u);
    ctx->pc = 0x2D9E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E40u;
            // 0x2d9e44: 0x24440330  addiu       $a0, $v0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E48u; }
        if (ctx->pc != 0x2D9E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9E48u; }
        if (ctx->pc != 0x2D9E48u) { return; }
    }
    ctx->pc = 0x2D9E48u;
label_2d9e48:
    // 0x2d9e48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d9e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9e54: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E54u;
            // 0x2d9e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9E5Cu;
    // 0x2d9e5c: 0x0  nop
    ctx->pc = 0x2d9e5cu;
    // NOP
}
