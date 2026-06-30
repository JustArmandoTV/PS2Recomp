#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1570
// Address: 0x1e1570 - 0x1e1770
void sub_001E1570_0x1e1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1570_0x1e1570");
#endif

    switch (ctx->pc) {
        case 0x1e1590u: goto label_1e1590;
        case 0x1e15a0u: goto label_1e15a0;
        case 0x1e15b0u: goto label_1e15b0;
        case 0x1e15c4u: goto label_1e15c4;
        case 0x1e15d4u: goto label_1e15d4;
        case 0x1e15ecu: goto label_1e15ec;
        case 0x1e1608u: goto label_1e1608;
        case 0x1e1644u: goto label_1e1644;
        case 0x1e1660u: goto label_1e1660;
        case 0x1e1680u: goto label_1e1680;
        case 0x1e1688u: goto label_1e1688;
        case 0x1e169cu: goto label_1e169c;
        case 0x1e16a8u: goto label_1e16a8;
        case 0x1e16f0u: goto label_1e16f0;
        case 0x1e1708u: goto label_1e1708;
        case 0x1e1740u: goto label_1e1740;
        case 0x1e1758u: goto label_1e1758;
        default: break;
    }

    ctx->pc = 0x1e1570u;

    // 0x1e1570: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e1570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e1574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e1578: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e1578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e157c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e157cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1580: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e1580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e1584: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x1e1584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x1e1588: 0xc04cc04  jal         func_133010
    ctx->pc = 0x1E1588u;
    SET_GPR_U32(ctx, 31, 0x1E1590u);
    ctx->pc = 0x1E158Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1588u;
            // 0x1e158c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1590u; }
        if (ctx->pc != 0x1E1590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1590u; }
        if (ctx->pc != 0x1E1590u) { return; }
    }
    ctx->pc = 0x1E1590u;
label_1e1590:
    // 0x1e1590: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e1590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e1594: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x1e1594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x1e1598: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x1E1598u;
    SET_GPR_U32(ctx, 31, 0x1E15A0u);
    ctx->pc = 0x1E159Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1598u;
            // 0x1e159c: 0x260605d0  addiu       $a2, $s0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15A0u; }
        if (ctx->pc != 0x1E15A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15A0u; }
        if (ctx->pc != 0x1E15A0u) { return; }
    }
    ctx->pc = 0x1E15A0u;
label_1e15a0:
    // 0x1e15a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e15a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e15a4: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x1e15a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x1e15a8: 0xc04cc90  jal         func_133240
    ctx->pc = 0x1E15A8u;
    SET_GPR_U32(ctx, 31, 0x1E15B0u);
    ctx->pc = 0x1E15ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E15A8u;
            // 0x1e15ac: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15B0u; }
        if (ctx->pc != 0x1E15B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15B0u; }
        if (ctx->pc != 0x1E15B0u) { return; }
    }
    ctx->pc = 0x1E15B0u;
label_1e15b0:
    // 0x1e15b0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1e15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1e15b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e15b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e15b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e15b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e15bc: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x1E15BCu;
    SET_GPR_U32(ctx, 31, 0x1E15C4u);
    ctx->pc = 0x1E15C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E15BCu;
            // 0x1e15c0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15C4u; }
        if (ctx->pc != 0x1E15C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15C4u; }
        if (ctx->pc != 0x1E15C4u) { return; }
    }
    ctx->pc = 0x1E15C4u;
label_1e15c4:
    // 0x1e15c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e15c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e15c8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e15c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e15cc: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x1E15CCu;
    SET_GPR_U32(ctx, 31, 0x1E15D4u);
    ctx->pc = 0x1E15D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E15CCu;
            // 0x1e15d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15D4u; }
        if (ctx->pc != 0x1E15D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15D4u; }
        if (ctx->pc != 0x1E15D4u) { return; }
    }
    ctx->pc = 0x1E15D4u;
label_1e15d4:
    // 0x1e15d4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1e15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1e15d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e15dc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e15dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1e15e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e15e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e15e4: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x1E15E4u;
    SET_GPR_U32(ctx, 31, 0x1E15ECu);
    ctx->pc = 0x1E15E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E15E4u;
            // 0x1e15e8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15ECu; }
        if (ctx->pc != 0x1E15ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15ECu; }
        if (ctx->pc != 0x1E15ECu) { return; }
    }
    ctx->pc = 0x1E15ECu;
