#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E14F0
// Address: 0x3e14f0 - 0x3e15e0
void sub_003E14F0_0x3e14f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E14F0_0x3e14f0");
#endif

    switch (ctx->pc) {
        case 0x3e1528u: goto label_3e1528;
        case 0x3e1540u: goto label_3e1540;
        case 0x3e1558u: goto label_3e1558;
        case 0x3e1564u: goto label_3e1564;
        case 0x3e1574u: goto label_3e1574;
        case 0x3e158cu: goto label_3e158c;
        case 0x3e1598u: goto label_3e1598;
        case 0x3e15a8u: goto label_3e15a8;
        case 0x3e15c0u: goto label_3e15c0;
        default: break;
    }

    ctx->pc = 0x3e14f0u;

    // 0x3e14f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3e14f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3e14f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e14f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3e14f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e14f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3e14fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e14fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e1500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e1500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e1504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e1504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e1508: 0x8c8302e4  lw          $v1, 0x2E4($a0)
    ctx->pc = 0x3e1508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 740)));
    // 0x3e150c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e150cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1510: 0x8c52e418  lw          $s2, -0x1BE8($v0)
    ctx->pc = 0x3e1510u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960152)));
    // 0x3e1514: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3e1514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3e1518: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3e1518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3e151c: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x3e151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x3e1520: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3E1520u;
    SET_GPR_U32(ctx, 31, 0x3E1528u);
    ctx->pc = 0x3E1524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1520u;
            // 0x3e1524: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1528u; }
        if (ctx->pc != 0x3E1528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1528u; }
        if (ctx->pc != 0x3E1528u) { return; }
    }
    ctx->pc = 0x3E1528u;
label_3e1528:
    // 0x3e1528: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x3e1528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3e152c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3e152cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3e1530: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x3e1530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e1534: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3e1534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3e1538: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3E1538u;
    SET_GPR_U32(ctx, 31, 0x3E1540u);
    ctx->pc = 0x3E153Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1538u;
            // 0x3e153c: 0x26260210  addiu       $a2, $s1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1540u; }
        if (ctx->pc != 0x3E1540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1540u; }
        if (ctx->pc != 0x3E1540u) { return; }
    }
    ctx->pc = 0x3E1540u;
label_3e1540:
    // 0x3e1540: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x3e1540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x3e1544: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x3e1544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e1548: 0xc7ad0104  lwc1        $f13, 0x104($sp)
    ctx->pc = 0x3e1548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3e154c: 0xc7ae0108  lwc1        $f14, 0x108($sp)
    ctx->pc = 0x3e154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3e1550: 0xc0b9148  jal         func_2E4520
    ctx->pc = 0x3E1550u;
    SET_GPR_U32(ctx, 31, 0x3E1558u);
    ctx->pc = 0x3E1554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1550u;
            // 0x3e1554: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4520u;
    if (runtime->hasFunction(0x2E4520u)) {
        auto targetFn = runtime->lookupFunction(0x2E4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1558u; }
        if (ctx->pc != 0x3E1558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4520_0x2e4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1558u; }
        if (ctx->pc != 0x3E1558u) { return; }
    }
    ctx->pc = 0x3E1558u;
label_3e1558:
    // 0x3e1558: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3e1558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e155c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3E155Cu;
    SET_GPR_U32(ctx, 31, 0x3E1564u);
    ctx->pc = 0x3E1560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E155Cu;
            // 0x3e1560: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1564u; }
        if (ctx->pc != 0x3E1564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1564u; }
        if (ctx->pc != 0x3E1564u) { return; }
    }
    ctx->pc = 0x3E1564u;
label_3e1564:
    // 0x3e1564: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3e1564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3e1568: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3e1568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e156c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3E156Cu;
    SET_GPR_U32(ctx, 31, 0x3E1574u);
    ctx->pc = 0x3E1570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E156Cu;
            // 0x3e1570: 0x26260230  addiu       $a2, $s1, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1574u; }
        if (ctx->pc != 0x3E1574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1574u; }
        if (ctx->pc != 0x3E1574u) { return; }
    }
    ctx->pc = 0x3E1574u;
label_3e1574:
    // 0x3e1574: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x3e1574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x3e1578: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x3e1578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e157c: 0xc7ad0104  lwc1        $f13, 0x104($sp)
    ctx->pc = 0x3e157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3e1580: 0xc7ae0108  lwc1        $f14, 0x108($sp)
    ctx->pc = 0x3e1580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3e1584: 0xc0b9138  jal         func_2E44E0
    ctx->pc = 0x3E1584u;
    SET_GPR_U32(ctx, 31, 0x3E158Cu);
    ctx->pc = 0x3E1588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1584u;
            // 0x3e1588: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E44E0u;
    if (runtime->hasFunction(0x2E44E0u)) {
        auto targetFn = runtime->lookupFunction(0x2E44E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E158Cu; }
        if (ctx->pc != 0x3E158Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E44E0_0x2e44e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E158Cu; }
        if (ctx->pc != 0x3E158Cu) { return; }
    }
    ctx->pc = 0x3E158Cu;
label_3e158c:
    // 0x3e158c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3e158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3e1590: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3E1590u;
    SET_GPR_U32(ctx, 31, 0x3E1598u);
    ctx->pc = 0x3E1594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1590u;
            // 0x3e1594: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1598u; }
        if (ctx->pc != 0x3E1598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1598u; }
        if (ctx->pc != 0x3E1598u) { return; }
    }
    ctx->pc = 0x3E1598u;
label_3e1598:
    // 0x3e1598: 0x26260250  addiu       $a2, $s1, 0x250
    ctx->pc = 0x3e1598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x3e159c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3e159cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3e15a0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3E15A0u;
    SET_GPR_U32(ctx, 31, 0x3E15A8u);
    ctx->pc = 0x3E15A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E15A0u;
            // 0x3e15a4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E15A8u; }
        if (ctx->pc != 0x3E15A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E15A8u; }
        if (ctx->pc != 0x3E15A8u) { return; }
    }
    ctx->pc = 0x3E15A8u;
label_3e15a8:
    // 0x3e15a8: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x3e15a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x3e15ac: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x3e15acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e15b0: 0xc7ad0104  lwc1        $f13, 0x104($sp)
    ctx->pc = 0x3e15b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3e15b4: 0xc7ae0108  lwc1        $f14, 0x108($sp)
    ctx->pc = 0x3e15b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3e15b8: 0xc0b9110  jal         func_2E4440
    ctx->pc = 0x3E15B8u;
    SET_GPR_U32(ctx, 31, 0x3E15C0u);
    ctx->pc = 0x3E15BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E15B8u;
            // 0x3e15bc: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4440u;
    if (runtime->hasFunction(0x2E4440u)) {
        auto targetFn = runtime->lookupFunction(0x2E4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E15C0u; }
        if (ctx->pc != 0x3E15C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4440_0x2e4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E15C0u; }
        if (ctx->pc != 0x3E15C0u) { return; }
    }
    ctx->pc = 0x3E15C0u;
label_3e15c0:
    // 0x3e15c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e15c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e15c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e15c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e15c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e15c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e15cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e15ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e15d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E15D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E15D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E15D0u;
            // 0x3e15d4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E15D8u;
    // 0x3e15d8: 0x0  nop
    ctx->pc = 0x3e15d8u;
    // NOP
    // 0x3e15dc: 0x0  nop
    ctx->pc = 0x3e15dcu;
    // NOP
}
