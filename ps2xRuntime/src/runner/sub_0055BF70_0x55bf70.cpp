#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055BF70
// Address: 0x55bf70 - 0x55c150
void sub_0055BF70_0x55bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055BF70_0x55bf70");
#endif

    switch (ctx->pc) {
        case 0x55bf70u: goto label_55bf70;
        case 0x55bf74u: goto label_55bf74;
        case 0x55bf78u: goto label_55bf78;
        case 0x55bf7cu: goto label_55bf7c;
        case 0x55bf80u: goto label_55bf80;
        case 0x55bf84u: goto label_55bf84;
        case 0x55bf88u: goto label_55bf88;
        case 0x55bf8cu: goto label_55bf8c;
        case 0x55bf90u: goto label_55bf90;
        case 0x55bf94u: goto label_55bf94;
        case 0x55bf98u: goto label_55bf98;
        case 0x55bf9cu: goto label_55bf9c;
        case 0x55bfa0u: goto label_55bfa0;
        case 0x55bfa4u: goto label_55bfa4;
        case 0x55bfa8u: goto label_55bfa8;
        case 0x55bfacu: goto label_55bfac;
        case 0x55bfb0u: goto label_55bfb0;
        case 0x55bfb4u: goto label_55bfb4;
        case 0x55bfb8u: goto label_55bfb8;
        case 0x55bfbcu: goto label_55bfbc;
        case 0x55bfc0u: goto label_55bfc0;
        case 0x55bfc4u: goto label_55bfc4;
        case 0x55bfc8u: goto label_55bfc8;
        case 0x55bfccu: goto label_55bfcc;
        case 0x55bfd0u: goto label_55bfd0;
        case 0x55bfd4u: goto label_55bfd4;
        case 0x55bfd8u: goto label_55bfd8;
        case 0x55bfdcu: goto label_55bfdc;
        case 0x55bfe0u: goto label_55bfe0;
        case 0x55bfe4u: goto label_55bfe4;
        case 0x55bfe8u: goto label_55bfe8;
        case 0x55bfecu: goto label_55bfec;
        case 0x55bff0u: goto label_55bff0;
        case 0x55bff4u: goto label_55bff4;
        case 0x55bff8u: goto label_55bff8;
        case 0x55bffcu: goto label_55bffc;
        case 0x55c000u: goto label_55c000;
        case 0x55c004u: goto label_55c004;
        case 0x55c008u: goto label_55c008;
        case 0x55c00cu: goto label_55c00c;
        case 0x55c010u: goto label_55c010;
        case 0x55c014u: goto label_55c014;
        case 0x55c018u: goto label_55c018;
        case 0x55c01cu: goto label_55c01c;
        case 0x55c020u: goto label_55c020;
        case 0x55c024u: goto label_55c024;
        case 0x55c028u: goto label_55c028;
        case 0x55c02cu: goto label_55c02c;
        case 0x55c030u: goto label_55c030;
        case 0x55c034u: goto label_55c034;
        case 0x55c038u: goto label_55c038;
        case 0x55c03cu: goto label_55c03c;
        case 0x55c040u: goto label_55c040;
        case 0x55c044u: goto label_55c044;
        case 0x55c048u: goto label_55c048;
        case 0x55c04cu: goto label_55c04c;
        case 0x55c050u: goto label_55c050;
        case 0x55c054u: goto label_55c054;
        case 0x55c058u: goto label_55c058;
        case 0x55c05cu: goto label_55c05c;
        case 0x55c060u: goto label_55c060;
        case 0x55c064u: goto label_55c064;
        case 0x55c068u: goto label_55c068;
        case 0x55c06cu: goto label_55c06c;
        case 0x55c070u: goto label_55c070;
        case 0x55c074u: goto label_55c074;
        case 0x55c078u: goto label_55c078;
        case 0x55c07cu: goto label_55c07c;
        case 0x55c080u: goto label_55c080;
        case 0x55c084u: goto label_55c084;
        case 0x55c088u: goto label_55c088;
        case 0x55c08cu: goto label_55c08c;
        case 0x55c090u: goto label_55c090;
        case 0x55c094u: goto label_55c094;
        case 0x55c098u: goto label_55c098;
        case 0x55c09cu: goto label_55c09c;
        case 0x55c0a0u: goto label_55c0a0;
        case 0x55c0a4u: goto label_55c0a4;
        case 0x55c0a8u: goto label_55c0a8;
        case 0x55c0acu: goto label_55c0ac;
        case 0x55c0b0u: goto label_55c0b0;
        case 0x55c0b4u: goto label_55c0b4;
        case 0x55c0b8u: goto label_55c0b8;
        case 0x55c0bcu: goto label_55c0bc;
        case 0x55c0c0u: goto label_55c0c0;
        case 0x55c0c4u: goto label_55c0c4;
        case 0x55c0c8u: goto label_55c0c8;
        case 0x55c0ccu: goto label_55c0cc;
        case 0x55c0d0u: goto label_55c0d0;
        case 0x55c0d4u: goto label_55c0d4;
        case 0x55c0d8u: goto label_55c0d8;
        case 0x55c0dcu: goto label_55c0dc;
        case 0x55c0e0u: goto label_55c0e0;
        case 0x55c0e4u: goto label_55c0e4;
        case 0x55c0e8u: goto label_55c0e8;
        case 0x55c0ecu: goto label_55c0ec;
        case 0x55c0f0u: goto label_55c0f0;
        case 0x55c0f4u: goto label_55c0f4;
        case 0x55c0f8u: goto label_55c0f8;
        case 0x55c0fcu: goto label_55c0fc;
        case 0x55c100u: goto label_55c100;
        case 0x55c104u: goto label_55c104;
        case 0x55c108u: goto label_55c108;
        case 0x55c10cu: goto label_55c10c;
        case 0x55c110u: goto label_55c110;
        case 0x55c114u: goto label_55c114;
        case 0x55c118u: goto label_55c118;
        case 0x55c11cu: goto label_55c11c;
        case 0x55c120u: goto label_55c120;
        case 0x55c124u: goto label_55c124;
        case 0x55c128u: goto label_55c128;
        case 0x55c12cu: goto label_55c12c;
        case 0x55c130u: goto label_55c130;
        case 0x55c134u: goto label_55c134;
        case 0x55c138u: goto label_55c138;
        case 0x55c13cu: goto label_55c13c;
        case 0x55c140u: goto label_55c140;
        case 0x55c144u: goto label_55c144;
        case 0x55c148u: goto label_55c148;
        case 0x55c14cu: goto label_55c14c;
        default: break;
    }

    ctx->pc = 0x55bf70u;

