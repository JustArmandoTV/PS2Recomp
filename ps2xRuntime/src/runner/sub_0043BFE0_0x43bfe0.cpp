#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043BFE0
// Address: 0x43bfe0 - 0x43c160
void sub_0043BFE0_0x43bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043BFE0_0x43bfe0");
#endif

    switch (ctx->pc) {
        case 0x43bffcu: goto label_43bffc;
        case 0x43c01cu: goto label_43c01c;
        case 0x43c054u: goto label_43c054;
        case 0x43c074u: goto label_43c074;
        case 0x43c090u: goto label_43c090;
        case 0x43c0f0u: goto label_43c0f0;
        case 0x43c0fcu: goto label_43c0fc;
        case 0x43c108u: goto label_43c108;
        case 0x43c114u: goto label_43c114;
        case 0x43c120u: goto label_43c120;
        case 0x43c12cu: goto label_43c12c;
        case 0x43c144u: goto label_43c144;
        default: break;
    }

    ctx->pc = 0x43bfe0u;

    // 0x43bfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43bfe4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x43bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x43bfe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43bfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43bfec: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x43bfecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x43bff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43bff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43bff4: 0xc10f090  jal         func_43C240
    ctx->pc = 0x43BFF4u;
    SET_GPR_U32(ctx, 31, 0x43BFFCu);
    ctx->pc = 0x43BFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BFF4u;
            // 0x43bff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43C240u;
    if (runtime->hasFunction(0x43C240u)) {
        auto targetFn = runtime->lookupFunction(0x43C240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BFFCu; }
        if (ctx->pc != 0x43BFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043C240_0x43c240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BFFCu; }
        if (ctx->pc != 0x43BFFCu) { return; }
    }
    ctx->pc = 0x43BFFCu;
label_43bffc:
    // 0x43bffc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43c000: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43c000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43c004: 0x2463d060  addiu       $v1, $v1, -0x2FA0
    ctx->pc = 0x43c004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955104));
    // 0x43c008: 0x2442d098  addiu       $v0, $v0, -0x2F68
    ctx->pc = 0x43c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955160));
    // 0x43c00c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43c00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x43c010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43c010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c014: 0xc10f08c  jal         func_43C230
    ctx->pc = 0x43C014u;
    SET_GPR_U32(ctx, 31, 0x43C01Cu);
    ctx->pc = 0x43C018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C014u;
            // 0x43c018: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43C230u;
    if (runtime->hasFunction(0x43C230u)) {
        auto targetFn = runtime->lookupFunction(0x43C230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C01Cu; }
        if (ctx->pc != 0x43C01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043C230_0x43c230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C01Cu; }
        if (ctx->pc != 0x43C01Cu) { return; }
    }
    ctx->pc = 0x43C01Cu;
label_43c01c:
    // 0x43c01c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x43c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x43c020: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x43c020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x43c024: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43c024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43c028: 0x2442cfb0  addiu       $v0, $v0, -0x3050
    ctx->pc = 0x43c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954928));
    // 0x43c02c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x43c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x43c030: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43c030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43c034: 0x2442cfe8  addiu       $v0, $v0, -0x3018
    ctx->pc = 0x43c034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954984));
    // 0x43c038: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x43c038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x43c03c: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x43c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x43c040: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43c040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x43c044: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x43c044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x43c048: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x43c048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x43c04c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x43C04Cu;
    SET_GPR_U32(ctx, 31, 0x43C054u);
    ctx->pc = 0x43C050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C04Cu;
            // 0x43c050: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C054u; }
        if (ctx->pc != 0x43C054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C054u; }
        if (ctx->pc != 0x43C054u) { return; }
    }
    ctx->pc = 0x43C054u;
label_43c054:
    // 0x43c054: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x43c054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x43c058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43c058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c05c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43C05Cu;
    {
        const bool branch_taken_0x43c05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C05Cu;
            // 0x43c060: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c05c) {
            ctx->pc = 0x43C078u;
            goto label_43c078;
        }
    }
    ctx->pc = 0x43C064u;
    // 0x43c064: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x43c064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x43c068: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x43c068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x43c06c: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x43C06Cu;
    SET_GPR_U32(ctx, 31, 0x43C074u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C074u; }
        if (ctx->pc != 0x43C074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C074u; }
        if (ctx->pc != 0x43C074u) { return; }
    }
    ctx->pc = 0x43C074u;
label_43c074:
    // 0x43c074: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43c074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43c078:
    // 0x43c078: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x43c078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x43c07c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43c07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43c080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43c084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43c084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43c088: 0x3e00008  jr          $ra
    ctx->pc = 0x43C088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43C08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C088u;
            // 0x43c08c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43C090u;
