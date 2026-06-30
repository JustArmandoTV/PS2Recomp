#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D2040
// Address: 0x4d2040 - 0x4d2180
void sub_004D2040_0x4d2040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2040_0x4d2040");
#endif

    switch (ctx->pc) {
        case 0x4d20e0u: goto label_4d20e0;
        case 0x4d2104u: goto label_4d2104;
        case 0x4d2110u: goto label_4d2110;
        case 0x4d2130u: goto label_4d2130;
        case 0x4d2144u: goto label_4d2144;
        case 0x4d2160u: goto label_4d2160;
        default: break;
    }

    ctx->pc = 0x4d2040u;

    // 0x4d2040: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4d2040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4d2044: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4d2044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
    // 0x4d2048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4d2048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4d204c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4d204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4d2050: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d2050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4d2054: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d2054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d2058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d2058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d205c: 0x8c65aa30  lw          $a1, -0x55D0($v1)
    ctx->pc = 0x4d205cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945328)));
    // 0x4d2060: 0xc48000e0  lwc1        $f0, 0xE0($a0)
    ctx->pc = 0x4d2060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d2064: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x4d2064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x4d2068: 0x8ca5008c  lw          $a1, 0x8C($a1)
    ctx->pc = 0x4d2068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x4d206c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4d206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d2070: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d2070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d2074: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x4d2074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d2078: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4d2078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4d207c: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x4d207cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x4d2080: 0x8c42aa30  lw          $v0, -0x55D0($v0)
    ctx->pc = 0x4d2080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945328)));
    // 0x4d2084: 0xc48000e0  lwc1        $f0, 0xE0($a0)
    ctx->pc = 0x4d2084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d2088: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x4d2088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x4d208c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4d208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d2090: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4d2090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d2094: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x4D2094u;
    {
        const bool branch_taken_0x4d2094 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4D2098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2094u;
            // 0x4d2098: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2094) {
            ctx->pc = 0x4D20E8u;
            goto label_4d20e8;
        }
    }
    ctx->pc = 0x4D209Cu;
    // 0x4d209c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x4d209cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x4d20a0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x4d20a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x4d20a4: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x4d20a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x4d20a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4d20a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d20ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4d20acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d20b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4d20b4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x4d20b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4d20b8: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x4d20b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x4d20bc: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x4d20bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x4d20c0: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x4d20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x4d20c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4d20c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4d20c8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4d20c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x4d20cc: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4d20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x4d20d0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4d20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x4d20d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4d20d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4d20d8: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x4D20D8u;
    SET_GPR_U32(ctx, 31, 0x4D20E0u);
    ctx->pc = 0x4D20DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D20D8u;
            // 0x4d20dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D20E0u; }
        if (ctx->pc != 0x4D20E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D20E0u; }
        if (ctx->pc != 0x4D20E0u) { return; }
    }
    ctx->pc = 0x4D20E0u;
label_4d20e0:
    // 0x4d20e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d20e4: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x4d20e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
label_4d20e8:
    // 0x4d20e8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4d20ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4d20ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4d20f0: 0x8c42aa30  lw          $v0, -0x55D0($v0)
    ctx->pc = 0x4d20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945328)));
    // 0x4d20f4: 0x8c52008c  lw          $s2, 0x8C($v0)
    ctx->pc = 0x4d20f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x4d20f8: 0x8c510084  lw          $s1, 0x84($v0)
    ctx->pc = 0x4d20f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x4d20fc: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D20FCu;
    SET_GPR_U32(ctx, 31, 0x4D2104u);
    ctx->pc = 0x4D2100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D20FCu;
            // 0x4d2100: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2104u; }
        if (ctx->pc != 0x4D2104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2104u; }
        if (ctx->pc != 0x4D2104u) { return; }
    }
    ctx->pc = 0x4D2104u;
label_4d2104:
    // 0x4d2104: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4d2104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4d2108: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x4D2108u;
    SET_GPR_U32(ctx, 31, 0x4D2110u);
    ctx->pc = 0x4D210Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2108u;
            // 0x4d210c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2110u; }
        if (ctx->pc != 0x4D2110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2110u; }
        if (ctx->pc != 0x4D2110u) { return; }
    }
    ctx->pc = 0x4D2110u;
label_4d2110:
    // 0x4d2110: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d2110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2114: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d2114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4d2118: 0x8c51e360  lw          $s1, -0x1CA0($v0)
    ctx->pc = 0x4d2118u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
    // 0x4d211c: 0xc60c00e0  lwc1        $f12, 0xE0($s0)
    ctx->pc = 0x4d211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4d2120: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4d2120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2124: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x4d2124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4d2128: 0xc0528ec  jal         func_14A3B0
    ctx->pc = 0x4D2128u;
    SET_GPR_U32(ctx, 31, 0x4D2130u);
    ctx->pc = 0x4D212Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2128u;
            // 0x4d212c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2130u; }
        if (ctx->pc != 0x4D2130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2130u; }
        if (ctx->pc != 0x4D2130u) { return; }
    }
    ctx->pc = 0x4D2130u;
label_4d2130:
    // 0x4d2130: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4d2130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x4d2134: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4d2134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4d2138: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x4d2138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x4d213c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x4D213Cu;
    SET_GPR_U32(ctx, 31, 0x4D2144u);
    ctx->pc = 0x4D2140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D213Cu;
            // 0x4d2140: 0x24c67be0  addiu       $a2, $a2, 0x7BE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2144u; }
        if (ctx->pc != 0x4D2144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2144u; }
        if (ctx->pc != 0x4D2144u) { return; }
    }
    ctx->pc = 0x4D2144u;
label_4d2144:
    // 0x4d2144: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x4d2144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d2148: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x4d2148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x4d214c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4d214cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4d2150: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4d2150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x4d2154: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x4d2154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d2158: 0xc04c994  jal         func_132650
    ctx->pc = 0x4D2158u;
    SET_GPR_U32(ctx, 31, 0x4D2160u);
    ctx->pc = 0x4D215Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2158u;
            // 0x4d215c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2160u; }
        if (ctx->pc != 0x4D2160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D2160u; }
        if (ctx->pc != 0x4D2160u) { return; }
    }
    ctx->pc = 0x4D2160u;
label_4d2160:
    // 0x4d2160: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d2160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d2164: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d2164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d2168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d2168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d216c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d216cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2170: 0x3e00008  jr          $ra
    ctx->pc = 0x4D2170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D2174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D2170u;
            // 0x4d2174: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D2178u;
    // 0x4d2178: 0x0  nop
    ctx->pc = 0x4d2178u;
    // NOP
    // 0x4d217c: 0x0  nop
    ctx->pc = 0x4d217cu;
    // NOP
}