label_55bf70:
    // 0x55bf70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x55bf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_55bf74:
    // 0x55bf74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55bf78:
    // 0x55bf78: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x55bf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_55bf7c:
    // 0x55bf7c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x55bf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_55bf80:
    // 0x55bf80: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x55bf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_55bf84:
    // 0x55bf84: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x55bf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_55bf88:
    // 0x55bf88: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x55bf88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55bf8c:
    // 0x55bf8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x55bf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_55bf90:
    // 0x55bf90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x55bf90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55bf94:
    // 0x55bf94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x55bf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_55bf98:
    // 0x55bf98: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x55bf98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_55bf9c:
    // 0x55bf9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x55bf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_55bfa0:
    // 0x55bfa0: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x55bfa0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_55bfa4:
    // 0x55bfa4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x55bfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_55bfa8:
    // 0x55bfa8: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x55bfa8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_55bfac:
    // 0x55bfac: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x55bfacu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_55bfb0:
    // 0x55bfb0: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x55bfb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
label_55bfb4:
    // 0x55bfb4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x55bfb4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_55bfb8:
    // 0x55bfb8: 0x26312100  addiu       $s1, $s1, 0x2100
    ctx->pc = 0x55bfb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
label_55bfbc:
    // 0x55bfbc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x55bfbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_55bfc0:
    // 0x55bfc0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55bfc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55bfc4:
    // 0x55bfc4: 0x8c5689e0  lw          $s6, -0x7620($v0)
    ctx->pc = 0x55bfc4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_55bfc8:
    // 0x55bfc8: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x55bfc8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_55bfcc:
    // 0x55bfcc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x55bfccu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_55bfd0:
    // 0x55bfd0: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x55bfd0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_55bfd4:
    // 0x55bfd4: 0x6810016  bgez        $s4, . + 4 + (0x16 << 2)
