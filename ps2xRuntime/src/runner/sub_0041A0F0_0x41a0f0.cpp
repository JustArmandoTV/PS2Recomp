#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041A0F0
// Address: 0x41a0f0 - 0x41a2b0
void sub_0041A0F0_0x41a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A0F0_0x41a0f0");
#endif

    switch (ctx->pc) {
        case 0x41a10cu: goto label_41a10c;
        case 0x41a12cu: goto label_41a12c;
        case 0x41a168u: goto label_41a168;
        case 0x41a198u: goto label_41a198;
        case 0x41a1b8u: goto label_41a1b8;
        case 0x41a1e0u: goto label_41a1e0;
        case 0x41a240u: goto label_41a240;
        case 0x41a24cu: goto label_41a24c;
        case 0x41a258u: goto label_41a258;
        case 0x41a264u: goto label_41a264;
        case 0x41a270u: goto label_41a270;
        case 0x41a27cu: goto label_41a27c;
        case 0x41a294u: goto label_41a294;
        default: break;
    }

    ctx->pc = 0x41a0f0u;

    // 0x41a0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41a0f4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x41a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x41a0f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41a0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41a0fc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x41a0fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x41a100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41a100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41a104: 0xc106970  jal         func_41A5C0
    ctx->pc = 0x41A104u;
    SET_GPR_U32(ctx, 31, 0x41A10Cu);
    ctx->pc = 0x41A108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A104u;
            // 0x41a108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41A5C0u;
    if (runtime->hasFunction(0x41A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x41A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A10Cu; }
        if (ctx->pc != 0x41A10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041A5C0_0x41a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A10Cu; }
        if (ctx->pc != 0x41A10Cu) { return; }
    }
    ctx->pc = 0x41A10Cu;
label_41a10c:
    // 0x41a10c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41a110: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41a110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41a114: 0x2463b720  addiu       $v1, $v1, -0x48E0
    ctx->pc = 0x41a114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948640));
    // 0x41a118: 0x2442b758  addiu       $v0, $v0, -0x48A8
    ctx->pc = 0x41a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948696));
    // 0x41a11c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x41a120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a124: 0xc10696c  jal         func_41A5B0
    ctx->pc = 0x41A124u;
    SET_GPR_U32(ctx, 31, 0x41A12Cu);
    ctx->pc = 0x41A128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A124u;
            // 0x41a128: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41A5B0u;
    if (runtime->hasFunction(0x41A5B0u)) {
        auto targetFn = runtime->lookupFunction(0x41A5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A12Cu; }
        if (ctx->pc != 0x41A12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041A5B0_0x41a5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A12Cu; }
        if (ctx->pc != 0x41A12Cu) { return; }
    }
    ctx->pc = 0x41A12Cu;
label_41a12c:
    // 0x41a12c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x41a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x41a130: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x41a130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x41a134: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41a134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41a138: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x41a138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x41a13c: 0x2442b6d0  addiu       $v0, $v0, -0x4930
    ctx->pc = 0x41a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948560));
    // 0x41a140: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x41a140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x41a144: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x41a144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x41a148: 0x24a5a570  addiu       $a1, $a1, -0x5A90
    ctx->pc = 0x41a148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944112));
    // 0x41a14c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41a150: 0x24c6a4e0  addiu       $a2, $a2, -0x5B20
    ctx->pc = 0x41a150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943968));
    // 0x41a154: 0x2442b708  addiu       $v0, $v0, -0x48F8
    ctx->pc = 0x41a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948616));
    // 0x41a158: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x41a158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x41a15c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x41a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x41a160: 0xc040804  jal         func_102010
    ctx->pc = 0x41A160u;
    SET_GPR_U32(ctx, 31, 0x41A168u);
    ctx->pc = 0x41A164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A160u;
            // 0x41a164: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A168u; }
        if (ctx->pc != 0x41A168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A168u; }
        if (ctx->pc != 0x41A168u) { return; }
    }
    ctx->pc = 0x41A168u;
