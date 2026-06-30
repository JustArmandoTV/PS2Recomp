#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055F460
// Address: 0x55f460 - 0x55f6b0
void sub_0055F460_0x55f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055F460_0x55f460");
#endif

    switch (ctx->pc) {
        case 0x55f4b8u: goto label_55f4b8;
        case 0x55f4c4u: goto label_55f4c4;
        case 0x55f4dcu: goto label_55f4dc;
        case 0x55f4f8u: goto label_55f4f8;
        case 0x55f504u: goto label_55f504;
        case 0x55f550u: goto label_55f550;
        case 0x55f558u: goto label_55f558;
        case 0x55f564u: goto label_55f564;
        case 0x55f588u: goto label_55f588;
        case 0x55f598u: goto label_55f598;
        case 0x55f5a4u: goto label_55f5a4;
        case 0x55f5dcu: goto label_55f5dc;
        case 0x55f5ecu: goto label_55f5ec;
        case 0x55f624u: goto label_55f624;
        case 0x55f644u: goto label_55f644;
        case 0x55f658u: goto label_55f658;
        case 0x55f670u: goto label_55f670;
        default: break;
    }

    ctx->pc = 0x55f460u;

    // 0x55f460: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x55f460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x55f464: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x55f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x55f468: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x55f468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x55f46c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x55f46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x55f470: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x55f470u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f474: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x55f474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x55f478: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x55f478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x55f47c: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x55f47cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f480: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x55f480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x55f484: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x55f484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55f488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x55f48c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x55f48cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f490: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55f490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x55f494: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x55f494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55f498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x55f49c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x55f49cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f4a0: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x55f4a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x55f4a4: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x55F4A4u;
    {
        const bool branch_taken_0x55f4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x55F4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F4A4u;
            // 0x55f4a8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f4a4) {
            ctx->pc = 0x55F670u;
            goto label_55f670;
        }
    }
    ctx->pc = 0x55F4ACu;
    // 0x55f4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55f4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f4b0: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x55F4B0u;
    SET_GPR_U32(ctx, 31, 0x55F4B8u);
    ctx->pc = 0x55F4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F4B0u;
            // 0x55f4b4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F4B8u; }
        if (ctx->pc != 0x55F4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F4B8u; }
        if (ctx->pc != 0x55F4B8u) { return; }
    }
    ctx->pc = 0x55F4B8u;
label_55f4b8:
    // 0x55f4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55f4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f4bc: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x55F4BCu;
    SET_GPR_U32(ctx, 31, 0x55F4C4u);
    ctx->pc = 0x55F4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F4BCu;
            // 0x55f4c0: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F4C4u; }
        if (ctx->pc != 0x55F4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F4C4u; }
        if (ctx->pc != 0x55F4C4u) { return; }
    }
    ctx->pc = 0x55F4C4u;
label_55f4c4:
    // 0x55f4c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x55f4c8: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x55f4c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x55f4cc: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x55f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x55f4d0: 0x8e760000  lw          $s6, 0x0($s3)
    ctx->pc = 0x55f4d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x55f4d4: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x55F4D4u;
    SET_GPR_U32(ctx, 31, 0x55F4DCu);
    ctx->pc = 0x55F4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F4D4u;
            // 0x55f4d8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F4DCu; }
        if (ctx->pc != 0x55F4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F4DCu; }
        if (ctx->pc != 0x55F4DCu) { return; }
    }
    ctx->pc = 0x55F4DCu;
label_55f4dc:
    // 0x55f4dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x55f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x55f4e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x55F4E0u;
    {
        const bool branch_taken_0x55f4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x55f4e0) {
            ctx->pc = 0x55F4F0u;
            goto label_55f4f0;
        }
    }
    ctx->pc = 0x55F4E8u;
    // 0x55f4e8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x55F4E8u;
    {
        const bool branch_taken_0x55f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55F4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F4E8u;
            // 0x55f4ec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f4e8) {
            ctx->pc = 0x55F5B8u;
            goto label_55f5b8;
        }
    }
    ctx->pc = 0x55F4F0u;
label_55f4f0:
    // 0x55f4f0: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x55F4F0u;
    SET_GPR_U32(ctx, 31, 0x55F4F8u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F4F8u; }
        if (ctx->pc != 0x55F4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F4F8u; }
        if (ctx->pc != 0x55F4F8u) { return; }
    }
    ctx->pc = 0x55F4F8u;
label_55f4f8:
    // 0x55f4f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x55f4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f4fc: 0xc076984  jal         func_1DA610
    ctx->pc = 0x55F4FCu;
    SET_GPR_U32(ctx, 31, 0x55F504u);
    ctx->pc = 0x55F500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F4FCu;
            // 0x55f500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F504u; }
        if (ctx->pc != 0x55F504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F504u; }
        if (ctx->pc != 0x55F504u) { return; }
    }
    ctx->pc = 0x55F504u;
