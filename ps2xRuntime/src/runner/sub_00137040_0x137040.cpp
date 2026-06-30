#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137040
// Address: 0x137040 - 0x137150
void sub_00137040_0x137040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137040_0x137040");
#endif

    switch (ctx->pc) {
        case 0x13705cu: goto label_13705c;
        case 0x137144u: goto label_137144;
        default: break;
    }

    ctx->pc = 0x137040u;

    // 0x137040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137044: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x137044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137048: 0x2d010002  sltiu       $at, $t0, 0x2
    ctx->pc = 0x137048u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13704c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13704cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137050: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x137050u;
    {
        const bool branch_taken_0x137050 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x137054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137050u;
            // 0x137054: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137050) {
            ctx->pc = 0x1370A0u;
            goto label_1370a0;
        }
    }
    ctx->pc = 0x137058u;
    // 0x137058: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x137058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_13705c:
    // 0x13705c: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x13705cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x137060: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x137060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x137064: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x137064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x137068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x137068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13706c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x137070: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x137070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137074: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x137074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137078: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x137078u;
    {
        const bool branch_taken_0x137078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137078) {
            ctx->pc = 0x137088u;
            goto label_137088;
        }
    }
    ctx->pc = 0x137080u;
    // 0x137080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137080u;
    {
        const bool branch_taken_0x137080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137080u;
            // 0x137084: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137080) {
            ctx->pc = 0x137090u;
            goto label_137090;
        }
    }
    ctx->pc = 0x137088u;
label_137088:
    // 0x137088: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x137088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13708c: 0x0  nop
    ctx->pc = 0x13708cu;
    // NOP
label_137090:
    // 0x137090: 0x1091823  subu        $v1, $t0, $t1
    ctx->pc = 0x137090u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x137094: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x137094u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137098: 0x5020fff0  beql        $at, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x137098u;
    {
        const bool branch_taken_0x137098 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137098) {
            ctx->pc = 0x13709Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137098u;
            // 0x13709c: 0x1281821  addu        $v1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13705Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13705c;
        }
    }
    ctx->pc = 0x1370A0u;
label_1370a0:
    // 0x1370a0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1370a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1370a4: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x1370a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1370a8: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x1370a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1370ac: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1370acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1370b0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1370b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1370b4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1370B4u;
    {
        const bool branch_taken_0x1370b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1370B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1370B4u;
            // 0x1370b8: 0x853821  addu        $a3, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370b4) {
            ctx->pc = 0x1370E0u;
            goto label_1370e0;
        }
    }
    ctx->pc = 0x1370BCu;
    // 0x1370bc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1370bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1370c0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1370c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1370c4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1370c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1370c8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1370c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1370cc: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x1370ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1370d0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1370d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1370d4: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x1370d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1370d8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1370D8u;
    {
        const bool branch_taken_0x1370d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1370D8u;
            // 0x1370dc: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370d8) {
            ctx->pc = 0x137144u;
            goto label_137144;
        }
    }
    ctx->pc = 0x1370E0u;
label_1370e0:
    // 0x1370e0: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x1370e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1370e4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1370e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370e8: 0xc4e10014  lwc1        $f1, 0x14($a3)
    ctx->pc = 0x1370e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1370ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1370ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1370f0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1370f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1370f4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1370f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1370f8: 0x46036081  sub.s       $f2, $f12, $f3
    ctx->pc = 0x1370f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x1370fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1370fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x137100: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x137100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x137104: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x137104u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[12] = ctx->f[2] / ctx->f[0];
    // 0x137108: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x137108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13710c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x13710cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x137110: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x137110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137114: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x137114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x137118: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x137118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13711c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13711cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x137120: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x137120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137124: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x137124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x137128: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x137128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13712c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x13712cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x137130: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x137130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137134: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x137134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x137138: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x137138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13713c: 0xc04c8b4  jal         func_1322D0
    ctx->pc = 0x13713Cu;
    SET_GPR_U32(ctx, 31, 0x137144u);
    ctx->pc = 0x137140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13713Cu;
            // 0x137140: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1322D0u;
    if (runtime->hasFunction(0x1322D0u)) {
        auto targetFn = runtime->lookupFunction(0x1322D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137144u; }
        if (ctx->pc != 0x137144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001322D0_0x1322d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137144u; }
        if (ctx->pc != 0x137144u) { return; }
    }
    ctx->pc = 0x137144u;
label_137144:
    // 0x137144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137148: 0x3e00008  jr          $ra
    ctx->pc = 0x137148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13714Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137148u;
            // 0x13714c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137150u;
}