label_55bfd8:
    if (ctx->pc == 0x55BFD8u) {
        ctx->pc = 0x55BFD8u;
            // 0x55bfd8: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x55BFDCu;
        goto label_55bfdc;
    }
    ctx->pc = 0x55BFD4u;
    {
        const bool branch_taken_0x55bfd4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x55BFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55BFD4u;
            // 0x55bfd8: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55bfd4) {
            ctx->pc = 0x55C030u;
            goto label_55c030;
        }
    }
    ctx->pc = 0x55BFDCu;
label_55bfdc:
    // 0x55bfdc: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x55bfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_55bfe0:
    // 0x55bfe0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x55bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55bfe4:
    // 0x55bfe4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x55bfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_55bfe8:
    // 0x55bfe8: 0x24c6f400  addiu       $a2, $a2, -0xC00
    ctx->pc = 0x55bfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964224));
label_55bfec:
    // 0x55bfec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x55bfecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55bff0:
    // 0x55bff0: 0xc043be4  jal         func_10EF90
label_55bff4:
    if (ctx->pc == 0x55BFF4u) {
        ctx->pc = 0x55BFF4u;
            // 0x55bff4: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x55BFF8u;
        goto label_55bff8;
    }
    ctx->pc = 0x55BFF0u;
    SET_GPR_U32(ctx, 31, 0x55BFF8u);
    ctx->pc = 0x55BFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BFF0u;
            // 0x55bff4: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BFF8u; }
        if (ctx->pc != 0x55BFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BFF8u; }
        if (ctx->pc != 0x55BFF8u) { return; }
    }
    ctx->pc = 0x55BFF8u;
label_55bff8:
    // 0x55bff8: 0xc04b02e  jal         func_12C0B8
label_55bffc:
    if (ctx->pc == 0x55BFFCu) {
        ctx->pc = 0x55BFFCu;
            // 0x55bffc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55C000u;
        goto label_55c000;
    }
    ctx->pc = 0x55BFF8u;
    SET_GPR_U32(ctx, 31, 0x55C000u);
    ctx->pc = 0x55BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BFF8u;
            // 0x55bffc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C000u; }
        if (ctx->pc != 0x55C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C000u; }
        if (ctx->pc != 0x55C000u) { return; }
    }
    ctx->pc = 0x55C000u;
label_55c000:
    // 0x55c000: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x55c000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_55c004:
    // 0x55c004: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
label_55c008:
    if (ctx->pc == 0x55C008u) {
        ctx->pc = 0x55C00Cu;
        goto label_55c00c;
    }
    ctx->pc = 0x55C004u;
    {
        const bool branch_taken_0x55c004 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x55c004) {
            ctx->pc = 0x55C030u;
            goto label_55c030;
        }
    }
    ctx->pc = 0x55C00Cu;
label_55c00c:
    // 0x55c00c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x55c00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55c010:
    // 0x55c010: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x55c010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_55c014:
    // 0x55c014: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x55c014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_55c018:
    // 0x55c018: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x55c018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_55c01c:
    // 0x55c01c: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x55c01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_55c020:
    // 0x55c020: 0x3a040  sll         $s4, $v1, 1
    ctx->pc = 0x55c020u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_55c024:
    // 0x55c024: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_55c028:
    if (ctx->pc == 0x55C028u) {
        ctx->pc = 0x55C02Cu;
        goto label_55c02c;
    }
    ctx->pc = 0x55C024u;
    {
        const bool branch_taken_0x55c024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x55c024) {
            ctx->pc = 0x55C010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55c010;
        }
    }
    ctx->pc = 0x55C02Cu;