label_55f504:
    // 0x55f504: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x55f504u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f508: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x55f508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x55f50c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x55f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x55f510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55f510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f514: 0xc442dcb0  lwc1        $f2, -0x2350($v0)
    ctx->pc = 0x55f514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x55f518: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x55f518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f51c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x55f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x55f520: 0xc441dcb8  lwc1        $f1, -0x2348($v0)
    ctx->pc = 0x55f520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x55f524: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x55f524u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x55f528: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x55f528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x55f52c: 0xc440dcbc  lwc1        $f0, -0x2344($v0)
    ctx->pc = 0x55f52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x55f530: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x55f530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x55f534: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x55f534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x55f538: 0x8c42dcb4  lw          $v0, -0x234C($v0)
    ctx->pc = 0x55f538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958260)));
    // 0x55f53c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x55f53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x55f540: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x55f540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x55f544: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x55f544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x55f548: 0xc04cca0  jal         func_133280
    ctx->pc = 0x55F548u;
    SET_GPR_U32(ctx, 31, 0x55F550u);
    ctx->pc = 0x55F54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F548u;
            // 0x55f54c: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F550u; }
        if (ctx->pc != 0x55F550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F550u; }
        if (ctx->pc != 0x55F550u) { return; }
    }
    ctx->pc = 0x55F550u;
label_55f550:
    // 0x55f550: 0xc076980  jal         func_1DA600
    ctx->pc = 0x55F550u;
    SET_GPR_U32(ctx, 31, 0x55F558u);
    ctx->pc = 0x55F554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F550u;
            // 0x55f554: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F558u; }
        if (ctx->pc != 0x55F558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F558u; }
        if (ctx->pc != 0x55F558u) { return; }
    }
    ctx->pc = 0x55F558u;
label_55f558:
    // 0x55f558: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x55f558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x55f55c: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x55F55Cu;
    SET_GPR_U32(ctx, 31, 0x55F564u);
    ctx->pc = 0x55F560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F55Cu;
            // 0x55f560: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F564u; }
        if (ctx->pc != 0x55F564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F564u; }
        if (ctx->pc != 0x55F564u) { return; }
    }
    ctx->pc = 0x55F564u;
label_55f564:
    // 0x55f564: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x55f564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x55f568: 0xc461f890  lwc1        $f1, -0x770($v1)
    ctx->pc = 0x55f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x55f56c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x55f56cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x55f570: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x55F570u;
    {
        const bool branch_taken_0x55f570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x55f570) {
            ctx->pc = 0x55F574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55F570u;
            // 0x55f574: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F580u;
            goto label_55f580;
        }
    }
    ctx->pc = 0x55F578u;
    // 0x55f578: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x55F578u;
    {
        const bool branch_taken_0x55f578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55F57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F578u;
            // 0x55f57c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f578) {
            ctx->pc = 0x55F5B8u;
            goto label_55f5b8;
        }
    }
    ctx->pc = 0x55F580u;
label_55f580:
    // 0x55f580: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x55F580u;
    SET_GPR_U32(ctx, 31, 0x55F588u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F588u; }
        if (ctx->pc != 0x55F588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F588u; }
        if (ctx->pc != 0x55F588u) { return; }
    }
    ctx->pc = 0x55F588u;
label_55f588:
    // 0x55f588: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x55f588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f58c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x55f58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x55f590: 0xc04cd60  jal         func_133580
    ctx->pc = 0x55F590u;
    SET_GPR_U32(ctx, 31, 0x55F598u);
    ctx->pc = 0x55F594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F590u;
            // 0x55f594: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F598u; }
        if (ctx->pc != 0x55F598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F598u; }
        if (ctx->pc != 0x55F598u) { return; }
    }
    ctx->pc = 0x55F598u;
label_55f598:
    // 0x55f598: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x55f598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f59c: 0xc04c650  jal         func_131940
    ctx->pc = 0x55F59Cu;
    SET_GPR_U32(ctx, 31, 0x55F5A4u);
    ctx->pc = 0x55F5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F59Cu;
            // 0x55f5a0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F5A4u; }
        if (ctx->pc != 0x55F5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F5A4u; }
        if (ctx->pc != 0x55F5A4u) { return; }
    }
    ctx->pc = 0x55F5A4u;
label_55f5a4:
    // 0x55f5a4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x55f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x55f5a8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x55f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x55f5ac: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x55f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x55f5b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x55f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x55f5b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x55f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_55f5b8:
    // 0x55f5b8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x55f5b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x55f5bc: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x55F5BCu;
    {
        const bool branch_taken_0x55f5bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x55F5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F5BCu;
            // 0x55f5c0: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f5bc) {
            ctx->pc = 0x55F670u;
            goto label_55f670;
        }
    }
    ctx->pc = 0x55F5C4u;
    // 0x55f5c4: 0xc68c0170  lwc1        $f12, 0x170($s4)
    ctx->pc = 0x55f5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x55f5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55f5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f5cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55f5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f5d0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x55f5d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x55f5d4: 0xc04ce50  jal         func_133940
    ctx->pc = 0x55F5D4u;
    SET_GPR_U32(ctx, 31, 0x55F5DCu);
    ctx->pc = 0x55F5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F5D4u;
            // 0x55f5d8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F5DCu; }
        if (ctx->pc != 0x55F5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F5DCu; }
        if (ctx->pc != 0x55F5DCu) { return; }
    }
    ctx->pc = 0x55F5DCu;
