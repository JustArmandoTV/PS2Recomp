#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001743D0
// Address: 0x1743d0 - 0x174468
void sub_001743D0_0x1743d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001743D0_0x1743d0");
#endif

    switch (ctx->pc) {
        case 0x174434u: goto label_174434;
        case 0x174448u: goto label_174448;
        default: break;
    }

    ctx->pc = 0x1743d0u;

    // 0x1743d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1743d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1743d4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1743D4u;
    {
        const bool branch_taken_0x1743d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1743D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1743D4u;
            // 0x1743d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1743d4) {
            ctx->pc = 0x1743F0u;
            goto label_1743f0;
        }
    }
    ctx->pc = 0x1743DCu;
    // 0x1743dc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1743dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1743e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1743e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1743e4: 0x24844458  addiu       $a0, $a0, 0x4458
    ctx->pc = 0x1743e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17496));
    // 0x1743e8: 0x8059f4e  j           func_167D38
    ctx->pc = 0x1743E8u;
    ctx->pc = 0x1743ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1743E8u;
            // 0x1743ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1743F0u;
label_1743f0:
    // 0x1743f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1743f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1743f4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1743f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1743f8: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x1743f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x1743fc: 0xac453f28  sw          $a1, 0x3F28($v0)
    ctx->pc = 0x1743fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16168), GPR_U32(ctx, 5));
    // 0x174400: 0x3e00008  jr          $ra
    ctx->pc = 0x174400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174400u;
            // 0x174404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174408u;
    // 0x174408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17440c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17440cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174418: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x174418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17441c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17441cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x174420: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x174420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174424: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x174424u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x174428: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x174428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17442c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17442Cu;
    SET_GPR_U32(ctx, 31, 0x174434u);
    ctx->pc = 0x174430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17442Cu;
            // 0x174430: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174434u; }
        if (ctx->pc != 0x174434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174434u; }
        if (ctx->pc != 0x174434u) { return; }
    }
    ctx->pc = 0x174434u;
label_174434:
    // 0x174434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174438: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x174438u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17443c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17443cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174440: 0xc05d11a  jal         func_174468
    ctx->pc = 0x174440u;
    SET_GPR_U32(ctx, 31, 0x174448u);
    ctx->pc = 0x174444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174440u;
            // 0x174444: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174468u;
    if (runtime->hasFunction(0x174468u)) {
        auto targetFn = runtime->lookupFunction(0x174468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174448u; }
        if (ctx->pc != 0x174448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174468_0x174468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174448u; }
        if (ctx->pc != 0x174448u) { return; }
    }
    ctx->pc = 0x174448u;
label_174448:
    // 0x174448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x174448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17444c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17444cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174450: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x174450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174454: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x174454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174458: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x174458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17445c: 0x80599e0  j           func_166780
    ctx->pc = 0x17445Cu;
    ctx->pc = 0x174460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17445Cu;
            // 0x174460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x174464u;
    // 0x174464: 0x0  nop
    ctx->pc = 0x174464u;
    // NOP
}
