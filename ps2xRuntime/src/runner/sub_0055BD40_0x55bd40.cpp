#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055BD40
// Address: 0x55bd40 - 0x55bf20
void sub_0055BD40_0x55bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055BD40_0x55bd40");
#endif

    switch (ctx->pc) {
        case 0x55bd40u: goto label_55bd40;
        case 0x55bd44u: goto label_55bd44;
        case 0x55bd48u: goto label_55bd48;
        case 0x55bd4cu: goto label_55bd4c;
        case 0x55bd50u: goto label_55bd50;
        case 0x55bd54u: goto label_55bd54;
        case 0x55bd58u: goto label_55bd58;
        case 0x55bd5cu: goto label_55bd5c;
        case 0x55bd60u: goto label_55bd60;
        case 0x55bd64u: goto label_55bd64;
        case 0x55bd68u: goto label_55bd68;
        case 0x55bd6cu: goto label_55bd6c;
        case 0x55bd70u: goto label_55bd70;
        case 0x55bd74u: goto label_55bd74;
        case 0x55bd78u: goto label_55bd78;
        case 0x55bd7cu: goto label_55bd7c;
        case 0x55bd80u: goto label_55bd80;
        case 0x55bd84u: goto label_55bd84;
        case 0x55bd88u: goto label_55bd88;
        case 0x55bd8cu: goto label_55bd8c;
        case 0x55bd90u: goto label_55bd90;
        case 0x55bd94u: goto label_55bd94;
        case 0x55bd98u: goto label_55bd98;
        case 0x55bd9cu: goto label_55bd9c;
        case 0x55bda0u: goto label_55bda0;
        case 0x55bda4u: goto label_55bda4;
        case 0x55bda8u: goto label_55bda8;
        case 0x55bdacu: goto label_55bdac;
        case 0x55bdb0u: goto label_55bdb0;
        case 0x55bdb4u: goto label_55bdb4;
        case 0x55bdb8u: goto label_55bdb8;
        case 0x55bdbcu: goto label_55bdbc;
        case 0x55bdc0u: goto label_55bdc0;
        case 0x55bdc4u: goto label_55bdc4;
        case 0x55bdc8u: goto label_55bdc8;
        case 0x55bdccu: goto label_55bdcc;
        case 0x55bdd0u: goto label_55bdd0;
        case 0x55bdd4u: goto label_55bdd4;
        case 0x55bdd8u: goto label_55bdd8;
        case 0x55bddcu: goto label_55bddc;
        case 0x55bde0u: goto label_55bde0;
        case 0x55bde4u: goto label_55bde4;
        case 0x55bde8u: goto label_55bde8;
        case 0x55bdecu: goto label_55bdec;
        case 0x55bdf0u: goto label_55bdf0;
        case 0x55bdf4u: goto label_55bdf4;
        case 0x55bdf8u: goto label_55bdf8;
        case 0x55bdfcu: goto label_55bdfc;
        case 0x55be00u: goto label_55be00;
        case 0x55be04u: goto label_55be04;
        case 0x55be08u: goto label_55be08;
        case 0x55be0cu: goto label_55be0c;
        case 0x55be10u: goto label_55be10;
        case 0x55be14u: goto label_55be14;
        case 0x55be18u: goto label_55be18;
        case 0x55be1cu: goto label_55be1c;
        case 0x55be20u: goto label_55be20;
        case 0x55be24u: goto label_55be24;
        case 0x55be28u: goto label_55be28;
        case 0x55be2cu: goto label_55be2c;
        case 0x55be30u: goto label_55be30;
        case 0x55be34u: goto label_55be34;
        case 0x55be38u: goto label_55be38;
        case 0x55be3cu: goto label_55be3c;
        case 0x55be40u: goto label_55be40;
        case 0x55be44u: goto label_55be44;
        case 0x55be48u: goto label_55be48;
        case 0x55be4cu: goto label_55be4c;
        case 0x55be50u: goto label_55be50;
        case 0x55be54u: goto label_55be54;
        case 0x55be58u: goto label_55be58;
        case 0x55be5cu: goto label_55be5c;
        case 0x55be60u: goto label_55be60;
        case 0x55be64u: goto label_55be64;
        case 0x55be68u: goto label_55be68;
        case 0x55be6cu: goto label_55be6c;
        case 0x55be70u: goto label_55be70;
        case 0x55be74u: goto label_55be74;
        case 0x55be78u: goto label_55be78;
        case 0x55be7cu: goto label_55be7c;
        case 0x55be80u: goto label_55be80;
        case 0x55be84u: goto label_55be84;
        case 0x55be88u: goto label_55be88;
        case 0x55be8cu: goto label_55be8c;
        case 0x55be90u: goto label_55be90;
        case 0x55be94u: goto label_55be94;
        case 0x55be98u: goto label_55be98;
        case 0x55be9cu: goto label_55be9c;
        case 0x55bea0u: goto label_55bea0;
        case 0x55bea4u: goto label_55bea4;
        case 0x55bea8u: goto label_55bea8;
        case 0x55beacu: goto label_55beac;
        case 0x55beb0u: goto label_55beb0;
        case 0x55beb4u: goto label_55beb4;
        case 0x55beb8u: goto label_55beb8;
        case 0x55bebcu: goto label_55bebc;
        case 0x55bec0u: goto label_55bec0;
        case 0x55bec4u: goto label_55bec4;
        case 0x55bec8u: goto label_55bec8;
        case 0x55beccu: goto label_55becc;
        case 0x55bed0u: goto label_55bed0;
        case 0x55bed4u: goto label_55bed4;
        case 0x55bed8u: goto label_55bed8;
        case 0x55bedcu: goto label_55bedc;
        case 0x55bee0u: goto label_55bee0;
        case 0x55bee4u: goto label_55bee4;
        case 0x55bee8u: goto label_55bee8;
        case 0x55beecu: goto label_55beec;
        case 0x55bef0u: goto label_55bef0;
        case 0x55bef4u: goto label_55bef4;
        case 0x55bef8u: goto label_55bef8;
        case 0x55befcu: goto label_55befc;
        case 0x55bf00u: goto label_55bf00;
        case 0x55bf04u: goto label_55bf04;
        case 0x55bf08u: goto label_55bf08;
        case 0x55bf0cu: goto label_55bf0c;
        case 0x55bf10u: goto label_55bf10;
        case 0x55bf14u: goto label_55bf14;
        case 0x55bf18u: goto label_55bf18;
        case 0x55bf1cu: goto label_55bf1c;
        default: break;
    }

    ctx->pc = 0x55bd40u;

