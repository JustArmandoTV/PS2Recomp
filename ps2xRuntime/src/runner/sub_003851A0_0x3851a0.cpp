#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003851A0
// Address: 0x3851a0 - 0x3853d0
void sub_003851A0_0x3851a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003851A0_0x3851a0");
#endif

    switch (ctx->pc) {
        case 0x3851d4u: goto label_3851d4;
        case 0x3851e0u: goto label_3851e0;
        case 0x3851e8u: goto label_3851e8;
        case 0x385248u: goto label_385248;
        case 0x385250u: goto label_385250;
        case 0x385258u: goto label_385258;
        case 0x385274u: goto label_385274;
        case 0x385280u: goto label_385280;
        case 0x38528cu: goto label_38528c;
        case 0x385294u: goto label_385294;
        case 0x3852a4u: goto label_3852a4;
        case 0x3852b0u: goto label_3852b0;
        case 0x3852c4u: goto label_3852c4;
        case 0x3852d0u: goto label_3852d0;
        case 0x3852e8u: goto label_3852e8;
        case 0x3852fcu: goto label_3852fc;
        case 0x385304u: goto label_385304;
        case 0x38532cu: goto label_38532c;
        case 0x385354u: goto label_385354;
        case 0x38536cu: goto label_38536c;
        case 0x385380u: goto label_385380;
        case 0x38538cu: goto label_38538c;
        case 0x385394u: goto label_385394;
        case 0x3853a0u: goto label_3853a0;
        case 0x3853b0u: goto label_3853b0;
        default: break;
    }

    ctx->pc = 0x3851a0u;

    // 0x3851a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3851a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x3851a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3851a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3851a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3851a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3851ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3851acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3851b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3851b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3851b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3851b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3851b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3851b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3851bc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3851bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3851c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3851c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3851c4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x3851c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x3851c8: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x3851c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x3851cc: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3851CCu;
    SET_GPR_U32(ctx, 31, 0x3851D4u);
    ctx->pc = 0x3851D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3851CCu;
            // 0x3851d0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3851D4u; }
        if (ctx->pc != 0x3851D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3851D4u; }
        if (ctx->pc != 0x3851D4u) { return; }
    }
    ctx->pc = 0x3851D4u;
label_3851d4:
    // 0x3851d4: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x3851d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x3851d8: 0xc04c720  jal         func_131C80
    ctx->pc = 0x3851D8u;
    SET_GPR_U32(ctx, 31, 0x3851E0u);
    ctx->pc = 0x3851DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3851D8u;
            // 0x3851dc: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3851E0u; }
        if (ctx->pc != 0x3851E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3851E0u; }
        if (ctx->pc != 0x3851E0u) { return; }
    }
    ctx->pc = 0x3851E0u;
label_3851e0:
    // 0x3851e0: 0xc040180  jal         func_100600
    ctx->pc = 0x3851E0u;
    SET_GPR_U32(ctx, 31, 0x3851E8u);
    ctx->pc = 0x3851E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3851E0u;
            // 0x3851e4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3851E8u; }
        if (ctx->pc != 0x3851E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3851E8u; }
        if (ctx->pc != 0x3851E8u) { return; }
    }
    ctx->pc = 0x3851E8u;
