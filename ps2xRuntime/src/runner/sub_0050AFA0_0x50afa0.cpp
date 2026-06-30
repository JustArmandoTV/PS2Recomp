#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050AFA0
// Address: 0x50afa0 - 0x50b070
void sub_0050AFA0_0x50afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AFA0_0x50afa0");
#endif

    switch (ctx->pc) {
        case 0x50afd8u: goto label_50afd8;
        case 0x50b04cu: goto label_50b04c;
        default: break;
    }

    ctx->pc = 0x50afa0u;

    // 0x50afa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x50afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x50afa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x50afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x50afa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50afa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x50afac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x50afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x50afb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x50afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x50afb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x50afb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x50afb8: 0xc49400ac  lwc1        $f20, 0xAC($a0)
    ctx->pc = 0x50afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x50afbc: 0x8c900054  lw          $s0, 0x54($a0)
    ctx->pc = 0x50afbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x50afc0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x50afc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50afc4: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x50AFC4u;
    {
        const bool branch_taken_0x50afc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x50AFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50AFC4u;
            // 0x50afc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50afc4) {
            ctx->pc = 0x50B04Cu;
            goto label_50b04c;
        }
    }
    ctx->pc = 0x50AFCCu;
    // 0x50afcc: 0x260403d0  addiu       $a0, $s0, 0x3D0
    ctx->pc = 0x50afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
    // 0x50afd0: 0xc04cc08  jal         func_133020
    ctx->pc = 0x50AFD0u;
    SET_GPR_U32(ctx, 31, 0x50AFD8u);
    ctx->pc = 0x50AFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50AFD0u;
            // 0x50afd4: 0x26050820  addiu       $a1, $s0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AFD8u; }
        if (ctx->pc != 0x50AFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50AFD8u; }
        if (ctx->pc != 0x50AFD8u) { return; }
    }
    ctx->pc = 0x50AFD8u;
label_50afd8:
    // 0x50afd8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x50afd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x50afdc: 0x0  nop
    ctx->pc = 0x50afdcu;
    // NOP
    // 0x50afe0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x50afe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50afe4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x50AFE4u;
    {
        const bool branch_taken_0x50afe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50afe4) {
            ctx->pc = 0x50AFE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50AFE4u;
            // 0x50afe8: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B000u;
            goto label_50b000;
        }
    }
    ctx->pc = 0x50AFECu;
    // 0x50afec: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x50afecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x50aff0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50aff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x50aff4: 0x0  nop
    ctx->pc = 0x50aff4u;
    // NOP
    // 0x50aff8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x50aff8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x50affc: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x50affcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_50b000:
    // 0x50b000: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x50b000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x50b004: 0xe6140de4  swc1        $f20, 0xDE4($s0)
    ctx->pc = 0x50b004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
    // 0x50b008: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x50b008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x50b00c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x50b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x50b010: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x50b010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x50b014: 0x5064000e  beql        $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x50B014u;
    {
        const bool branch_taken_0x50b014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x50b014) {
            ctx->pc = 0x50B018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B014u;
            // 0x50b018: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B050u;
            goto label_50b050;
        }
    }
    ctx->pc = 0x50B01Cu;
    // 0x50b01c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x50b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x50b020: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x50B020u;
    {
        const bool branch_taken_0x50b020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x50b020) {
            ctx->pc = 0x50B04Cu;
            goto label_50b04c;
        }
    }
    ctx->pc = 0x50B028u;
    // 0x50b028: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50b028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x50b02c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x50b02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x50b030: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x50b030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x50b034: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x50b034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x50b038: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x50b038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x50b03c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x50b03cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b040: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x50b040u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50b044: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x50B044u;
    SET_GPR_U32(ctx, 31, 0x50B04Cu);
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B04Cu; }
        if (ctx->pc != 0x50B04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B04Cu; }
        if (ctx->pc != 0x50B04Cu) { return; }
    }
    ctx->pc = 0x50B04Cu;
label_50b04c:
    // 0x50b04c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x50b04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_50b050:
    // 0x50b050: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x50b050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x50b054: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x50b054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50b058: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x50b058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b05c: 0x3e00008  jr          $ra
    ctx->pc = 0x50B05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B05Cu;
            // 0x50b060: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B064u;
    // 0x50b064: 0x0  nop
    ctx->pc = 0x50b064u;
    // NOP
    // 0x50b068: 0x0  nop
    ctx->pc = 0x50b068u;
    // NOP
    // 0x50b06c: 0x0  nop
    ctx->pc = 0x50b06cu;
    // NOP
}