label_55bd40:
    // 0x55bd40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x55bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_55bd44:
    // 0x55bd44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55bd48:
    // 0x55bd48: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x55bd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_55bd4c:
    // 0x55bd4c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x55bd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_55bd50:
    // 0x55bd50: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x55bd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_55bd54:
    // 0x55bd54: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x55bd54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55bd58:
    // 0x55bd58: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x55bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_55bd5c:
    // 0x55bd5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x55bd5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55bd60:
    // 0x55bd60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x55bd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_55bd64:
    // 0x55bd64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x55bd64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_55bd68:
    // 0x55bd68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x55bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_55bd6c:
    // 0x55bd6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x55bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_55bd70:
    // 0x55bd70: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x55bd70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_55bd74:
    // 0x55bd74: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x55bd74u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_55bd78:
    // 0x55bd78: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x55bd78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_55bd7c:
    // 0x55bd7c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x55bd7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_55bd80:
    // 0x55bd80: 0x26319bc0  addiu       $s1, $s1, -0x6440
    ctx->pc = 0x55bd80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941632));
label_55bd84:
    // 0x55bd84: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x55bd84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_55bd88:
    // 0x55bd88: 0x26102100  addiu       $s0, $s0, 0x2100
    ctx->pc = 0x55bd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
label_55bd8c:
    // 0x55bd8c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x55bd8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_55bd90:
    // 0x55bd90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55bd90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55bd94:
    // 0x55bd94: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x55bd94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_55bd98:
    // 0x55bd98: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x55bd98u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_55bd9c:
    // 0x55bd9c: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x55bd9cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_55bda0:
    // 0x55bda0: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x55bda0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_55bda4:
    // 0x55bda4: 0x6810016  bgez        $s4, . + 4 + (0x16 << 2)