label_43c090:
    // 0x43c090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43c094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43c094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43c098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43c098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43c09c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43c09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43c0a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43c0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c0a4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x43C0A4u;
    {
        const bool branch_taken_0x43c0a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C0A4u;
            // 0x43c0a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c0a4) {
            ctx->pc = 0x43C144u;
            goto label_43c144;
        }
    }
    ctx->pc = 0x43C0ACu;
    // 0x43c0ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43c0b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43c0b4: 0x2463d060  addiu       $v1, $v1, -0x2FA0
    ctx->pc = 0x43c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955104));
    // 0x43c0b8: 0x2442d098  addiu       $v0, $v0, -0x2F68
    ctx->pc = 0x43c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955160));
    // 0x43c0bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x43c0c0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x43C0C0u;
    {
        const bool branch_taken_0x43c0c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C0C0u;
            // 0x43c0c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c0c0) {
            ctx->pc = 0x43C12Cu;
            goto label_43c12c;
        }
    }
    ctx->pc = 0x43C0C8u;
    // 0x43c0c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43c0cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43c0d0: 0x2463d010  addiu       $v1, $v1, -0x2FF0
    ctx->pc = 0x43c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955024));
    // 0x43c0d4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x43c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x43c0d8: 0x2442d048  addiu       $v0, $v0, -0x2FB8
    ctx->pc = 0x43c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955080));
    // 0x43c0dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x43c0e0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x43c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x43c0e4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x43c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x43c0e8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x43C0E8u;
    SET_GPR_U32(ctx, 31, 0x43C0F0u);
    ctx->pc = 0x43C0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C0E8u;
            // 0x43c0ec: 0x24a5bac0  addiu       $a1, $a1, -0x4540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C0F0u; }
        if (ctx->pc != 0x43C0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C0F0u; }
        if (ctx->pc != 0x43C0F0u) { return; }
    }
    ctx->pc = 0x43C0F0u;
label_43c0f0:
    // 0x43c0f0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x43c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x43c0f4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x43C0F4u;
    SET_GPR_U32(ctx, 31, 0x43C0FCu);
    ctx->pc = 0x43C0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C0F4u;
            // 0x43c0f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C0FCu; }
        if (ctx->pc != 0x43C0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C0FCu; }
        if (ctx->pc != 0x43C0FCu) { return; }
    }
    ctx->pc = 0x43C0FCu;
label_43c0fc:
    // 0x43c0fc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x43c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x43c100: 0xc10f070  jal         func_43C1C0
    ctx->pc = 0x43C100u;
    SET_GPR_U32(ctx, 31, 0x43C108u);
    ctx->pc = 0x43C104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C100u;
            // 0x43c104: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43C1C0u;
    if (runtime->hasFunction(0x43C1C0u)) {
        auto targetFn = runtime->lookupFunction(0x43C1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C108u; }
        if (ctx->pc != 0x43C108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043C1C0_0x43c1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C108u; }
        if (ctx->pc != 0x43C108u) { return; }
    }
    ctx->pc = 0x43C108u;
label_43c108:
    // 0x43c108: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x43c108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x43c10c: 0xc10f070  jal         func_43C1C0
    ctx->pc = 0x43C10Cu;
    SET_GPR_U32(ctx, 31, 0x43C114u);
    ctx->pc = 0x43C110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C10Cu;
            // 0x43c110: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43C1C0u;
    if (runtime->hasFunction(0x43C1C0u)) {
        auto targetFn = runtime->lookupFunction(0x43C1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C114u; }
        if (ctx->pc != 0x43C114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043C1C0_0x43c1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C114u; }
        if (ctx->pc != 0x43C114u) { return; }
    }
    ctx->pc = 0x43C114u;
label_43c114:
    // 0x43c114: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x43c114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x43c118: 0xc10f058  jal         func_43C160
    ctx->pc = 0x43C118u;
    SET_GPR_U32(ctx, 31, 0x43C120u);
    ctx->pc = 0x43C11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C118u;
            // 0x43c11c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43C160u;
    if (runtime->hasFunction(0x43C160u)) {
        auto targetFn = runtime->lookupFunction(0x43C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C120u; }
        if (ctx->pc != 0x43C120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043C160_0x43c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C120u; }
        if (ctx->pc != 0x43C120u) { return; }
    }
    ctx->pc = 0x43C120u;
label_43c120:
    // 0x43c120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43c120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c124: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x43C124u;
    SET_GPR_U32(ctx, 31, 0x43C12Cu);
    ctx->pc = 0x43C128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C124u;
            // 0x43c128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C12Cu; }
        if (ctx->pc != 0x43C12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C12Cu; }
        if (ctx->pc != 0x43C12Cu) { return; }
    }
    ctx->pc = 0x43C12Cu;
label_43c12c:
    // 0x43c12c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x43c12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x43c130: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43c130u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x43c134: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43C134u;
    {
        const bool branch_taken_0x43c134 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43c134) {
            ctx->pc = 0x43C138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43C134u;
            // 0x43c138: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43C148u;
            goto label_43c148;
        }
    }
    ctx->pc = 0x43C13Cu;
    // 0x43c13c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43C13Cu;
    SET_GPR_U32(ctx, 31, 0x43C144u);
    ctx->pc = 0x43C140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C13Cu;
            // 0x43c140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C144u; }
        if (ctx->pc != 0x43C144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C144u; }
        if (ctx->pc != 0x43C144u) { return; }
    }
    ctx->pc = 0x43C144u;
label_43c144:
    // 0x43c144: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43c144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43c148:
    // 0x43c148: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43c148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43c14c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43c14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43c150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43c150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43c154: 0x3e00008  jr          $ra
    ctx->pc = 0x43C154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43C158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C154u;
            // 0x43c158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43C15Cu;
    // 0x43c15c: 0x0  nop
    ctx->pc = 0x43c15cu;
    // NOP
}