label_1e15ec:
    // 0x1e15ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e15ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e15f0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1e15f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e15f4: 0x8c44e410  lw          $a0, -0x1BF0($v0)
    ctx->pc = 0x1e15f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
    // 0x1e15f8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e15f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e15fc: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1e15fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e1600: 0xc0d16dc  jal         func_345B70
    ctx->pc = 0x1E1600u;
    SET_GPR_U32(ctx, 31, 0x1E1608u);
    ctx->pc = 0x1E1604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1600u;
            // 0x1e1604: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345B70u;
    if (runtime->hasFunction(0x345B70u)) {
        auto targetFn = runtime->lookupFunction(0x345B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1608u; }
        if (ctx->pc != 0x1E1608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345B70_0x345b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1608u; }
        if (ctx->pc != 0x1E1608u) { return; }
    }
    ctx->pc = 0x1E1608u;
label_1e1608:
    // 0x1e1608: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1e1608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1e160c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1e160cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1e1610: 0x50600052  beql        $v1, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x1E1610u;
    {
        const bool branch_taken_0x1e1610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1610) {
            ctx->pc = 0x1E1614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1610u;
            // 0x1e1614: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E175Cu;
            goto label_1e175c;
        }
    }
    ctx->pc = 0x1E1618u;
    // 0x1e1618: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e1618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e161c: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1E161Cu;
    {
        const bool branch_taken_0x1e161c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e161c) {
            ctx->pc = 0x1E1758u;
            goto label_1e1758;
        }
    }
    ctx->pc = 0x1E1624u;
    // 0x1e1624: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x1e1624u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1e1628: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e1628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e162c: 0x1483004a  bne         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1E162Cu;
    {
        const bool branch_taken_0x1e162c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e162c) {
            ctx->pc = 0x1E1758u;
            goto label_1e1758;
        }
    }
    ctx->pc = 0x1E1634u;
    // 0x1e1634: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e1634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e1638: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1e1638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e163c: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x1E163Cu;
    SET_GPR_U32(ctx, 31, 0x1E1644u);
    ctx->pc = 0x1E1640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E163Cu;
            // 0x1e1640: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1644u; }
        if (ctx->pc != 0x1E1644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1644u; }
        if (ctx->pc != 0x1E1644u) { return; }
    }
    ctx->pc = 0x1E1644u;
label_1e1644:
    // 0x1e1644: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e1644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e1648: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1e1648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e164c: 0x8c44e410  lw          $a0, -0x1BF0($v0)
    ctx->pc = 0x1e164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960144)));
    // 0x1e1650: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e1650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e1654: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1e1654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e1658: 0xc0d16dc  jal         func_345B70
    ctx->pc = 0x1E1658u;
    SET_GPR_U32(ctx, 31, 0x1E1660u);
    ctx->pc = 0x1E165Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1658u;
            // 0x1e165c: 0x3c080001  lui         $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345B70u;
    if (runtime->hasFunction(0x345B70u)) {
        auto targetFn = runtime->lookupFunction(0x345B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1660u; }
        if (ctx->pc != 0x1E1660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345B70_0x345b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1660u; }
        if (ctx->pc != 0x1E1660u) { return; }
    }
    ctx->pc = 0x1E1660u;
label_1e1660:
    // 0x1e1660: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1e1660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1e1664: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1e1664u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1e1668: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1E1668u;
    {
        const bool branch_taken_0x1e1668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1668) {
            ctx->pc = 0x1E1758u;
            goto label_1e1758;
        }
    }
    ctx->pc = 0x1E1670u;
    // 0x1e1670: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e1670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e1674: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1e1674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e1678: 0xc04cc90  jal         func_133240
    ctx->pc = 0x1E1678u;
    SET_GPR_U32(ctx, 31, 0x1E1680u);
    ctx->pc = 0x1E167Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1678u;
            // 0x1e167c: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1680u; }
        if (ctx->pc != 0x1E1680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1680u; }
        if (ctx->pc != 0x1E1680u) { return; }
    }
    ctx->pc = 0x1E1680u;
label_1e1680:
    // 0x1e1680: 0xc04cc14  jal         func_133050
    ctx->pc = 0x1E1680u;
    SET_GPR_U32(ctx, 31, 0x1E1688u);
    ctx->pc = 0x1E1684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1680u;
            // 0x1e1684: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1688u; }
        if (ctx->pc != 0x1E1688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1688u; }
        if (ctx->pc != 0x1E1688u) { return; }
    }
    ctx->pc = 0x1E1688u;
label_1e1688:
    // 0x1e1688: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e1688u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e168c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e168cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e1690: 0x260502e0  addiu       $a1, $s0, 0x2E0
    ctx->pc = 0x1e1690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x1e1694: 0xc04cbf0  jal         func_132FC0
    ctx->pc = 0x1E1694u;
    SET_GPR_U32(ctx, 31, 0x1E169Cu);
    ctx->pc = 0x1E1698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1694u;
            // 0x1e1698: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E169Cu; }
        if (ctx->pc != 0x1E169Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E169Cu; }
        if (ctx->pc != 0x1E169Cu) { return; }
    }
    ctx->pc = 0x1E169Cu;