label_55bda8:
    if (ctx->pc == 0x55BDA8u) {
        ctx->pc = 0x55BDA8u;
            // 0x55bda8: 0x46007d46  mov.s       $f21, $f15 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x55BDACu;
        goto label_55bdac;
    }
    ctx->pc = 0x55BDA4u;
    {
        const bool branch_taken_0x55bda4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x55BDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55BDA4u;
            // 0x55bda8: 0x46007d46  mov.s       $f21, $f15 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55bda4) {
            ctx->pc = 0x55BE00u;
            goto label_55be00;
        }
    }
    ctx->pc = 0x55BDACu;
label_55bdac:
    // 0x55bdac: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x55bdacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_55bdb0:
    // 0x55bdb0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x55bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55bdb4:
    // 0x55bdb4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x55bdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_55bdb8:
    // 0x55bdb8: 0x24c6f400  addiu       $a2, $a2, -0xC00
    ctx->pc = 0x55bdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964224));
label_55bdbc:
    // 0x55bdbc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x55bdbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55bdc0:
    // 0x55bdc0: 0xc043be4  jal         func_10EF90
label_55bdc4:
    if (ctx->pc == 0x55BDC4u) {
        ctx->pc = 0x55BDC4u;
            // 0x55bdc4: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x55BDC8u;
        goto label_55bdc8;
    }
    ctx->pc = 0x55BDC0u;
    SET_GPR_U32(ctx, 31, 0x55BDC8u);
    ctx->pc = 0x55BDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BDC0u;
            // 0x55bdc4: 0x2414000a  addiu       $s4, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BDC8u; }
        if (ctx->pc != 0x55BDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BDC8u; }
        if (ctx->pc != 0x55BDC8u) { return; }
    }
    ctx->pc = 0x55BDC8u;
label_55bdc8:
    // 0x55bdc8: 0xc04b02e  jal         func_12C0B8
label_55bdcc:
    if (ctx->pc == 0x55BDCCu) {
        ctx->pc = 0x55BDCCu;
            // 0x55bdcc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55BDD0u;
        goto label_55bdd0;
    }
    ctx->pc = 0x55BDC8u;
    SET_GPR_U32(ctx, 31, 0x55BDD0u);
    ctx->pc = 0x55BDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BDC8u;
            // 0x55bdcc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BDD0u; }
        if (ctx->pc != 0x55BDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BDD0u; }
        if (ctx->pc != 0x55BDD0u) { return; }
    }
    ctx->pc = 0x55BDD0u;
label_55bdd0:
    // 0x55bdd0: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x55bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_55bdd4:
    // 0x55bdd4: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
label_55bdd8:
    if (ctx->pc == 0x55BDD8u) {
        ctx->pc = 0x55BDDCu;
        goto label_55bddc;
    }
    ctx->pc = 0x55BDD4u;
    {
        const bool branch_taken_0x55bdd4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x55bdd4) {
            ctx->pc = 0x55BE00u;
            goto label_55be00;
        }
    }
    ctx->pc = 0x55BDDCu;
label_55bddc:
    // 0x55bddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x55bddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55bde0:
    // 0x55bde0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x55bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_55bde4:
    // 0x55bde4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x55bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_55bde8:
    // 0x55bde8: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x55bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_55bdec:
    // 0x55bdec: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x55bdecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_55bdf0:
    // 0x55bdf0: 0x3a040  sll         $s4, $v1, 1
    ctx->pc = 0x55bdf0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_55bdf4:
    // 0x55bdf4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_55bdf8:
    if (ctx->pc == 0x55BDF8u) {
        ctx->pc = 0x55BDFCu;
        goto label_55bdfc;
    }
    ctx->pc = 0x55BDF4u;
    {
        const bool branch_taken_0x55bdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x55bdf4) {
            ctx->pc = 0x55BDE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55bde0;
        }
    }
    ctx->pc = 0x55BDFCu;
label_55bdfc:
    // 0x55bdfc: 0x0  nop
    ctx->pc = 0x55bdfcu;
    // NOP
