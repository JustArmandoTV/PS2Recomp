#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00207EA0
// Address: 0x207ea0 - 0x207f40
void sub_00207EA0_0x207ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207EA0_0x207ea0");
#endif

    switch (ctx->pc) {
        case 0x207ec8u: goto label_207ec8;
        default: break;
    }

    ctx->pc = 0x207ea0u;

    // 0x207ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x207ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x207ea4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x207ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x207ea8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x207ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x207eac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x207eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x207eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x207eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207eb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x207eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x207eb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x207eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ebc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x207ebcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x207ec0: 0xc080cd4  jal         func_203350
    ctx->pc = 0x207EC0u;
    SET_GPR_U32(ctx, 31, 0x207EC8u);
    ctx->pc = 0x207EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207EC0u;
            // 0x207ec4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203350u;
    if (runtime->hasFunction(0x203350u)) {
        auto targetFn = runtime->lookupFunction(0x203350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EC8u; }
        if (ctx->pc != 0x207EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203350_0x203350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EC8u; }
        if (ctx->pc != 0x207EC8u) { return; }
    }
    ctx->pc = 0x207EC8u;
label_207ec8:
    // 0x207ec8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x207ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x207ecc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x207eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x207ed0: 0x2463e470  addiu       $v1, $v1, -0x1B90
    ctx->pc = 0x207ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960240));
    // 0x207ed4: 0x2442e498  addiu       $v0, $v0, -0x1B68
    ctx->pc = 0x207ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960280));
    // 0x207ed8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x207ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x207edc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x207edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x207ee0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x207ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x207ee4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x207ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x207ee8: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x207ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x207eec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x207eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x207ef0: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x207ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x207ef4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x207ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ef8: 0xae25003c  sw          $a1, 0x3C($s1)
    ctx->pc = 0x207ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 5));
    // 0x207efc: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x207efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x207f00: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x207f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x207f04: 0xae250048  sw          $a1, 0x48($s1)
    ctx->pc = 0x207f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 5));
    // 0x207f08: 0xae240020  sw          $a0, 0x20($s1)
    ctx->pc = 0x207f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
    // 0x207f0c: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x207f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
    // 0x207f10: 0xae240028  sw          $a0, 0x28($s1)
    ctx->pc = 0x207f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
    // 0x207f14: 0xae24002c  sw          $a0, 0x2C($s1)
    ctx->pc = 0x207f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 4));
    // 0x207f18: 0xe6340050  swc1        $f20, 0x50($s1)
    ctx->pc = 0x207f18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x207f1c: 0xa223004c  sb          $v1, 0x4C($s1)
    ctx->pc = 0x207f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 3));
    // 0x207f20: 0xae300030  sw          $s0, 0x30($s1)
    ctx->pc = 0x207f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
    // 0x207f24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x207f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x207f28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x207f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x207f2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x207f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207f30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x207f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207f34: 0x3e00008  jr          $ra
    ctx->pc = 0x207F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207F34u;
            // 0x207f38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207F3Cu;
    // 0x207f3c: 0x0  nop
    ctx->pc = 0x207f3cu;
    // NOP
}
