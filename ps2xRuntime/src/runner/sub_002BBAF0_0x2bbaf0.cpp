#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBAF0
// Address: 0x2bbaf0 - 0x2bbb80
void sub_002BBAF0_0x2bbaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBAF0_0x2bbaf0");
#endif

    switch (ctx->pc) {
        case 0x2bbb40u: goto label_2bbb40;
        case 0x2bbb48u: goto label_2bbb48;
        default: break;
    }

    ctx->pc = 0x2bbaf0u;

    // 0x2bbaf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bbaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bbaf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bbaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bbaf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bbaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bbafc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bbafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bbb00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bbb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bbb04: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2bbb08: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bbb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bbb0c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2bbb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2bbb10: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2bbb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2bbb14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bbb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbb18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2bbb18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2bbb1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bbb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb20: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2bbb20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2bbb24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2bbb24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2bbb28: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2bbb28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2bbb2c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2bbb2cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2bbb30: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2bbb30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbb34: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2bbb34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bbb38: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2BBB38u;
    SET_GPR_U32(ctx, 31, 0x2BBB40u);
    ctx->pc = 0x2BBB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBB38u;
            // 0x2bbb3c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB40u; }
        if (ctx->pc != 0x2BBB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB40u; }
        if (ctx->pc != 0x2BBB40u) { return; }
    }
    ctx->pc = 0x2BBB40u;
label_2bbb40:
    // 0x2bbb40: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2BBB40u;
    SET_GPR_U32(ctx, 31, 0x2BBB48u);
    ctx->pc = 0x2BBB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBB40u;
            // 0x2bbb44: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB48u; }
        if (ctx->pc != 0x2BBB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB48u; }
        if (ctx->pc != 0x2BBB48u) { return; }
    }
    ctx->pc = 0x2BBB48u;
label_2bbb48:
    // 0x2bbb48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bbb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2bbb4c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2bbb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x2bbb50: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x2bbb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2bbb54: 0x2463c560  addiu       $v1, $v1, -0x3AA0
    ctx->pc = 0x2bbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952288));
    // 0x2bbb58: 0x8c840788  lw          $a0, 0x788($a0)
    ctx->pc = 0x2bbb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
    // 0x2bbb5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bbb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbb60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bbb64: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2bbb64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bbb68: 0xa203004d  sb          $v1, 0x4D($s0)
    ctx->pc = 0x2bbb68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bbb6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bbb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbb70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bbb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbb74: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBB74u;
            // 0x2bbb78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBB7Cu;
    // 0x2bbb7c: 0x0  nop
    ctx->pc = 0x2bbb7cu;
    // NOP
}
