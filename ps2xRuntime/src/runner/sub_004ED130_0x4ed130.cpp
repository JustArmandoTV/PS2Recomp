#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ED130
// Address: 0x4ed130 - 0x4ed280
void sub_004ED130_0x4ed130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED130_0x4ed130");
#endif

    switch (ctx->pc) {
        case 0x4ed190u: goto label_4ed190;
        case 0x4ed1a4u: goto label_4ed1a4;
        case 0x4ed1b0u: goto label_4ed1b0;
        case 0x4ed1bcu: goto label_4ed1bc;
        case 0x4ed1c8u: goto label_4ed1c8;
        case 0x4ed1dcu: goto label_4ed1dc;
        case 0x4ed208u: goto label_4ed208;
        case 0x4ed21cu: goto label_4ed21c;
        case 0x4ed24cu: goto label_4ed24c;
        default: break;
    }

    ctx->pc = 0x4ed130u;

    // 0x4ed130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ed134: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x4ed134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x4ed138: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ed138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ed13c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ed13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ed140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed144: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x4ed144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
    // 0x4ed148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ed148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ed14c: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x4ed14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x4ed150: 0xac8501c8  sw          $a1, 0x1C8($a0)
    ctx->pc = 0x4ed150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 456), GPR_U32(ctx, 5));
    // 0x4ed154: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ed154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ed158: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x4ed158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4ed15c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ed15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x4ed160: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4ed160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x4ed164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ed164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed168: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4ed168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x4ed16c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4ed16cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4ed170: 0x904587b0  lbu         $a1, -0x7850($v0)
    ctx->pc = 0x4ed170u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936496)));
    // 0x4ed174: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x4ed174u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x4ed178: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4ed178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4ed17c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4ed17cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x4ed180: 0x0  nop
    ctx->pc = 0x4ed180u;
    // NOP
    // 0x4ed184: 0x0  nop
    ctx->pc = 0x4ed184u;
    // NOP
    // 0x4ed188: 0xc122b58  jal         func_48AD60
    ctx->pc = 0x4ED188u;
    SET_GPR_U32(ctx, 31, 0x4ED190u);
    ctx->pc = 0x48AD60u;
    if (runtime->hasFunction(0x48AD60u)) {
        auto targetFn = runtime->lookupFunction(0x48AD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED190u; }
        if (ctx->pc != 0x4ED190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048AD60_0x48ad60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED190u; }
        if (ctx->pc != 0x4ED190u) { return; }
    }
    ctx->pc = 0x4ED190u;
label_4ed190:
    // 0x4ed190: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x4ed190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x4ed194: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x4ed194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x4ed198: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ed198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ed19c: 0xc0b8160  jal         func_2E0580
    ctx->pc = 0x4ED19Cu;
    SET_GPR_U32(ctx, 31, 0x4ED1A4u);
    ctx->pc = 0x4ED1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED19Cu;
            // 0x4ed1a0: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED1A4u; }
        if (ctx->pc != 0x4ED1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED1A4u; }
        if (ctx->pc != 0x4ED1A4u) { return; }
    }
    ctx->pc = 0x4ED1A4u;
label_4ed1a4:
    // 0x4ed1a4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4ed1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4ed1a8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4ED1A8u;
    SET_GPR_U32(ctx, 31, 0x4ED1B0u);
    ctx->pc = 0x4ED1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED1A8u;
            // 0x4ed1ac: 0x262500f0  addiu       $a1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED1B0u; }
        if (ctx->pc != 0x4ED1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED1B0u; }
        if (ctx->pc != 0x4ED1B0u) { return; }
    }
    ctx->pc = 0x4ED1B0u;
label_4ed1b0:
    // 0x4ed1b0: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x4ed1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x4ed1b4: 0xc04c720  jal         func_131C80
    ctx->pc = 0x4ED1B4u;
    SET_GPR_U32(ctx, 31, 0x4ED1BCu);
    ctx->pc = 0x4ED1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED1B4u;
            // 0x4ed1b8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED1BCu; }
        if (ctx->pc != 0x4ED1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED1BCu; }
        if (ctx->pc != 0x4ED1BCu) { return; }
    }
    ctx->pc = 0x4ED1BCu;
