#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004795B0
// Address: 0x4795b0 - 0x479680
void sub_004795B0_0x4795b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004795B0_0x4795b0");
#endif

    switch (ctx->pc) {
        case 0x47965cu: goto label_47965c;
        case 0x479670u: goto label_479670;
        default: break;
    }

    ctx->pc = 0x4795b0u;

    // 0x4795b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4795b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4795b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4795b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4795b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4795b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4795bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4795bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4795c0: 0xc4a20030  lwc1        $f2, 0x30($a1)
    ctx->pc = 0x4795c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4795c4: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x4795c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x4795c8: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x4795c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4795cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4795ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4795d0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4795d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4795d4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x4795d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4795d8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x4795D8u;
    {
        const bool branch_taken_0x4795d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4795DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4795D8u;
            // 0x4795dc: 0x2442f300  addiu       $v0, $v0, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4795d8) {
            ctx->pc = 0x479608u;
            goto label_479608;
        }
    }
    ctx->pc = 0x4795E0u;
    // 0x4795e0: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x4795e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4795e4: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x4795e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4795e8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x4795e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x4795ec: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x4795ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x4795f0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x4795f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x4795f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4795f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4795f8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4795f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4795fc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x4795fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x479600: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x479600u;
    {
        const bool branch_taken_0x479600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479600u;
            // 0x479604: 0xe4600014  swc1        $f0, 0x14($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x479600) {
            ctx->pc = 0x47962Cu;
            goto label_47962c;
        }
    }
    ctx->pc = 0x479608u;
label_479608:
    // 0x479608: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x479608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x47960c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x47960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x479610: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x479610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x479614: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x479614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x479618: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x479618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x47961c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x47961cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x479620: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x479620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x479624: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x479624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x479628: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x479628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_47962c:
    // 0x47962c: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x47962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x479630: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x479630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x479634: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x479634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x479638: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x479638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x47963c: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x47963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x479640: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x479640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x479644: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x479644u;
    {
        const bool branch_taken_0x479644 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x479644) {
            ctx->pc = 0x479648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x479644u;
            // 0x479648: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x479654u;
            goto label_479654;
        }
    }
    ctx->pc = 0x47964Cu;
    // 0x47964c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x47964cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x479650: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x479650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_479654:
    // 0x479654: 0xc11088c  jal         func_442230
    ctx->pc = 0x479654u;
    SET_GPR_U32(ctx, 31, 0x47965Cu);
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47965Cu; }
        if (ctx->pc != 0x47965Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47965Cu; }
        if (ctx->pc != 0x47965Cu) { return; }
    }
    ctx->pc = 0x47965Cu;
label_47965c:
    // 0x47965c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x47965cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x479660: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x479660u;
    {
        const bool branch_taken_0x479660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x479660) {
            ctx->pc = 0x479664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x479660u;
            // 0x479664: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x479674u;
            goto label_479674;
        }
    }
    ctx->pc = 0x479668u;
    // 0x479668: 0xc11088c  jal         func_442230
    ctx->pc = 0x479668u;
    SET_GPR_U32(ctx, 31, 0x479670u);
    ctx->pc = 0x442230u;
    if (runtime->hasFunction(0x442230u)) {
        auto targetFn = runtime->lookupFunction(0x442230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479670u; }
        if (ctx->pc != 0x479670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442230_0x442230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x479670u; }
        if (ctx->pc != 0x479670u) { return; }
    }
    ctx->pc = 0x479670u;
label_479670:
    // 0x479670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x479670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_479674:
    // 0x479674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x479674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479678: 0x3e00008  jr          $ra
    ctx->pc = 0x479678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47967Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x479678u;
            // 0x47967c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x479680u;
}
