#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00137530
// Address: 0x137530 - 0x137640
void sub_00137530_0x137530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137530_0x137530");
#endif

    switch (ctx->pc) {
        case 0x13754cu: goto label_13754c;
        case 0x137634u: goto label_137634;
        default: break;
    }

    ctx->pc = 0x137530u;

    // 0x137530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137534: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x137534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137538: 0x2d010002  sltiu       $at, $t0, 0x2
    ctx->pc = 0x137538u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13753c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13753cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137540: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x137540u;
    {
        const bool branch_taken_0x137540 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x137544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137540u;
            // 0x137544: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137540) {
            ctx->pc = 0x137590u;
            goto label_137590;
        }
    }
    ctx->pc = 0x137548u;
    // 0x137548: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x137548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_13754c:
    // 0x13754c: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x13754cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x137550: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x137550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x137554: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x137554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x137558: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x137558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13755c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13755cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x137560: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x137560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137564: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x137564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137568: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x137568u;
    {
        const bool branch_taken_0x137568 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137568) {
            ctx->pc = 0x137578u;
            goto label_137578;
        }
    }
    ctx->pc = 0x137570u;
    // 0x137570: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137570u;
    {
        const bool branch_taken_0x137570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137570u;
            // 0x137574: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137570) {
            ctx->pc = 0x137580u;
            goto label_137580;
        }
    }
    ctx->pc = 0x137578u;
label_137578:
    // 0x137578: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x137578u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13757c: 0x0  nop
    ctx->pc = 0x13757cu;
    // NOP
label_137580:
    // 0x137580: 0x1091823  subu        $v1, $t0, $t1
    ctx->pc = 0x137580u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x137584: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x137584u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x137588: 0x5020fff0  beql        $at, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x137588u;
    {
        const bool branch_taken_0x137588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x137588) {
            ctx->pc = 0x13758Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137588u;
            // 0x13758c: 0x1281821  addu        $v1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13754Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13754c;
        }
    }
    ctx->pc = 0x137590u;
label_137590:
    // 0x137590: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x137590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x137594: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x137594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x137598: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x137598u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13759c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x13759cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1375a0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1375a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1375a4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1375A4u;
    {
        const bool branch_taken_0x1375a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1375A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1375A4u;
            // 0x1375a8: 0x853821  addu        $a3, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375a4) {
            ctx->pc = 0x1375D0u;
            goto label_1375d0;
        }
    }
    ctx->pc = 0x1375ACu;
    // 0x1375ac: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1375acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1375b0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1375b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1375b4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1375b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1375b8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1375b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1375bc: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x1375bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1375c0: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1375c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1375c4: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x1375c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1375c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1375C8u;
    {
        const bool branch_taken_0x1375c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1375C8u;
            // 0x1375cc: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375c8) {
            ctx->pc = 0x137634u;
            goto label_137634;
        }
    }
    ctx->pc = 0x1375D0u;
label_1375d0:
    // 0x1375d0: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x1375d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1375d4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1375d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375d8: 0xc4e10014  lwc1        $f1, 0x14($a3)
    ctx->pc = 0x1375d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1375dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1375dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1375e0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1375e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1375e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1375e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1375e8: 0x46036081  sub.s       $f2, $f12, $f3
    ctx->pc = 0x1375e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x1375ec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1375ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1375f0: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x1375f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1375f4: 0x46001303  div.s       $f12, $f2, $f0
    ctx->pc = 0x1375f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[12] = ctx->f[2] / ctx->f[0];
    // 0x1375f8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1375f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1375fc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1375fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x137600: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x137600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137604: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x137604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x137608: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x137608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13760c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13760cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x137610: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x137610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137614: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x137614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x137618: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x137618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13761c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x13761cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x137620: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x137620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137624: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x137624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x137628: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x137628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13762c: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x13762Cu;
    SET_GPR_U32(ctx, 31, 0x137634u);
    ctx->pc = 0x137630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13762Cu;
            // 0x137630: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (runtime->hasFunction(0x1323C0u)) {
        auto targetFn = runtime->lookupFunction(0x1323C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137634u; }
        if (ctx->pc != 0x137634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001323C0_0x1323c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137634u; }
        if (ctx->pc != 0x137634u) { return; }
    }
    ctx->pc = 0x137634u;
label_137634:
    // 0x137634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137638: 0x3e00008  jr          $ra
    ctx->pc = 0x137638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137638u;
            // 0x13763c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137640u;
}