label_55f5dc:
    // 0x55f5dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x55f5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55f5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f5e4: 0xc04cd60  jal         func_133580
    ctx->pc = 0x55F5E4u;
    SET_GPR_U32(ctx, 31, 0x55F5ECu);
    ctx->pc = 0x55F5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F5E4u;
            // 0x55f5e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F5ECu; }
        if (ctx->pc != 0x55F5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F5ECu; }
        if (ctx->pc != 0x55F5ECu) { return; }
    }
    ctx->pc = 0x55F5ECu;
label_55f5ec:
    // 0x55f5ec: 0x928200d8  lbu         $v0, 0xD8($s4)
    ctx->pc = 0x55f5ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x55f5f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x55F5F0u;
    {
        const bool branch_taken_0x55f5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f5f0) {
            ctx->pc = 0x55F5F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55F5F0u;
            // 0x55f5f4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F60Cu;
            goto label_55f60c;
        }
    }
    ctx->pc = 0x55F5F8u;
    // 0x55f5f8: 0x3c023e38  lui         $v0, 0x3E38
    ctx->pc = 0x55f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15928 << 16));
    // 0x55f5fc: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x55f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x55f600: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55f600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x55f604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x55F604u;
    {
        const bool branch_taken_0x55f604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55F608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F604u;
            // 0x55f608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f604) {
            ctx->pc = 0x55F614u;
            goto label_55f614;
        }
    }
    ctx->pc = 0x55F60Cu;
label_55f60c:
    // 0x55f60c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55f60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x55f610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55f610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55f614:
    // 0x55f614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55f614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f618: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x55f618u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x55f61c: 0xc04ce50  jal         func_133940
    ctx->pc = 0x55F61Cu;
    SET_GPR_U32(ctx, 31, 0x55F624u);
    ctx->pc = 0x55F620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F61Cu;
            // 0x55f620: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F624u; }
        if (ctx->pc != 0x55F624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F624u; }
        if (ctx->pc != 0x55F624u) { return; }
    }
    ctx->pc = 0x55F624u;
label_55f624:
    // 0x55f624: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x55f624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x55f628: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x55f628u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x55f62c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x55f62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55f630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f634: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x55f634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f638: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x55f638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x55f63c: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x55F63Cu;
    SET_GPR_U32(ctx, 31, 0x55F644u);
    ctx->pc = 0x55F640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F63Cu;
            // 0x55f640: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F644u; }
        if (ctx->pc != 0x55F644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F644u; }
        if (ctx->pc != 0x55F644u) { return; }
    }
    ctx->pc = 0x55F644u;
label_55f644:
    // 0x55f644: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x55f644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x55f648: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x55f648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x55f64c: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x55f64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x55f650: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x55F650u;
    SET_GPR_U32(ctx, 31, 0x55F658u);
    ctx->pc = 0x55F654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F650u;
            // 0x55f654: 0xc68c0168  lwc1        $f12, 0x168($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F658u; }
        if (ctx->pc != 0x55F658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F658u; }
        if (ctx->pc != 0x55F658u) { return; }
    }
    ctx->pc = 0x55F658u;
label_55f658:
    // 0x55f658: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x55f658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x55f65c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x55f65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f660: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x55f660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f664: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x55f664u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x55f668: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x55F668u;
    SET_GPR_U32(ctx, 31, 0x55F670u);
    ctx->pc = 0x55F66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F668u;
            // 0x55f66c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F670u; }
        if (ctx->pc != 0x55F670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F670u; }
        if (ctx->pc != 0x55F670u) { return; }
    }
    ctx->pc = 0x55F670u;
label_55f670:
    // 0x55f670: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x55f670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x55f674: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x55f674u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x55f678: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x55f678u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x55f67c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x55f67cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x55f680: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x55f680u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x55f684: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x55f684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x55f688: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55f688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x55f68c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55f68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x55f690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55f690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x55f694: 0x3e00008  jr          $ra
    ctx->pc = 0x55F694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55F698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F694u;
            // 0x55f698: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55F69Cu;
    // 0x55f69c: 0x0  nop
    ctx->pc = 0x55f69cu;
    // NOP
    // 0x55f6a0: 0x80e3584  j           func_38D610
    ctx->pc = 0x55F6A0u;
    ctx->pc = 0x38D610u;
    if (runtime->hasFunction(0x38D610u)) {
        auto targetFn = runtime->lookupFunction(0x38D610u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0038D610_0x38d610(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x55F6A8u;
    // 0x55f6a8: 0x0  nop
    ctx->pc = 0x55f6a8u;
    // NOP
    // 0x55f6ac: 0x0  nop
    ctx->pc = 0x55f6acu;
    // NOP
}
