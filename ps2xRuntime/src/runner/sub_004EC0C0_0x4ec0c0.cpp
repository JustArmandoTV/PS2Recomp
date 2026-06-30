#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EC0C0
// Address: 0x4ec0c0 - 0x4ec270
void sub_004EC0C0_0x4ec0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC0C0_0x4ec0c0");
#endif

    switch (ctx->pc) {
        case 0x4ec0e8u: goto label_4ec0e8;
        case 0x4ec0f0u: goto label_4ec0f0;
        case 0x4ec140u: goto label_4ec140;
        case 0x4ec154u: goto label_4ec154;
        case 0x4ec160u: goto label_4ec160;
        case 0x4ec16cu: goto label_4ec16c;
        case 0x4ec178u: goto label_4ec178;
        case 0x4ec18cu: goto label_4ec18c;
        case 0x4ec1b8u: goto label_4ec1b8;
        case 0x4ec1ccu: goto label_4ec1cc;
        case 0x4ec1fcu: goto label_4ec1fc;
        case 0x4ec21cu: goto label_4ec21c;
        case 0x4ec228u: goto label_4ec228;
        case 0x4ec248u: goto label_4ec248;
        default: break;
    }

    ctx->pc = 0x4ec0c0u;

    // 0x4ec0c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ec0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ec0c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ec0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4ec0c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ec0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4ec0cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ec0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4ec0d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ec0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ec0d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ec0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec0d8: 0x26510064  addiu       $s1, $s2, 0x64
    ctx->pc = 0x4ec0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x4ec0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ec0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ec0e0: 0xc13b4b4  jal         func_4ED2D0
    ctx->pc = 0x4EC0E0u;
    SET_GPR_U32(ctx, 31, 0x4EC0E8u);
    ctx->pc = 0x4EC0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC0E0u;
            // 0x4ec0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED2D0u;
    if (runtime->hasFunction(0x4ED2D0u)) {
        auto targetFn = runtime->lookupFunction(0x4ED2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC0E8u; }
        if (ctx->pc != 0x4EC0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ED2D0_0x4ed2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC0E8u; }
        if (ctx->pc != 0x4EC0E8u) { return; }
    }
    ctx->pc = 0x4EC0E8u;
label_4ec0e8:
    // 0x4ec0e8: 0xc13b4a0  jal         func_4ED280
    ctx->pc = 0x4EC0E8u;
    SET_GPR_U32(ctx, 31, 0x4EC0F0u);
    ctx->pc = 0x4EC0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC0E8u;
            // 0x4ec0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED280u;
    if (runtime->hasFunction(0x4ED280u)) {
        auto targetFn = runtime->lookupFunction(0x4ED280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC0F0u; }
        if (ctx->pc != 0x4EC0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ED280_0x4ed280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC0F0u; }
        if (ctx->pc != 0x4EC0F0u) { return; }
    }
    ctx->pc = 0x4EC0F0u;
label_4ec0f0:
    // 0x4ec0f0: 0xac5201c8  sw          $s2, 0x1C8($v0)
    ctx->pc = 0x4ec0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 456), GPR_U32(ctx, 18));
    // 0x4ec0f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ec0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec0f8: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x4ec0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ec0fc: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x4ec0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x4ec100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ec100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ec104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec108: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x4ec108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
    // 0x4ec10c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4ec10cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4ec110: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x4ec110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x4ec114: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ec114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4ec118: 0x904587b0  lbu         $a1, -0x7850($v0)
    ctx->pc = 0x4ec118u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936496)));
    // 0x4ec11c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ec11cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ec120: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4ec120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x4ec124: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x4ec124u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x4ec128: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4ec128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x4ec12c: 0x0  nop
    ctx->pc = 0x4ec12cu;
    // NOP
    // 0x4ec130: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4ec130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4ec134: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4ec134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4ec138: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x4EC138u;
    SET_GPR_U32(ctx, 31, 0x4EC140u);
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC140u; }
        if (ctx->pc != 0x4EC140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC140u; }
        if (ctx->pc != 0x4EC140u) { return; }
    }
    ctx->pc = 0x4EC140u;