label_55c02c:
    // 0x55c02c: 0x0  nop
    ctx->pc = 0x55c02cu;
    // NOP
label_55c030:
    // 0x55c030: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55c030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_55c034:
    // 0x55c034: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x55c034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_55c038:
    // 0x55c038: 0xc0506ac  jal         func_141AB0
label_55c03c:
    if (ctx->pc == 0x55C03Cu) {
        ctx->pc = 0x55C03Cu;
            // 0x55c03c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C040u;
        goto label_55c040;
    }
    ctx->pc = 0x55C038u;
    SET_GPR_U32(ctx, 31, 0x55C040u);
    ctx->pc = 0x55C03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C038u;
            // 0x55c03c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C040u; }
        if (ctx->pc != 0x55C040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C040u; }
        if (ctx->pc != 0x55C040u) { return; }
    }
    ctx->pc = 0x55C040u;
label_55c040:
    // 0x55c040: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x55c040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_55c044:
    // 0x55c044: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x55c044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_55c048:
    // 0x55c048: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55c048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55c04c:
    // 0x55c04c: 0x320f809  jalr        $t9
label_55c050:
    if (ctx->pc == 0x55C050u) {
        ctx->pc = 0x55C050u;
            // 0x55c050: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55C054u;
        goto label_55c054;
    }
    ctx->pc = 0x55C04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55C054u);
        ctx->pc = 0x55C050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C04Cu;
            // 0x55c050: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55C054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55C054u; }
            if (ctx->pc != 0x55C054u) { return; }
        }
        }
    }
    ctx->pc = 0x55C054u;
label_55c054:
    // 0x55c054: 0x2b4001b  divu        $zero, $s5, $s4
    ctx->pc = 0x55c054u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_55c058:
    // 0x55c058: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x55c058u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_55c05c:
    // 0x55c05c: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x55c05cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_55c060:
    // 0x55c060: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55c060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55c064:
    // 0x55c064: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55c064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55c068:
    // 0x55c068: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x55c068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55c06c:
    // 0x55c06c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55c06cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55c070:
    // 0x55c070: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55c070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55c074:
    // 0x55c074: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55c074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55c078:
    // 0x55c078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55c078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55c07c:
    // 0x55c07c: 0x0  nop
    ctx->pc = 0x55c07cu;
    // NOP
label_55c080:
    // 0x55c080: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55c080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55c084:
    // 0x55c084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55c084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55c088:
    // 0x55c088: 0x0  nop
    ctx->pc = 0x55c088u;
    // NOP
label_55c08c:
    // 0x55c08c: 0x46170018  adda.s      $f0, $f23
    ctx->pc = 0x55c08cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_55c090:
    // 0x55c090: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55c090u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55c094:
    // 0x55c094: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55c094u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55c098:
    // 0x55c098: 0x2812  mflo        $a1
    ctx->pc = 0x55c098u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_55c09c:
    // 0x55c09c: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x55c09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_55c0a0:
    // 0x55c0a0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x55c0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_55c0a4:
    // 0x55c0a4: 0x2458021  addu        $s0, $s2, $a1
    ctx->pc = 0x55c0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_55c0a8:
    // 0x55c0a8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x55c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55c0ac:
    // 0x55c0ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55c0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55c0b0:
    // 0x55c0b0: 0x46150b9c  madd.s      $f14, $f1, $f21
    ctx->pc = 0x55c0b0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55c0b4:
    // 0x55c0b4: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x55c0b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_55c0b8:
    // 0x55c0b8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x55c0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55c0bc:
    // 0x55c0bc: 0xc0bc284  jal         func_2F0A10
label_55c0c0:
    if (ctx->pc == 0x55C0C0u) {
        ctx->pc = 0x55C0C0u;
            // 0x55c0c0: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55C0C4u;
        goto label_55c0c4;
    }
    ctx->pc = 0x55C0BCu;
    SET_GPR_U32(ctx, 31, 0x55C0C4u);
    ctx->pc = 0x55C0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C0BCu;
            // 0x55c0c0: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C0C4u; }
        if (ctx->pc != 0x55C0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C0C4u; }
        if (ctx->pc != 0x55C0C4u) { return; }
    }
    ctx->pc = 0x55C0C4u;