label_3851e8:
    // 0x3851e8: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x3851E8u;
    {
        const bool branch_taken_0x3851e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3851ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3851E8u;
            // 0x3851ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3851e8) {
            ctx->pc = 0x3853B0u;
            goto label_3853b0;
        }
    }
    ctx->pc = 0x3851F0u;
    // 0x3851f0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3851f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3851f4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3851f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3851f8: 0xc4625d60  lwc1        $f2, 0x5D60($v1)
    ctx->pc = 0x3851f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 23904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3851fc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3851fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x385200: 0xc4415d64  lwc1        $f1, 0x5D64($v0)
    ctx->pc = 0x385200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x385204: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x385204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x385208: 0xc4605d68  lwc1        $f0, 0x5D68($v1)
    ctx->pc = 0x385208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 23912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38520c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x38520cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x385210: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x385210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x385214: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x385214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x385218: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x385218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x38521c: 0xc4405d6c  lwc1        $f0, 0x5D6C($v0)
    ctx->pc = 0x38521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385220: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x385220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x385224: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x385224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x385228: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x385228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38522c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x38522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x385230: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x385230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x385234: 0xe6030010  swc1        $f3, 0x10($s0)
    ctx->pc = 0x385234u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x385238: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x385238u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x38523c: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x38523cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x385240: 0xc0e15b0  jal         func_3856C0
    ctx->pc = 0x385240u;
    SET_GPR_U32(ctx, 31, 0x385248u);
    ctx->pc = 0x385244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385240u;
            // 0x385244: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3856C0u;
    if (runtime->hasFunction(0x3856C0u)) {
        auto targetFn = runtime->lookupFunction(0x3856C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385248u; }
        if (ctx->pc != 0x385248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003856C0_0x3856c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385248u; }
        if (ctx->pc != 0x385248u) { return; }
    }
    ctx->pc = 0x385248u;
label_385248:
    // 0x385248: 0xc0e15a8  jal         func_3856A0
    ctx->pc = 0x385248u;
    SET_GPR_U32(ctx, 31, 0x385250u);
    ctx->pc = 0x38524Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385248u;
            // 0x38524c: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3856A0u;
    if (runtime->hasFunction(0x3856A0u)) {
        auto targetFn = runtime->lookupFunction(0x3856A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385250u; }
        if (ctx->pc != 0x385250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003856A0_0x3856a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385250u; }
        if (ctx->pc != 0x385250u) { return; }
    }
    ctx->pc = 0x385250u;
label_385250:
    // 0x385250: 0xc0e15a0  jal         func_385680
    ctx->pc = 0x385250u;
    SET_GPR_U32(ctx, 31, 0x385258u);
    ctx->pc = 0x385254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385250u;
            // 0x385254: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385680u;
    if (runtime->hasFunction(0x385680u)) {
        auto targetFn = runtime->lookupFunction(0x385680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385258u; }
        if (ctx->pc != 0x385258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385680_0x385680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385258u; }
        if (ctx->pc != 0x385258u) { return; }
    }
    ctx->pc = 0x385258u;
label_385258:
    // 0x385258: 0xa211004c  sb          $s1, 0x4C($s0)
    ctx->pc = 0x385258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 17));
    // 0x38525c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x38525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x385260: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x385260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x385264: 0xa211004d  sb          $s1, 0x4D($s0)
    ctx->pc = 0x385264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 17));
    // 0x385268: 0x9205004d  lbu         $a1, 0x4D($s0)
    ctx->pc = 0x385268u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x38526c: 0xc0e158c  jal         func_385630
    ctx->pc = 0x38526Cu;
    SET_GPR_U32(ctx, 31, 0x385274u);
    ctx->pc = 0x385270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38526Cu;
            // 0x385270: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385630u;
    if (runtime->hasFunction(0x385630u)) {
        auto targetFn = runtime->lookupFunction(0x385630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385274u; }
        if (ctx->pc != 0x385274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385630_0x385630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385274u; }
        if (ctx->pc != 0x385274u) { return; }
    }
    ctx->pc = 0x385274u;
label_385274:
    // 0x385274: 0x9205004d  lbu         $a1, 0x4D($s0)
    ctx->pc = 0x385274u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x385278: 0xc0e1578  jal         func_3855E0
    ctx->pc = 0x385278u;
    SET_GPR_U32(ctx, 31, 0x385280u);
    ctx->pc = 0x38527Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385278u;
            // 0x38527c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3855E0u;
    if (runtime->hasFunction(0x3855E0u)) {
        auto targetFn = runtime->lookupFunction(0x3855E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385280u; }
        if (ctx->pc != 0x385280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003855E0_0x3855e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385280u; }
        if (ctx->pc != 0x385280u) { return; }
    }
    ctx->pc = 0x385280u;