label_4ed1bc:
    // 0x4ed1bc: 0x260401dc  addiu       $a0, $s0, 0x1DC
    ctx->pc = 0x4ed1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
    // 0x4ed1c0: 0xc04c720  jal         func_131C80
    ctx->pc = 0x4ED1C0u;
    SET_GPR_U32(ctx, 31, 0x4ED1C8u);
    ctx->pc = 0x4ED1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED1C0u;
            // 0x4ed1c4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED1C8u; }
        if (ctx->pc != 0x4ED1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED1C8u; }
        if (ctx->pc != 0x4ED1C8u) { return; }
    }
    ctx->pc = 0x4ED1C8u;
label_4ed1c8:
    // 0x4ed1c8: 0xa2000234  sb          $zero, 0x234($s0)
    ctx->pc = 0x4ed1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 564), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ed1cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ed1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ed1d0: 0xa2020235  sb          $v0, 0x235($s0)
    ctx->pc = 0x4ed1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 2));
    // 0x4ed1d4: 0xc040180  jal         func_100600
    ctx->pc = 0x4ED1D4u;
    SET_GPR_U32(ctx, 31, 0x4ED1DCu);
    ctx->pc = 0x4ED1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED1D4u;
            // 0x4ed1d8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED1DCu; }
        if (ctx->pc != 0x4ED1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED1DCu; }
        if (ctx->pc != 0x4ED1DCu) { return; }
    }
    ctx->pc = 0x4ED1DCu;
label_4ed1dc:
    // 0x4ed1dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4ed1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed1e0: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4ED1E0u;
    {
        const bool branch_taken_0x4ed1e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ed1e0) {
            ctx->pc = 0x4ED1E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED1E0u;
            // 0x4ed1e4: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ED220u;
            goto label_4ed220;
        }
    }
    ctx->pc = 0x4ED1E8u;
    // 0x4ed1e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4ed1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4ed1ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ed1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ed1f0: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x4ed1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
    // 0x4ed1f4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4ed1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4ed1f8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ed1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ed1fc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4ed1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x4ed200: 0xc040138  jal         func_1004E0
    ctx->pc = 0x4ED200u;
    SET_GPR_U32(ctx, 31, 0x4ED208u);
    ctx->pc = 0x4ED204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED200u;
            // 0x4ed204: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED208u; }
        if (ctx->pc != 0x4ED208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED208u; }
        if (ctx->pc != 0x4ED208u) { return; }
    }
    ctx->pc = 0x4ED208u;
label_4ed208:
    // 0x4ed208: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4ed208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x4ed20c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x4ed20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x4ed210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ed210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed214: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4ED214u;
    SET_GPR_U32(ctx, 31, 0x4ED21Cu);
    ctx->pc = 0x4ED218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED214u;
            // 0x4ed218: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED21Cu; }
        if (ctx->pc != 0x4ED21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED21Cu; }
        if (ctx->pc != 0x4ED21Cu) { return; }
    }
    ctx->pc = 0x4ED21Cu;
label_4ed21c:
    // 0x4ed21c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4ed21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4ed220:
    // 0x4ed220: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4ed220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4ed224: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4ed224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x4ed228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ed228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed22c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4ed22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4ed230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ed230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed234: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4ed234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4ed238: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4ed238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ed23c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4ed23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4ed240: 0x344619ae  ori         $a2, $v0, 0x19AE
    ctx->pc = 0x4ed240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6574);
    // 0x4ed244: 0xc122cd8  jal         func_48B360
    ctx->pc = 0x4ED244u;
    SET_GPR_U32(ctx, 31, 0x4ED24Cu);
    ctx->pc = 0x4ED248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED244u;
            // 0x4ed248: 0xae1101ec  sw          $s1, 0x1EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED24Cu; }
        if (ctx->pc != 0x4ED24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED24Cu; }
        if (ctx->pc != 0x4ED24Cu) { return; }
    }
    ctx->pc = 0x4ED24Cu;
label_4ed24c:
    // 0x4ed24c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ed24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ed250: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4ed250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4ed254: 0xae0401c0  sw          $a0, 0x1C0($s0)
    ctx->pc = 0x4ed254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
    // 0x4ed258: 0xae0301c4  sw          $v1, 0x1C4($s0)
    ctx->pc = 0x4ed258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 3));
    // 0x4ed25c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ed25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ed264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed268: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED268u;
            // 0x4ed26c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED270u;
    // 0x4ed270: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED270u;
            // 0x4ed274: 0x240265ae  addiu       $v0, $zero, 0x65AE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED278u;
    // 0x4ed278: 0x0  nop
    ctx->pc = 0x4ed278u;
    // NOP
    // 0x4ed27c: 0x0  nop
    ctx->pc = 0x4ed27cu;
    // NOP
}
