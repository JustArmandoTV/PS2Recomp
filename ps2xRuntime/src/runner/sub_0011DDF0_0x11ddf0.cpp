#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011DDF0
// Address: 0x11ddf0 - 0x11dea0
void sub_0011DDF0_0x11ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DDF0_0x11ddf0");
#endif

    switch (ctx->pc) {
        case 0x11de4cu: goto label_11de4c;
        case 0x11de78u: goto label_11de78;
        case 0x11de88u: goto label_11de88;
        default: break;
    }

    ctx->pc = 0x11ddf0u;

    // 0x11ddf0: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11ddf0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11ddf4: 0x440b6000  mfc1        $t3, $f12
    ctx->pc = 0x11ddf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x11ddf8: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11ddf8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11ddfc: 0x440c6000  mfc1        $t4, $f12
    ctx->pc = 0x11ddfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x11de00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11de04: 0x16f7824  and         $t7, $t3, $t7
    ctx->pc = 0x11de04u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
    // 0x11de08: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x11de08u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x11de0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11de0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11de10: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11de10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11de14: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x11de14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11de18: 0xf6dc2  srl         $t5, $t7, 23
    ctx->pc = 0x11de18u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 23));
    // 0x11de1c: 0x1cf702b  sltu        $t6, $t6, $t7
    ctx->pc = 0x11de1cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x11de20: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x11DE20u;
    {
        const bool branch_taken_0x11de20 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE20u;
            // 0x11de24: 0x1a46821  addu        $t5, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de20) {
            ctx->pc = 0x11DE4Cu;
            goto label_11de4c;
        }
    }
    ctx->pc = 0x11DE28u;
    // 0x11de28: 0x29af0100  slti        $t7, $t5, 0x100
    ctx->pc = 0x11de28u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x11de2c: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x11DE2Cu;
    {
        const bool branch_taken_0x11de2c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE2Cu;
            // 0x11de30: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de2c) {
            ctx->pc = 0x11DE74u;
            goto label_11de74;
        }
    }
    ctx->pc = 0x11DE34u;
    // 0x11de34: 0x19a0000a  blez        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x11DE34u;
    {
        const bool branch_taken_0x11de34 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x11DE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE34u;
            // 0x11de38: 0x3c0f807f  lui         $t7, 0x807F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32895 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de34) {
            ctx->pc = 0x11DE60u;
            goto label_11de60;
        }
    }
    ctx->pc = 0x11DE3Cu;
    // 0x11de3c: 0xd75c0  sll         $t6, $t5, 23
    ctx->pc = 0x11de3cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 23));
    // 0x11de40: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11de40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11de44: 0x16f7824  and         $t7, $t3, $t7
    ctx->pc = 0x11de44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
    // 0x11de48: 0x1ee6025  or          $t4, $t7, $t6
    ctx->pc = 0x11de48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
label_11de4c:
    // 0x11de4c: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x11de4cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11de50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11de50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11de54: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x11de54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11de58: 0x3e00008  jr          $ra
    ctx->pc = 0x11DE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE58u;
            // 0x11de5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DE60u;
label_11de60:
    // 0x11de60: 0x340fc350  ori         $t7, $zero, 0xC350
    ctx->pc = 0x11de60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x11de64: 0x1e4782a  slt         $t7, $t7, $a0
    ctx->pc = 0x11de64u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11de68: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11DE68u;
    {
        const bool branch_taken_0x11de68 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE68u;
            // 0x11de6c: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de68) {
            ctx->pc = 0x11DE94u;
            goto label_11de94;
        }
    }
    ctx->pc = 0x11DE70u;
    // 0x11de70: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11de70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_11de74:
    // 0x11de74: 0x25ef0120  addiu       $t7, $t7, 0x120
    ctx->pc = 0x11de74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 288));
label_11de78:
    // 0x11de78: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11de78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11de7c: 0xc5f40000  lwc1        $f20, 0x0($t7)
    ctx->pc = 0x11de7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11de80: 0xc04770a  jal         func_11DC28
    ctx->pc = 0x11DE80u;
    SET_GPR_U32(ctx, 31, 0x11DE88u);
    ctx->pc = 0x11DE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE80u;
            // 0x11de84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC28u;
    if (runtime->hasFunction(0x11DC28u)) {
        auto targetFn = runtime->lookupFunction(0x11DC28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DE88u; }
        if (ctx->pc != 0x11DE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC28_0x11dc28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DE88u; }
        if (ctx->pc != 0x11DE88u) { return; }
    }
    ctx->pc = 0x11DE88u;
label_11de88:
    // 0x11de88: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x11de88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x11de8c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x11DE8Cu;
    {
        const bool branch_taken_0x11de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE8Cu;
            // 0x11de90: 0x440c0000  mfc1        $t4, $f0 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de8c) {
            ctx->pc = 0x11DE4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11de4c;
        }
    }
    ctx->pc = 0x11DE94u;
label_11de94:
    // 0x11de94: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x11DE94u;
    {
        const bool branch_taken_0x11de94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE94u;
            // 0x11de98: 0x25ef0124  addiu       $t7, $t7, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de94) {
            ctx->pc = 0x11DE78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11de78;
        }
    }
    ctx->pc = 0x11DE9Cu;
    // 0x11de9c: 0x0  nop
    ctx->pc = 0x11de9cu;
    // NOP
}