label_4ec140:
    // 0x4ec140: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x4ec140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x4ec144: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x4ec144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x4ec148: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ec148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ec14c: 0xc0b8160  jal         func_2E0580
    ctx->pc = 0x4EC14Cu;
    SET_GPR_U32(ctx, 31, 0x4EC154u);
    ctx->pc = 0x4EC150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC14Cu;
            // 0x4ec150: 0x266400c0  addiu       $a0, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC154u; }
        if (ctx->pc != 0x4EC154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC154u; }
        if (ctx->pc != 0x4EC154u) { return; }
    }
    ctx->pc = 0x4EC154u;
label_4ec154:
    // 0x4ec154: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4ec154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4ec158: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4EC158u;
    SET_GPR_U32(ctx, 31, 0x4EC160u);
    ctx->pc = 0x4EC15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC158u;
            // 0x4ec15c: 0x266500f0  addiu       $a1, $s3, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC160u; }
        if (ctx->pc != 0x4EC160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC160u; }
        if (ctx->pc != 0x4EC160u) { return; }
    }
    ctx->pc = 0x4EC160u;
label_4ec160:
    // 0x4ec160: 0x26650090  addiu       $a1, $s3, 0x90
    ctx->pc = 0x4ec160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x4ec164: 0xc04c720  jal         func_131C80
    ctx->pc = 0x4EC164u;
    SET_GPR_U32(ctx, 31, 0x4EC16Cu);
    ctx->pc = 0x4EC168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC164u;
            // 0x4ec168: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC16Cu; }
        if (ctx->pc != 0x4EC16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC16Cu; }
        if (ctx->pc != 0x4EC16Cu) { return; }
    }
    ctx->pc = 0x4EC16Cu;
label_4ec16c:
    // 0x4ec16c: 0x260401dc  addiu       $a0, $s0, 0x1DC
    ctx->pc = 0x4ec16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
    // 0x4ec170: 0xc04c720  jal         func_131C80
    ctx->pc = 0x4EC170u;
    SET_GPR_U32(ctx, 31, 0x4EC178u);
    ctx->pc = 0x4EC174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC170u;
            // 0x4ec174: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC178u; }
        if (ctx->pc != 0x4EC178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC178u; }
        if (ctx->pc != 0x4EC178u) { return; }
    }
    ctx->pc = 0x4EC178u;
label_4ec178:
    // 0x4ec178: 0xa2000234  sb          $zero, 0x234($s0)
    ctx->pc = 0x4ec178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 564), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ec17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ec17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ec180: 0xa2020235  sb          $v0, 0x235($s0)
    ctx->pc = 0x4ec180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 2));
    // 0x4ec184: 0xc040180  jal         func_100600
    ctx->pc = 0x4EC184u;
    SET_GPR_U32(ctx, 31, 0x4EC18Cu);
    ctx->pc = 0x4EC188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC184u;
            // 0x4ec188: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC18Cu; }
        if (ctx->pc != 0x4EC18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC18Cu; }
        if (ctx->pc != 0x4EC18Cu) { return; }
    }
    ctx->pc = 0x4EC18Cu;
label_4ec18c:
    // 0x4ec18c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4ec18cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec190: 0x5260000f  beql        $s3, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4EC190u;
    {
        const bool branch_taken_0x4ec190 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ec190) {
            ctx->pc = 0x4EC194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC190u;
            // 0x4ec194: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EC1D0u;
            goto label_4ec1d0;
        }
    }
    ctx->pc = 0x4EC198u;
    // 0x4ec198: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4ec198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4ec19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ec19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ec1a0: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4ec1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
    // 0x4ec1a4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4ec1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4ec1a8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4ec1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4ec1ac: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x4ec1acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x4ec1b0: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4EC1B0u;
    SET_GPR_U32(ctx, 31, 0x4EC1B8u);
    ctx->pc = 0x4EC1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC1B0u;
            // 0x4ec1b4: 0xa2620008  sb          $v0, 0x8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC1B8u; }
        if (ctx->pc != 0x4EC1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC1B8u; }
        if (ctx->pc != 0x4EC1B8u) { return; }
    }
    ctx->pc = 0x4EC1B8u;