label_385280:
    // 0x385280: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x385280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385284: 0xc0e1564  jal         func_385590
    ctx->pc = 0x385284u;
    SET_GPR_U32(ctx, 31, 0x38528Cu);
    ctx->pc = 0x385288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385284u;
            // 0x385288: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385590u;
    if (runtime->hasFunction(0x385590u)) {
        auto targetFn = runtime->lookupFunction(0x385590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38528Cu; }
        if (ctx->pc != 0x38528Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385590_0x385590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38528Cu; }
        if (ctx->pc != 0x38528Cu) { return; }
    }
    ctx->pc = 0x38528Cu;
label_38528c:
    // 0x38528c: 0xc0e1554  jal         func_385550
    ctx->pc = 0x38528Cu;
    SET_GPR_U32(ctx, 31, 0x385294u);
    ctx->pc = 0x385290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38528Cu;
            // 0x385290: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385550u;
    if (runtime->hasFunction(0x385550u)) {
        auto targetFn = runtime->lookupFunction(0x385550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385294u; }
        if (ctx->pc != 0x385294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385550_0x385550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385294u; }
        if (ctx->pc != 0x385294u) { return; }
    }
    ctx->pc = 0x385294u;
label_385294:
    // 0x385294: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x385294u;
    {
        const bool branch_taken_0x385294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x385294) {
            ctx->pc = 0x385298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x385294u;
            // 0x385298: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3852A8u;
            goto label_3852a8;
        }
    }
    ctx->pc = 0x38529Cu;
    // 0x38529c: 0xc0874ec  jal         func_21D3B0
    ctx->pc = 0x38529Cu;
    SET_GPR_U32(ctx, 31, 0x3852A4u);
    ctx->pc = 0x3852A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38529Cu;
            // 0x3852a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3B0u;
    if (runtime->hasFunction(0x21D3B0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3852A4u; }
        if (ctx->pc != 0x3852A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D3B0_0x21d3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3852A4u; }
        if (ctx->pc != 0x3852A4u) { return; }
    }
    ctx->pc = 0x3852A4u;
label_3852a4:
    // 0x3852a4: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x3852a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_3852a8:
    // 0x3852a8: 0xc0e1544  jal         func_385510
    ctx->pc = 0x3852A8u;
    SET_GPR_U32(ctx, 31, 0x3852B0u);
    ctx->pc = 0x3852ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3852A8u;
            // 0x3852ac: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385510u;
    if (runtime->hasFunction(0x385510u)) {
        auto targetFn = runtime->lookupFunction(0x385510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3852B0u; }
        if (ctx->pc != 0x3852B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385510_0x385510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3852B0u; }
        if (ctx->pc != 0x3852B0u) { return; }
    }
    ctx->pc = 0x3852B0u;
label_3852b0:
    // 0x3852b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3852B0u;
    {
        const bool branch_taken_0x3852b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3852b0) {
            ctx->pc = 0x3852B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3852B0u;
            // 0x3852b4: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3852C8u;
            goto label_3852c8;
        }
    }
    ctx->pc = 0x3852B8u;
    // 0x3852b8: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x3852b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3852bc: 0xc087848  jal         func_21E120
    ctx->pc = 0x3852BCu;
    SET_GPR_U32(ctx, 31, 0x3852C4u);
    ctx->pc = 0x3852C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3852BCu;
            // 0x3852c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E120u;
    if (runtime->hasFunction(0x21E120u)) {
        auto targetFn = runtime->lookupFunction(0x21E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3852C4u; }
        if (ctx->pc != 0x3852C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E120_0x21e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3852C4u; }
        if (ctx->pc != 0x3852C4u) { return; }
    }
    ctx->pc = 0x3852C4u;
label_3852c4:
    // 0x3852c4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x3852c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_3852c8:
    // 0x3852c8: 0xc0d46a0  jal         func_351A80
    ctx->pc = 0x3852C8u;
    SET_GPR_U32(ctx, 31, 0x3852D0u);
    ctx->pc = 0x3852CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3852C8u;
            // 0x3852cc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3852D0u; }
        if (ctx->pc != 0x3852D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3852D0u; }
        if (ctx->pc != 0x3852D0u) { return; }
    }
    ctx->pc = 0x3852D0u;