label_55be00:
    // 0x55be00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55be00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_55be04:
    // 0x55be04: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x55be04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_55be08:
    // 0x55be08: 0xc0506ac  jal         func_141AB0
label_55be0c:
    if (ctx->pc == 0x55BE0Cu) {
        ctx->pc = 0x55BE0Cu;
            // 0x55be0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55BE10u;
        goto label_55be10;
    }
    ctx->pc = 0x55BE08u;
    SET_GPR_U32(ctx, 31, 0x55BE10u);
    ctx->pc = 0x55BE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BE08u;
            // 0x55be0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BE10u; }
        if (ctx->pc != 0x55BE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BE10u; }
        if (ctx->pc != 0x55BE10u) { return; }
    }
    ctx->pc = 0x55BE10u;
label_55be10:
    // 0x55be10: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x55be10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55be14:
    // 0x55be14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55be14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55be18:
    // 0x55be18: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55be18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55be1c:
    // 0x55be1c: 0x320f809  jalr        $t9
label_55be20:
    if (ctx->pc == 0x55BE20u) {
        ctx->pc = 0x55BE20u;
            // 0x55be20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55BE24u;
        goto label_55be24;
    }
    ctx->pc = 0x55BE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55BE24u);
        ctx->pc = 0x55BE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55BE1Cu;
            // 0x55be20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55BE24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55BE24u; }
            if (ctx->pc != 0x55BE24u) { return; }
        }
        }
    }
    ctx->pc = 0x55BE24u;
label_55be24:
    // 0x55be24: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x55be24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_55be28:
    // 0x55be28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55be28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55be2c:
    // 0x55be2c: 0x0  nop
    ctx->pc = 0x55be2cu;
    // NOP
label_55be30:
    // 0x55be30: 0x46160502  mul.s       $f20, $f0, $f22
    ctx->pc = 0x55be30u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_55be34:
    // 0x55be34: 0x2b4001b  divu        $zero, $s5, $s4
    ctx->pc = 0x55be34u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_55be38:
    // 0x55be38: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x55be38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_55be3c:
    // 0x55be3c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x55be3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_55be40:
    // 0x55be40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55be40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55be44:
    // 0x55be44: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x55be44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_55be48:
    // 0x55be48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x55be48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55be4c:
    // 0x55be4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55be4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55be50:
    // 0x55be50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55be50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55be54:
    // 0x55be54: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55be54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55be58:
    // 0x55be58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55be58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55be5c:
    // 0x55be5c: 0x0  nop
    ctx->pc = 0x55be5cu;
    // NOP
label_55be60:
    // 0x55be60: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55be60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55be64:
    // 0x55be64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55be64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55be68:
    // 0x55be68: 0x0  nop
    ctx->pc = 0x55be68u;
    // NOP
label_55be6c:
    // 0x55be6c: 0x46180018  adda.s      $f0, $f24
    ctx->pc = 0x55be6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_55be70:
    // 0x55be70: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x55be70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_55be74:
    // 0x55be74: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x55be74u;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
label_55be78:
    // 0x55be78: 0x2812  mflo        $a1
    ctx->pc = 0x55be78u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_55be7c:
    // 0x55be7c: 0x24a5001d  addiu       $a1, $a1, 0x1D
    ctx->pc = 0x55be7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29));
label_55be80:
    // 0x55be80: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x55be80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_55be84:
    // 0x55be84: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x55be84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_55be88:
    // 0x55be88: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x55be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55be8c:
    // 0x55be8c: 0x46160b9c  madd.s      $f14, $f1, $f22
    ctx->pc = 0x55be8cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[22]));
label_55be90:
    // 0x55be90: 0x46170018  adda.s      $f0, $f23
    ctx->pc = 0x55be90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_55be94:
    // 0x55be94: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x55be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55be98:
    // 0x55be98: 0xc0bc284  jal         func_2F0A10