label_4ec1b8:
    // 0x4ec1b8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x4ec1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x4ec1bc: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x4ec1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x4ec1c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ec1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec1c4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4EC1C4u;
    SET_GPR_U32(ctx, 31, 0x4EC1CCu);
    ctx->pc = 0x4EC1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC1C4u;
            // 0x4ec1c8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC1CCu; }
        if (ctx->pc != 0x4EC1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC1CCu; }
        if (ctx->pc != 0x4EC1CCu) { return; }
    }
    ctx->pc = 0x4EC1CCu;
label_4ec1cc:
    // 0x4ec1cc: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4ec1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4ec1d0:
    // 0x4ec1d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4ec1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4ec1d4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4ec1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x4ec1d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ec1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec1dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ec1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ec1e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ec1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec1e4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4ec1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4ec1e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4ec1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ec1ec: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4ec1ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4ec1f0: 0x344619ae  ori         $a2, $v0, 0x19AE
    ctx->pc = 0x4ec1f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6574);
    // 0x4ec1f4: 0xc122cd8  jal         func_48B360
    ctx->pc = 0x4EC1F4u;
    SET_GPR_U32(ctx, 31, 0x4EC1FCu);
    ctx->pc = 0x4EC1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC1F4u;
            // 0x4ec1f8: 0xae1301ec  sw          $s3, 0x1EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC1FCu; }
        if (ctx->pc != 0x4EC1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC1FCu; }
        if (ctx->pc != 0x4EC1FCu) { return; }
    }
    ctx->pc = 0x4EC1FCu;
label_4ec1fc:
    // 0x4ec1fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ec1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ec200: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4ec200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4ec204: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x4ec204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x4ec208: 0x26440084  addiu       $a0, $s2, 0x84
    ctx->pc = 0x4ec208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
    // 0x4ec20c: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x4ec20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x4ec210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ec210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec214: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4EC214u;
    SET_GPR_U32(ctx, 31, 0x4EC21Cu);
    ctx->pc = 0x4EC218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC214u;
            // 0x4ec218: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC21Cu; }
        if (ctx->pc != 0x4EC21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC21Cu; }
        if (ctx->pc != 0x4EC21Cu) { return; }
    }
    ctx->pc = 0x4EC21Cu;
label_4ec21c:
    // 0x4ec21c: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x4ec21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x4ec220: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4EC220u;
    SET_GPR_U32(ctx, 31, 0x4EC228u);
    ctx->pc = 0x4EC224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC220u;
            // 0x4ec224: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC228u; }
        if (ctx->pc != 0x4EC228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC228u; }
        if (ctx->pc != 0x4EC228u) { return; }
    }
    ctx->pc = 0x4EC228u;
label_4ec228:
    // 0x4ec228: 0xc64100b4  lwc1        $f1, 0xB4($s2)
    ctx->pc = 0x4ec228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4ec22c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x4ec22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x4ec230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ec230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ec234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ec234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec238: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ec238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec23c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4ec23cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4ec240: 0xc13b4ac  jal         func_4ED2B0
    ctx->pc = 0x4EC240u;
    SET_GPR_U32(ctx, 31, 0x4EC248u);
    ctx->pc = 0x4EC244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC240u;
            // 0x4ec244: 0xe64000b4  swc1        $f0, 0xB4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED2B0u;
    if (runtime->hasFunction(0x4ED2B0u)) {
        auto targetFn = runtime->lookupFunction(0x4ED2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC248u; }
        if (ctx->pc != 0x4EC248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ED2B0_0x4ed2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EC248u; }
        if (ctx->pc != 0x4EC248u) { return; }
    }
    ctx->pc = 0x4EC248u;
label_4ec248:
    // 0x4ec248: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ec248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ec24c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ec24cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ec250: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ec250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ec254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ec254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ec258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ec258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ec25c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EC25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EC25Cu;
            // 0x4ec260: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EC264u;
    // 0x4ec264: 0x0  nop
    ctx->pc = 0x4ec264u;
    // NOP
    // 0x4ec268: 0x0  nop
    ctx->pc = 0x4ec268u;
    // NOP
    // 0x4ec26c: 0x0  nop
    ctx->pc = 0x4ec26cu;
    // NOP
}