label_55c0c4:
    // 0x55c0c4: 0x2b4001b  divu        $zero, $s5, $s4
    ctx->pc = 0x55c0c4u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_55c0c8:
    // 0x55c0c8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x55c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_55c0cc:
    // 0x55c0cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55c0ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55c0d0:
    // 0x55c0d0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x55c0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_55c0d4:
    // 0x55c0d4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x55c0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55c0d8:
    // 0x55c0d8: 0x141fc2  srl         $v1, $s4, 31
    ctx->pc = 0x55c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
label_55c0dc:
    // 0x55c0dc: 0x46170018  adda.s      $f0, $f23
    ctx->pc = 0x55c0dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_55c0e0:
    // 0x55c0e0: 0xa810  mfhi        $s5
    ctx->pc = 0x55c0e0u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_55c0e4:
    // 0x55c0e4: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x55c0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55c0e8:
    // 0x55c0e8: 0x1010  mfhi        $v0
    ctx->pc = 0x55c0e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55c0ec:
    // 0x55c0ec: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x55c0ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_55c0f0:
    // 0x55c0f0: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x55c0f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55c0f4:
    // 0x55c0f4: 0x1680ffd7  bnez        $s4, . + 4 + (-0x29 << 2)
label_55c0f8:
    if (ctx->pc == 0x55C0F8u) {
        ctx->pc = 0x55C0F8u;
            // 0x55c0f8: 0x46150ddc  madd.s      $f23, $f1, $f21 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
        ctx->pc = 0x55C0FCu;
        goto label_55c0fc;
    }
    ctx->pc = 0x55C0F4u;
    {
        const bool branch_taken_0x55c0f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x55C0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C0F4u;
            // 0x55c0f8: 0x46150ddc  madd.s      $f23, $f1, $f21 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55c0f4) {
            ctx->pc = 0x55C054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55c054;
        }
    }
    ctx->pc = 0x55C0FCu;
label_55c0fc:
    // 0x55c0fc: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x55c0fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_55c100:
    // 0x55c100: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55c100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55c104:
    // 0x55c104: 0x320f809  jalr        $t9
label_55c108:
    if (ctx->pc == 0x55C108u) {
        ctx->pc = 0x55C108u;
            // 0x55c108: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55C10Cu;
        goto label_55c10c;
    }
    ctx->pc = 0x55C104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55C10Cu);
        ctx->pc = 0x55C108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C104u;
            // 0x55c108: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55C10Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55C10Cu; }
            if (ctx->pc != 0x55C10Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55C10Cu;
label_55c10c:
    // 0x55c10c: 0x4600b806  mov.s       $f0, $f23
    ctx->pc = 0x55c10cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
label_55c110:
    // 0x55c110: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x55c110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_55c114:
    // 0x55c114: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x55c114u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55c118:
    // 0x55c118: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x55c118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_55c11c:
    // 0x55c11c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x55c11cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55c120:
    // 0x55c120: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x55c120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_55c124:
    // 0x55c124: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x55c124u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55c128:
    // 0x55c128: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x55c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55c12c:
    // 0x55c12c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x55c12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55c130:
    // 0x55c130: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55c134:
    // 0x55c134: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55c134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55c138:
    // 0x55c138: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x55c138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55c13c:
    // 0x55c13c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x55c13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55c140:
    // 0x55c140: 0x3e00008  jr          $ra
label_55c144:
    if (ctx->pc == 0x55C144u) {
        ctx->pc = 0x55C144u;
            // 0x55c144: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x55C148u;
        goto label_55c148;
    }
    ctx->pc = 0x55C140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55C144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55C140u;
            // 0x55c144: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55C148u;
label_55c148:
    // 0x55c148: 0x0  nop
    ctx->pc = 0x55c148u;
    // NOP
label_55c14c:
    // 0x55c14c: 0x0  nop
    ctx->pc = 0x55c14cu;
    // NOP
}