label_3852d0:
    // 0x3852d0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3852D0u;
    {
        const bool branch_taken_0x3852d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3852d0) {
            ctx->pc = 0x3852D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3852D0u;
            // 0x3852d4: 0xafa2011c  sw          $v0, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3852ECu;
            goto label_3852ec;
        }
    }
    ctx->pc = 0x3852D8u;
    // 0x3852d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3852d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3852dc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3852dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3852e0: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x3852E0u;
    SET_GPR_U32(ctx, 31, 0x3852E8u);
    ctx->pc = 0x3852E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3852E0u;
            // 0x3852e4: 0xc44c9ba0  lwc1        $f12, -0x6460($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3852E8u; }
        if (ctx->pc != 0x3852E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3852E8u; }
        if (ctx->pc != 0x3852E8u) { return; }
    }
    ctx->pc = 0x3852E8u;
label_3852e8:
    // 0x3852e8: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x3852e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_3852ec:
    // 0x3852ec: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x3852ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x3852f0: 0x27a5011c  addiu       $a1, $sp, 0x11C
    ctx->pc = 0x3852f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x3852f4: 0xc0e1528  jal         func_3854A0
    ctx->pc = 0x3852F4u;
    SET_GPR_U32(ctx, 31, 0x3852FCu);
    ctx->pc = 0x3852F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3852F4u;
            // 0x3852f8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3854A0u;
    if (runtime->hasFunction(0x3854A0u)) {
        auto targetFn = runtime->lookupFunction(0x3854A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3852FCu; }
        if (ctx->pc != 0x3852FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003854A0_0x3854a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3852FCu; }
        if (ctx->pc != 0x3852FCu) { return; }
    }
    ctx->pc = 0x3852FCu;
label_3852fc:
    // 0x3852fc: 0xc0892d0  jal         func_224B40
    ctx->pc = 0x3852FCu;
    SET_GPR_U32(ctx, 31, 0x385304u);
    ctx->pc = 0x385300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3852FCu;
            // 0x385300: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385304u; }
        if (ctx->pc != 0x385304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385304u; }
        if (ctx->pc != 0x385304u) { return; }
    }
    ctx->pc = 0x385304u;
label_385304:
    // 0x385304: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x385304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x385308: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x385308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x38530c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x38530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x385310: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x385310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x385314: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x385314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x385318: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x385318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x38531c: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x38531cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x385320: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x385320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x385324: 0xc0dec40  jal         func_37B100
    ctx->pc = 0x385324u;
    SET_GPR_U32(ctx, 31, 0x38532Cu);
    ctx->pc = 0x385328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385324u;
            // 0x385328: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B100u;
    if (runtime->hasFunction(0x37B100u)) {
        auto targetFn = runtime->lookupFunction(0x37B100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38532Cu; }
        if (ctx->pc != 0x38532Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B100_0x37b100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38532Cu; }
        if (ctx->pc != 0x38532Cu) { return; }
    }
    ctx->pc = 0x38532Cu;
label_38532c:
    // 0x38532c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x38532cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x385330: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x385330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x385334: 0xc44c5d60  lwc1        $f12, 0x5D60($v0)
    ctx->pc = 0x385334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x385338: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x385338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x38533c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x38533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x385340: 0xc44d5d64  lwc1        $f13, 0x5D64($v0)
    ctx->pc = 0x385340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x385344: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x385344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x385348: 0xc44e5d68  lwc1        $f14, 0x5D68($v0)
    ctx->pc = 0x385348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x38534c: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x38534Cu;
    SET_GPR_U32(ctx, 31, 0x385354u);
    ctx->pc = 0x385350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38534Cu;
            // 0x385350: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385354u; }
        if (ctx->pc != 0x385354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385354u; }
        if (ctx->pc != 0x385354u) { return; }
    }
    ctx->pc = 0x385354u;
label_385354:
    // 0x385354: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x385354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x385358: 0xc7ad0104  lwc1        $f13, 0x104($sp)
    ctx->pc = 0x385358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x38535c: 0xc7ae0108  lwc1        $f14, 0x108($sp)
    ctx->pc = 0x38535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x385360: 0xc7af010c  lwc1        $f15, 0x10C($sp)
    ctx->pc = 0x385360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x385364: 0xc0e1520  jal         func_385480
    ctx->pc = 0x385364u;
    SET_GPR_U32(ctx, 31, 0x38536Cu);
    ctx->pc = 0x385368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385364u;
            // 0x385368: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385480u;
    if (runtime->hasFunction(0x385480u)) {
        auto targetFn = runtime->lookupFunction(0x385480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38536Cu; }
        if (ctx->pc != 0x38536Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385480_0x385480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38536Cu; }
        if (ctx->pc != 0x38536Cu) { return; }
    }
    ctx->pc = 0x38536Cu;
