#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FAEA0
// Address: 0x3faea0 - 0x3faf60
void sub_003FAEA0_0x3faea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FAEA0_0x3faea0");
#endif

    switch (ctx->pc) {
        case 0x3faeecu: goto label_3faeec;
        case 0x3faf24u: goto label_3faf24;
        default: break;
    }

    ctx->pc = 0x3faea0u;

    // 0x3faea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3faea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3faea4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3faea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3faea8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3faea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3faeac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3faeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3faeb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3faeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3faeb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3faeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3faeb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3faeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3faebc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3faebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faec0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3faec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3faec4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3faec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faec8: 0x242a021  addu        $s4, $s2, $v0
    ctx->pc = 0x3faec8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3faecc: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x3faeccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3faed0: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x3faed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x3faed4: 0x26840060  addiu       $a0, $s4, 0x60
    ctx->pc = 0x3faed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x3faed8: 0x245300b0  addiu       $s3, $v0, 0xB0
    ctx->pc = 0x3faed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x3faedc: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x3faedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3faee0: 0x26460050  addiu       $a2, $s2, 0x50
    ctx->pc = 0x3faee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x3faee4: 0xc0bc5e8  jal         func_2F17A0
    ctx->pc = 0x3FAEE4u;
    SET_GPR_U32(ctx, 31, 0x3FAEECu);
    ctx->pc = 0x3FAEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAEE4u;
            // 0x3faee8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F17A0u;
    if (runtime->hasFunction(0x2F17A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F17A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAEECu; }
        if (ctx->pc != 0x3FAEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F17A0_0x2f17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAEECu; }
        if (ctx->pc != 0x3FAEECu) { return; }
    }
    ctx->pc = 0x3FAEECu;
label_3faeec:
    // 0x3faeec: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x3faeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x3faef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3faef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faef4: 0xc64300a0  lwc1        $f3, 0xA0($s2)
    ctx->pc = 0x3faef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3faef8: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x3faef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x3faefc: 0xc64200a4  lwc1        $f2, 0xA4($s2)
    ctx->pc = 0x3faefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3faf00: 0x26840060  addiu       $a0, $s4, 0x60
    ctx->pc = 0x3faf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x3faf04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3faf04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3faf08: 0x245100a8  addiu       $s1, $v0, 0xA8
    ctx->pc = 0x3faf08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x3faf0c: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x3faf0cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3faf10: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x3faf10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x3faf14: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x3faf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3faf18: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x3faf18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x3faf1c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x3FAF1Cu;
    SET_GPR_U32(ctx, 31, 0x3FAF24u);
    ctx->pc = 0x3FAF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAF1Cu;
            // 0x3faf20: 0xe44000a8  swc1        $f0, 0xA8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAF24u; }
        if (ctx->pc != 0x3FAF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FAF24u; }
        if (ctx->pc != 0x3FAF24u) { return; }
    }
    ctx->pc = 0x3FAF24u;
label_3faf24:
    // 0x3faf24: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3faf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3faf28: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x3faf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x3faf2c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3faf2cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x3faf30: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x3faf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x3faf34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3faf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3faf38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3faf38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3faf3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3faf3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3faf40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3faf40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3faf44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3faf44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3faf48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3faf48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3faf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FAF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FAF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FAF4Cu;
            // 0x3faf50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FAF54u;
    // 0x3faf54: 0x0  nop
    ctx->pc = 0x3faf54u;
    // NOP
    // 0x3faf58: 0x0  nop
    ctx->pc = 0x3faf58u;
    // NOP
    // 0x3faf5c: 0x0  nop
    ctx->pc = 0x3faf5cu;
    // NOP
}