label_41a168:
    // 0x41a168: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x41a168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x41a16c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x41a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x41a170: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x41a170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x41a174: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x41a174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x41a178: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x41a178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x41a17c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x41a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x41a180: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x41a180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x41a184: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x41a184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x41a188: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41a188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x41a18c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x41a190: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x41A190u;
    SET_GPR_U32(ctx, 31, 0x41A198u);
    ctx->pc = 0x41A194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A190u;
            // 0x41a194: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A198u; }
        if (ctx->pc != 0x41A198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A198u; }
        if (ctx->pc != 0x41A198u) { return; }
    }
    ctx->pc = 0x41A198u;
label_41a198:
    // 0x41a198: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x41a198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x41a19c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41a19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a1a0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41A1A0u;
    {
        const bool branch_taken_0x41a1a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A1A0u;
            // 0x41a1a4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a1a0) {
            ctx->pc = 0x41A1BCu;
            goto label_41a1bc;
        }
    }
    ctx->pc = 0x41A1A8u;
    // 0x41a1a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x41a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x41a1ac: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x41a1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x41a1b0: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x41A1B0u;
    SET_GPR_U32(ctx, 31, 0x41A1B8u);
    ctx->pc = 0x41A1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A1B0u;
            // 0x41a1b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A1B8u; }
        if (ctx->pc != 0x41A1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A1B8u; }
        if (ctx->pc != 0x41A1B8u) { return; }
    }
    ctx->pc = 0x41A1B8u;
label_41a1b8:
    // 0x41a1b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41a1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41a1bc:
    // 0x41a1bc: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x41a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x41a1c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41a1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a1c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41a1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41a1c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41a1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x41A1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A1CCu;
            // 0x41a1d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A1D4u;
    // 0x41a1d4: 0x0  nop
    ctx->pc = 0x41a1d4u;
    // NOP
    // 0x41a1d8: 0x0  nop
    ctx->pc = 0x41a1d8u;
    // NOP
    // 0x41a1dc: 0x0  nop
    ctx->pc = 0x41a1dcu;
    // NOP
label_41a1e0:
    // 0x41a1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41a1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41a1e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x41a1e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41a1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41a1ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41a1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41a1f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41a1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a1f4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x41A1F4u;
    {
        const bool branch_taken_0x41a1f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A1F4u;
            // 0x41a1f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a1f4) {
            ctx->pc = 0x41A294u;
            goto label_41a294;
        }
    }
    ctx->pc = 0x41A1FCu;
    // 0x41a1fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41a200: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41a200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41a204: 0x2463b720  addiu       $v1, $v1, -0x48E0
    ctx->pc = 0x41a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948640));
    // 0x41a208: 0x2442b758  addiu       $v0, $v0, -0x48A8
    ctx->pc = 0x41a208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948696));
    // 0x41a20c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x41a210: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x41A210u;
    {
        const bool branch_taken_0x41a210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A210u;
            // 0x41a214: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a210) {
            ctx->pc = 0x41A27Cu;
            goto label_41a27c;
        }
    }
    ctx->pc = 0x41A218u;
    // 0x41a218: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41a218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41a21c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41a220: 0x2463b680  addiu       $v1, $v1, -0x4980
    ctx->pc = 0x41a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948480));
    // 0x41a224: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x41a224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x41a228: 0x2442b6b8  addiu       $v0, $v0, -0x4948
    ctx->pc = 0x41a228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948536));
    // 0x41a22c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x41a230: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x41a230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x41a234: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x41a234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x41a238: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x41A238u;
    SET_GPR_U32(ctx, 31, 0x41A240u);
    ctx->pc = 0x41A23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A238u;
            // 0x41a23c: 0x24a598f0  addiu       $a1, $a1, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A240u; }
        if (ctx->pc != 0x41A240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A240u; }
        if (ctx->pc != 0x41A240u) { return; }
    }
    ctx->pc = 0x41A240u;