label_38536c:
    // 0x38536c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38536cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x385370: 0x27a400f3  addiu       $a0, $sp, 0xF3
    ctx->pc = 0x385370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 243));
    // 0x385374: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x385374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x385378: 0xc0e151c  jal         func_385470
    ctx->pc = 0x385378u;
    SET_GPR_U32(ctx, 31, 0x385380u);
    ctx->pc = 0x38537Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385378u;
            // 0x38537c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385470u;
    if (runtime->hasFunction(0x385470u)) {
        auto targetFn = runtime->lookupFunction(0x385470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385380u; }
        if (ctx->pc != 0x385380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385470_0x385470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385380u; }
        if (ctx->pc != 0x385380u) { return; }
    }
    ctx->pc = 0x385380u;
label_385380:
    // 0x385380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385384: 0xc0f667c  jal         func_3D99F0
    ctx->pc = 0x385384u;
    SET_GPR_U32(ctx, 31, 0x38538Cu);
    ctx->pc = 0x385388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385384u;
            // 0x385388: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D99F0u;
    if (runtime->hasFunction(0x3D99F0u)) {
        auto targetFn = runtime->lookupFunction(0x3D99F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38538Cu; }
        if (ctx->pc != 0x38538Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D99F0_0x3d99f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38538Cu; }
        if (ctx->pc != 0x38538Cu) { return; }
    }
    ctx->pc = 0x38538Cu;
label_38538c:
    // 0x38538c: 0xc0e1514  jal         func_385450
    ctx->pc = 0x38538Cu;
    SET_GPR_U32(ctx, 31, 0x385394u);
    ctx->pc = 0x385390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38538Cu;
            // 0x385390: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x385450u;
    if (runtime->hasFunction(0x385450u)) {
        auto targetFn = runtime->lookupFunction(0x385450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385394u; }
        if (ctx->pc != 0x385394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00385450_0x385450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385394u; }
        if (ctx->pc != 0x385394u) { return; }
    }
    ctx->pc = 0x385394u;
label_385394:
    // 0x385394: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x385394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x385398: 0xc087884  jal         func_21E210
    ctx->pc = 0x385398u;
    SET_GPR_U32(ctx, 31, 0x3853A0u);
    ctx->pc = 0x38539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385398u;
            // 0x38539c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E210u;
    if (runtime->hasFunction(0x21E210u)) {
        auto targetFn = runtime->lookupFunction(0x21E210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3853A0u; }
        if (ctx->pc != 0x3853A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E210_0x21e210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3853A0u; }
        if (ctx->pc != 0x3853A0u) { return; }
    }
    ctx->pc = 0x3853A0u;
label_3853a0:
    // 0x3853a0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3853a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3853a4: 0xc44c9ba0  lwc1        $f12, -0x6460($v0)
    ctx->pc = 0x3853a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3853a8: 0xc0e14f4  jal         func_3853D0
    ctx->pc = 0x3853A8u;
    SET_GPR_U32(ctx, 31, 0x3853B0u);
    ctx->pc = 0x3853ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3853A8u;
            // 0x3853ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3853D0u;
    if (runtime->hasFunction(0x3853D0u)) {
        auto targetFn = runtime->lookupFunction(0x3853D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3853B0u; }
        if (ctx->pc != 0x3853B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003853D0_0x3853d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3853B0u; }
        if (ctx->pc != 0x3853B0u) { return; }
    }
    ctx->pc = 0x3853B0u;
label_3853b0:
    // 0x3853b0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x3853b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x3853b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3853b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3853b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3853b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3853bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3853bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3853c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3853c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3853c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3853c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3853c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3853C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3853CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3853C8u;
            // 0x3853cc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3853D0u;
}