label_1e169c:
    // 0x1e169c: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x1e169cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x1e16a0: 0xc04cc08  jal         func_133020
    ctx->pc = 0x1E16A0u;
    SET_GPR_U32(ctx, 31, 0x1E16A8u);
    ctx->pc = 0x1E16A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16A0u;
            // 0x1e16a4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16A8u; }
        if (ctx->pc != 0x1E16A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16A8u; }
        if (ctx->pc != 0x1E16A8u) { return; }
    }
    ctx->pc = 0x1E16A8u;
label_1e16a8:
    // 0x1e16a8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1e16a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1e16ac: 0x0  nop
    ctx->pc = 0x1e16acu;
    // NOP
    // 0x1e16b0: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x1e16b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e16b4: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x1E16B4u;
    {
        const bool branch_taken_0x1e16b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e16b4) {
            ctx->pc = 0x1E16B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16B4u;
            // 0x1e16b8: 0x3c034080  lui         $v1, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1710u;
            goto label_1e1710;
        }
    }
    ctx->pc = 0x1E16BCu;
    // 0x1e16bc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1e16bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1e16c0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1e16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x1e16c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e16c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e16c8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1e16c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1e16cc: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x1e16ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
    // 0x1e16d0: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x1e16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
    // 0x1e16d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e16d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e16d8: 0x0  nop
    ctx->pc = 0x1e16d8u;
    // NOP
    // 0x1e16dc: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x1e16dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e16e0: 0xc6000880  lwc1        $f0, 0x880($s0)
    ctx->pc = 0x1e16e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e16e4: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x1e16e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1e16e8: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x1E16E8u;
    SET_GPR_U32(ctx, 31, 0x1E16F0u);
    ctx->pc = 0x1E16ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16E8u;
            // 0x1e16ec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16F0u; }
        if (ctx->pc != 0x1E16F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16F0u; }
        if (ctx->pc != 0x1E16F0u) { return; }
    }
    ctx->pc = 0x1E16F0u;
label_1e16f0:
    // 0x1e16f0: 0xc6000930  lwc1        $f0, 0x930($s0)
    ctx->pc = 0x1e16f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e16f4: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x1e16f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
    // 0x1e16f8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1e16f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1e16fc: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x1e16fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1e1700: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x1E1700u;
    SET_GPR_U32(ctx, 31, 0x1E1708u);
    ctx->pc = 0x1E1704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1700u;
            // 0x1e1704: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1708u; }
        if (ctx->pc != 0x1E1708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1708u; }
        if (ctx->pc != 0x1E1708u) { return; }
    }
    ctx->pc = 0x1E1708u;
label_1e1708:
    // 0x1e1708: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E1708u;
    {
        const bool branch_taken_0x1e1708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1708) {
            ctx->pc = 0x1E1758u;
            goto label_1e1758;
        }
    }
    ctx->pc = 0x1E1710u;
label_1e1710:
    // 0x1e1710: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1e1710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x1e1714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e1714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1718: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1e1718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1e171c: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x1e171cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
    // 0x1e1720: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x1e1720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
    // 0x1e1724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1728: 0x0  nop
    ctx->pc = 0x1e1728u;
    // NOP
    // 0x1e172c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x1e172cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e1730: 0xc6000880  lwc1        $f0, 0x880($s0)
    ctx->pc = 0x1e1730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1734: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x1e1734u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1e1738: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x1E1738u;
    SET_GPR_U32(ctx, 31, 0x1E1740u);
    ctx->pc = 0x1E173Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1738u;
            // 0x1e173c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1740u; }
        if (ctx->pc != 0x1E1740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1740u; }
        if (ctx->pc != 0x1E1740u) { return; }
    }
    ctx->pc = 0x1E1740u;
label_1e1740:
    // 0x1e1740: 0xc6000930  lwc1        $f0, 0x930($s0)
    ctx->pc = 0x1e1740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1744: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x1e1744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
    // 0x1e1748: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1e1748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1e174c: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x1e174cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1e1750: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x1E1750u;
    SET_GPR_U32(ctx, 31, 0x1E1758u);
    ctx->pc = 0x1E1754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1750u;
            // 0x1e1754: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1758u; }
        if (ctx->pc != 0x1E1758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1758u; }
        if (ctx->pc != 0x1E1758u) { return; }
    }
    ctx->pc = 0x1E1758u;
label_1e1758:
    // 0x1e1758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e175c:
    // 0x1e175c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e1760: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e1760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1764: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1764u;
            // 0x1e1768: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E176Cu;
    // 0x1e176c: 0x0  nop
    ctx->pc = 0x1e176cu;
    // NOP
}
