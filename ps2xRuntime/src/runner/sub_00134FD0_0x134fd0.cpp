#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00134FD0
// Address: 0x134fd0 - 0x135190
void sub_00134FD0_0x134fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134FD0_0x134fd0");
#endif

    switch (ctx->pc) {
        case 0x135004u: goto label_135004;
        case 0x135088u: goto label_135088;
        case 0x13510cu: goto label_13510c;
        default: break;
    }

    ctx->pc = 0x134fd0u;

    // 0x134fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x134fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x134fd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x134fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x134fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x134fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x134fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x134fe0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x134fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134fe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134fe8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x134fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134fec: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x134FECu;
    {
        const bool branch_taken_0x134fec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x134FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134FECu;
            // 0x134ff0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134fec) {
            ctx->pc = 0x135070u;
            goto label_135070;
        }
    }
    ctx->pc = 0x134FF4u;
    // 0x134ff4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x134ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ff8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x134ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x134ffc: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x134FFCu;
    SET_GPR_U32(ctx, 31, 0x135004u);
    ctx->pc = 0x135000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134FFCu;
            // 0x135000: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135004u; }
        if (ctx->pc != 0x135004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135004u; }
        if (ctx->pc != 0x135004u) { return; }
    }
    ctx->pc = 0x135004u;
label_135004:
    // 0x135004: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x135004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x135008: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x135008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13500c: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x13500cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135010: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x135010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135014: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x135014u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x135018: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x135018u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x13501c: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x13501cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x135020: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x135020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x135024: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x135024u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x135028: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x135028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x13502c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x13502cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x135030: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x135030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135034: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x135034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135038: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x135038u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x13503c: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x13503cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x135040: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x135040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x135044: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x135044u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x135048: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x135048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x13504c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x13504cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x135050: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x135050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135054: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x135054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135058: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x135058u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x13505c: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x13505cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x135060: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x135060u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x135064: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x135064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x135068: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x135068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x13506c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x13506cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_135070:
    // 0x135070: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x135070u;
    {
        const bool branch_taken_0x135070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x135070) {
            ctx->pc = 0x1350F4u;
            goto label_1350f4;
        }
    }
    ctx->pc = 0x135078u;
    // 0x135078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13507c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x13507cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x135080: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x135080u;
    SET_GPR_U32(ctx, 31, 0x135088u);
    ctx->pc = 0x135084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135080u;
            // 0x135084: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135088u; }
        if (ctx->pc != 0x135088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135088u; }
        if (ctx->pc != 0x135088u) { return; }
    }
    ctx->pc = 0x135088u;
label_135088:
    // 0x135088: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x135088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13508c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x13508cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135090: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x135090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135094: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x135094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135098: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x135098u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x13509c: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x13509cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x1350a0: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x1350a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x1350a4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1350a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1350a8: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1350a8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1350ac: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1350acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1350b0: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1350b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1350b4: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1350b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1350b8: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1350b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1350bc: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x1350bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1350c0: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x1350c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x1350c4: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1350c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1350c8: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1350c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1350cc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1350ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1350d0: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1350d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1350d4: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1350d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1350d8: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1350d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1350dc: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x1350dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1350e0: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x1350e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x1350e4: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x1350e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1350e8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1350e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1350ec: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1350ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1350f0: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x1350f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_1350f4:
    // 0x1350f4: 0x52200021  beql        $s1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1350F4u;
    {
        const bool branch_taken_0x1350f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1350f4) {
            ctx->pc = 0x1350F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1350F4u;
            // 0x1350f8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13517Cu;
            goto label_13517c;
        }
    }
    ctx->pc = 0x1350FCu;
    // 0x1350fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1350fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135100: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x135100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x135104: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x135104u;
    SET_GPR_U32(ctx, 31, 0x13510Cu);
    ctx->pc = 0x135108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135104u;
            // 0x135108: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13510Cu; }
        if (ctx->pc != 0x13510Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13510Cu; }
        if (ctx->pc != 0x13510Cu) { return; }
    }
    ctx->pc = 0x13510Cu;
label_13510c:
    // 0x13510c: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x13510cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x135110: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x135110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135114: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x135114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135118: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x135118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13511c: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x13511cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x135120: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x135120u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x135124: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x135124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x135128: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x135128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x13512c: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x13512cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x135130: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x135130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x135134: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x135134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x135138: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x135138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13513c: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x13513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135140: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x135140u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x135144: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x135144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x135148: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x135148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x13514c: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x13514cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x135150: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x135150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x135154: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x135154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x135158: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x135158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13515c: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x13515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135160: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x135160u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x135164: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x135164u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x135168: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x135168u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x13516c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x13516cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x135170: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x135170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x135174: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x135174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x135178: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13517c:
    // 0x13517c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13517cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135188: 0x3e00008  jr          $ra
    ctx->pc = 0x135188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13518Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135188u;
            // 0x13518c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135190u;
}