label_41a240:
    // 0x41a240: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x41a240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x41a244: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x41A244u;
    SET_GPR_U32(ctx, 31, 0x41A24Cu);
    ctx->pc = 0x41A248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A244u;
            // 0x41a248: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A24Cu; }
        if (ctx->pc != 0x41A24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A24Cu; }
        if (ctx->pc != 0x41A24Cu) { return; }
    }
    ctx->pc = 0x41A24Cu;
label_41a24c:
    // 0x41a24c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x41a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x41a250: 0xc1068c4  jal         func_41A310
    ctx->pc = 0x41A250u;
    SET_GPR_U32(ctx, 31, 0x41A258u);
    ctx->pc = 0x41A254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A250u;
            // 0x41a254: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41A310u;
    if (runtime->hasFunction(0x41A310u)) {
        auto targetFn = runtime->lookupFunction(0x41A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A258u; }
        if (ctx->pc != 0x41A258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041A310_0x41a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A258u; }
        if (ctx->pc != 0x41A258u) { return; }
    }
    ctx->pc = 0x41A258u;
label_41a258:
    // 0x41a258: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x41a258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x41a25c: 0xc1068c4  jal         func_41A310
    ctx->pc = 0x41A25Cu;
    SET_GPR_U32(ctx, 31, 0x41A264u);
    ctx->pc = 0x41A260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A25Cu;
            // 0x41a260: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41A310u;
    if (runtime->hasFunction(0x41A310u)) {
        auto targetFn = runtime->lookupFunction(0x41A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A264u; }
        if (ctx->pc != 0x41A264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041A310_0x41a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A264u; }
        if (ctx->pc != 0x41A264u) { return; }
    }
    ctx->pc = 0x41A264u;
label_41a264:
    // 0x41a264: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x41a264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x41a268: 0xc1068ac  jal         func_41A2B0
    ctx->pc = 0x41A268u;
    SET_GPR_U32(ctx, 31, 0x41A270u);
    ctx->pc = 0x41A26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A268u;
            // 0x41a26c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41A2B0u;
    if (runtime->hasFunction(0x41A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x41A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A270u; }
        if (ctx->pc != 0x41A270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041A2B0_0x41a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A270u; }
        if (ctx->pc != 0x41A270u) { return; }
    }
    ctx->pc = 0x41A270u;
label_41a270:
    // 0x41a270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41a270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a274: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x41A274u;
    SET_GPR_U32(ctx, 31, 0x41A27Cu);
    ctx->pc = 0x41A278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A274u;
            // 0x41a278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A27Cu; }
        if (ctx->pc != 0x41A27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A27Cu; }
        if (ctx->pc != 0x41A27Cu) { return; }
    }
    ctx->pc = 0x41A27Cu;
label_41a27c:
    // 0x41a27c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x41a27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x41a280: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41a280u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x41a284: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x41A284u;
    {
        const bool branch_taken_0x41a284 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41a284) {
            ctx->pc = 0x41A288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41A284u;
            // 0x41a288: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41A298u;
            goto label_41a298;
        }
    }
    ctx->pc = 0x41A28Cu;
    // 0x41a28c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x41A28Cu;
    SET_GPR_U32(ctx, 31, 0x41A294u);
    ctx->pc = 0x41A290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41A28Cu;
            // 0x41a290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A294u; }
        if (ctx->pc != 0x41A294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41A294u; }
        if (ctx->pc != 0x41A294u) { return; }
    }
    ctx->pc = 0x41A294u;
label_41a294:
    // 0x41a294: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41a294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41a298:
    // 0x41a298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41a298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41a29c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41a29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41a2a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41a2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x41A2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41A2A4u;
            // 0x41a2a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41A2ACu;
    // 0x41a2ac: 0x0  nop
    ctx->pc = 0x41a2acu;
    // NOP
}
