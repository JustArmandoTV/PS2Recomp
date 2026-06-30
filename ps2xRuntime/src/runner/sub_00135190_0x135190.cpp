#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135190
// Address: 0x135190 - 0x135350
void sub_00135190_0x135190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135190_0x135190");
#endif

    switch (ctx->pc) {
        case 0x1351c4u: goto label_1351c4;
        case 0x135248u: goto label_135248;
        case 0x1352ccu: goto label_1352cc;
        default: break;
    }

    ctx->pc = 0x135190u;

    // 0x135190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x135190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x135194: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x135194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x135198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x135198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13519c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1351a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1351a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1351a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1351a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1351a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1351a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1351ac: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x1351ACu;
    {
        const bool branch_taken_0x1351ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1351B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1351ACu;
            // 0x1351b0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351ac) {
            ctx->pc = 0x135230u;
            goto label_135230;
        }
    }
    ctx->pc = 0x1351B4u;
    // 0x1351b4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1351b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1351b8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1351b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1351bc: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x1351BCu;
    SET_GPR_U32(ctx, 31, 0x1351C4u);
    ctx->pc = 0x1351C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1351BCu;
            // 0x1351c0: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1351C4u; }
        if (ctx->pc != 0x1351C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1351C4u; }
        if (ctx->pc != 0x1351C4u) { return; }
    }
    ctx->pc = 0x1351C4u;
label_1351c4:
    // 0x1351c4: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x1351c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1351c8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1351c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1351cc: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x1351ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1351d0: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x1351d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1351d4: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x1351d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1351d8: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x1351d8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x1351dc: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x1351dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x1351e0: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1351e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1351e4: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1351e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1351e8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1351e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1351ec: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1351ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1351f0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1351f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1351f4: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x1351f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1351f8: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x1351f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1351fc: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x1351fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x135200: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x135200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x135204: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x135204u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x135208: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x135208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x13520c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x13520cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x135210: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x135210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135214: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x135214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135218: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x135218u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x13521c: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x13521cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x135220: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x135220u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x135224: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x135224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x135228: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x135228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x13522c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x13522cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_135230:
    // 0x135230: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x135230u;
    {
        const bool branch_taken_0x135230 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x135230) {
            ctx->pc = 0x1352B4u;
            goto label_1352b4;
        }
    }
    ctx->pc = 0x135238u;
    // 0x135238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13523c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x13523cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x135240: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x135240u;
    SET_GPR_U32(ctx, 31, 0x135248u);
    ctx->pc = 0x135244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135240u;
            // 0x135244: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135248u; }
        if (ctx->pc != 0x135248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135248u; }
        if (ctx->pc != 0x135248u) { return; }
    }
    ctx->pc = 0x135248u;
label_135248:
    // 0x135248: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x135248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13524c: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x13524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135250: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x135250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135254: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x135254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135258: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x135258u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x13525c: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x13525cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x135260: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x135260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x135264: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x135264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x135268: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x135268u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x13526c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x13526cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x135270: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x135270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x135274: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x135274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135278: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x135278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13527c: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x13527cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x135280: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x135280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x135284: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x135284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x135288: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x135288u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x13528c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x13528cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x135290: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x135290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x135294: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x135294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135298: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x135298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13529c: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x13529cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1352a0: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x1352a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x1352a4: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x1352a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1352a8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1352a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1352ac: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x1352acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1352b0: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x1352b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_1352b4:
    // 0x1352b4: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1352B4u;
    {
        const bool branch_taken_0x1352b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1352b4) {
            ctx->pc = 0x1352B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1352B4u;
            // 0x1352b8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13533Cu;
            goto label_13533c;
        }
    }
    ctx->pc = 0x1352BCu;
    // 0x1352bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1352bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352c0: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1352c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1352c4: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x1352C4u;
    SET_GPR_U32(ctx, 31, 0x1352CCu);
    ctx->pc = 0x1352C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1352C4u;
            // 0x1352c8: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1352CCu; }
        if (ctx->pc != 0x1352CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1352CCu; }
        if (ctx->pc != 0x1352CCu) { return; }
    }
    ctx->pc = 0x1352CCu;
label_1352cc:
    // 0x1352cc: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x1352ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1352d0: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1352d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1352d4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1352d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1352d8: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x1352d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1352dc: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x1352dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1352e0: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x1352e0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x1352e4: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x1352e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x1352e8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1352e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1352ec: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x1352ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1352f0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1352f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1352f4: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1352f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x1352f8: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1352f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1352fc: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1352fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135300: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x135300u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x135304: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x135304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x135308: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x135308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x13530c: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x13530cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x135310: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x135310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x135314: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x135314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x135318: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x135318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13531c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x13531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135320: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x135320u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x135324: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x135324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x135328: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x135328u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x13532c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x13532cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x135330: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x135330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x135334: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x135334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x135338: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13533c:
    // 0x13533c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13533cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135348: 0x3e00008  jr          $ra
    ctx->pc = 0x135348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13534Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135348u;
            // 0x13534c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135350u;
}