label_55be9c:
    if (ctx->pc == 0x55BE9Cu) {
        ctx->pc = 0x55BE9Cu;
            // 0x55be9c: 0x461603dc  madd.s      $f15, $f0, $f22 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
        ctx->pc = 0x55BEA0u;
        goto label_55bea0;
    }
    ctx->pc = 0x55BE98u;
    SET_GPR_U32(ctx, 31, 0x55BEA0u);
    ctx->pc = 0x55BE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55BE98u;
            // 0x55be9c: 0x461603dc  madd.s      $f15, $f0, $f22 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BEA0u; }
        if (ctx->pc != 0x55BEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55BEA0u; }
        if (ctx->pc != 0x55BEA0u) { return; }
    }
    ctx->pc = 0x55BEA0u;
label_55bea0:
    // 0x55bea0: 0x2b4001b  divu        $zero, $s5, $s4
    ctx->pc = 0x55bea0u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_55bea4:
    // 0x55bea4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x55bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_55bea8:
    // 0x55bea8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x55bea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_55beac:
    // 0x55beac: 0x141fc2  srl         $v1, $s4, 31
    ctx->pc = 0x55beacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
label_55beb0:
    // 0x55beb0: 0xa810  mfhi        $s5
    ctx->pc = 0x55beb0u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_55beb4:
    // 0x55beb4: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x55beb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55beb8:
    // 0x55beb8: 0x1010  mfhi        $v0
    ctx->pc = 0x55beb8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55bebc:
    // 0x55bebc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x55bebcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_55bec0:
    // 0x55bec0: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x55bec0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55bec4:
    // 0x55bec4: 0x1680ffdb  bnez        $s4, . + 4 + (-0x25 << 2)
label_55bec8:
    if (ctx->pc == 0x55BEC8u) {
        ctx->pc = 0x55BEC8u;
            // 0x55bec8: 0x4614c600  add.s       $f24, $f24, $f20 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
        ctx->pc = 0x55BECCu;
        goto label_55becc;
    }
    ctx->pc = 0x55BEC4u;
    {
        const bool branch_taken_0x55bec4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x55BEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55BEC4u;
            // 0x55bec8: 0x4614c600  add.s       $f24, $f24, $f20 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55bec4) {
            ctx->pc = 0x55BE34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55be34;
        }
    }
    ctx->pc = 0x55BECCu;
label_55becc:
    // 0x55becc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x55beccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55bed0:
    // 0x55bed0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55bed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55bed4:
    // 0x55bed4: 0x320f809  jalr        $t9
label_55bed8:
    if (ctx->pc == 0x55BED8u) {
        ctx->pc = 0x55BED8u;
            // 0x55bed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55BEDCu;
        goto label_55bedc;
    }
    ctx->pc = 0x55BED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55BEDCu);
        ctx->pc = 0x55BED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55BED4u;
            // 0x55bed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55BEDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55BEDCu; }
            if (ctx->pc != 0x55BEDCu) { return; }
        }
        }
    }
    ctx->pc = 0x55BEDCu;
label_55bedc:
    // 0x55bedc: 0x4600c006  mov.s       $f0, $f24
    ctx->pc = 0x55bedcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[24]);
label_55bee0:
    // 0x55bee0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x55bee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_55bee4:
    // 0x55bee4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x55bee4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55bee8:
    // 0x55bee8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x55bee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_55beec:
    // 0x55beec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x55beecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55bef0:
    // 0x55bef0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x55bef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_55bef4:
    // 0x55bef4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x55bef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55bef8:
    // 0x55bef8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x55bef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_55befc:
    // 0x55befc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x55befcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55bf00:
    // 0x55bf00: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x55bf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55bf04:
    // 0x55bf04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x55bf04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55bf08:
    // 0x55bf08: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55bf0c:
    // 0x55bf0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x55bf0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55bf10:
    // 0x55bf10: 0x3e00008  jr          $ra
label_55bf14:
    if (ctx->pc == 0x55BF14u) {
        ctx->pc = 0x55BF14u;
            // 0x55bf14: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x55BF18u;
        goto label_55bf18;
    }
    ctx->pc = 0x55BF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55BF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55BF10u;
            // 0x55bf14: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55BF18u;
label_55bf18:
    // 0x55bf18: 0x0  nop
    ctx->pc = 0x55bf18u;
    // NOP
label_55bf1c:
    // 0x55bf1c: 0x0  nop
    ctx->pc = 0x55bf1cu;
    // NOP
}
