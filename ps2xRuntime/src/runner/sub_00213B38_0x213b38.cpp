#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00213B38
// Address: 0x213b38 - 0x214518
void sub_00213B38_0x213b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213B38_0x213b38");
#endif

    switch (ctx->pc) {
        case 0x213bc0u: goto label_213bc0;
        case 0x213c00u: goto label_213c00;
        case 0x213c48u: goto label_213c48;
        case 0x213dd8u: goto label_213dd8;
        case 0x213e44u: goto label_213e44;
        case 0x213e70u: goto label_213e70;
        case 0x213ef4u: goto label_213ef4;
        case 0x213f08u: goto label_213f08;
        case 0x213f5cu: goto label_213f5c;
        case 0x213f7cu: goto label_213f7c;
        case 0x213fe0u: goto label_213fe0;
        case 0x214000u: goto label_214000;
        case 0x214098u: goto label_214098;
        case 0x214120u: goto label_214120;
        case 0x214138u: goto label_214138;
        case 0x2141e0u: goto label_2141e0;
        case 0x2141f0u: goto label_2141f0;
        case 0x214210u: goto label_214210;
        case 0x214268u: goto label_214268;
        case 0x214360u: goto label_214360;
        case 0x21438cu: goto label_21438c;
        case 0x2143b8u: goto label_2143b8;
        case 0x2143e4u: goto label_2143e4;
        case 0x214400u: goto label_214400;
        case 0x214454u: goto label_214454;
        case 0x2144a8u: goto label_2144a8;
        default: break;
    }

    ctx->pc = 0x213b38u;

    // 0x213b38: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x213b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x213b3c: 0xafa50094  sw          $a1, 0x94($sp)
    ctx->pc = 0x213b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
    // 0x213b40: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x213b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x213b44: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x213b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x213b48: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x213b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x213b4c: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x213b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x213b50: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x213b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x213b54: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x213b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x213b58: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x213b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x213b5c: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x213b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x213b60: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x213b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x213b64: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x213b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x213b68: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x213b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x213b6c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x213b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x213b70: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x213b70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x213b74: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x213b74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x213b78: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x213b78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x213b7c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x213b7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x213b80: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x213b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x213b84: 0xc4960040  lwc1        $f22, 0x40($a0)
    ctx->pc = 0x213b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x213b88: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x213b88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x213b8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x213b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b90: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x213b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x213b94: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x213b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x213b98: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x213b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x213b9c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x213b9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x213ba0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x213ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x213ba4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x213ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x213ba8: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x213ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x213bac: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x213bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x213bb0: 0x18400243  blez        $v0, . + 4 + (0x243 << 2)
    ctx->pc = 0x213BB0u;
    {
        const bool branch_taken_0x213bb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x213BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213BB0u;
            // 0x213bb4: 0xafa6003c  sw          $a2, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bb0) {
            ctx->pc = 0x2144C0u;
            goto label_2144c0;
        }
    }
    ctx->pc = 0x213BB8u;
    // 0x213bb8: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x213bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x213bbc: 0x0  nop
    ctx->pc = 0x213bbcu;
    // NOP
label_213bc0:
    // 0x213bc0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x213bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x213bc4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x213bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x213bc8: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x213bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x213bcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x213bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213bd0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x213bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x213bd4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x213bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x213bd8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x213bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x213bdc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x213bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x213be0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x213be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x213be4: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x213be4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x213be8: 0x8d03004c  lw          $v1, 0x4C($t0)
    ctx->pc = 0x213be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x213bec: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x213becu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x213bf0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x213BF0u;
    {
        const bool branch_taken_0x213bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213BF0u;
            // 0x213bf4: 0x8fa70094  lw          $a3, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bf0) {
            ctx->pc = 0x213BC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213bc0;
        }
    }
    ctx->pc = 0x213BF8u;
    // 0x213bf8: 0x10000231  b           . + 4 + (0x231 << 2)
    ctx->pc = 0x213BF8u;
    {
        const bool branch_taken_0x213bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213bf8) {
            ctx->pc = 0x2144C0u;
            goto label_2144c0;
        }
    }
    ctx->pc = 0x213C00u;
label_213c00:
    // 0x213c00: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x213c00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x213c04: 0x4600b106  mov.s       $f4, $f22
    ctx->pc = 0x213c04u;
    ctx->f[4] = FPU_MOV_S(ctx->f[22]);
    // 0x213c08: 0x8de2004c  lw          $v0, 0x4C($t7)
    ctx->pc = 0x213c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 76)));
    // 0x213c0c: 0x18400059  blez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x213C0Cu;
    {
        const bool branch_taken_0x213c0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x213C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213C0Cu;
            // 0x213c10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c0c) {
            ctx->pc = 0x213D74u;
            goto label_213d74;
        }
    }
    ctx->pc = 0x213C14u;
    // 0x213c14: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x213c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213c18: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x213c18u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c1c: 0x8fac0000  lw          $t4, 0x0($sp)
    ctx->pc = 0x213c1cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213c20: 0x8fa9000c  lw          $t1, 0xC($sp)
    ctx->pc = 0x213c20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x213c24: 0x28cb0002  slti        $t3, $a2, 0x2
    ctx->pc = 0x213c24u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x213c28: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x213c28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213c2c: 0x28ca0003  slti        $t2, $a2, 0x3
    ctx->pc = 0x213c2cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x213c30: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x213c30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x213c34: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x213c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x213c38: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x213c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x213c3c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x213c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x213c40: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x213c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x213c44: 0x0  nop
    ctx->pc = 0x213c44u;
    // NOP
label_213c48:
    // 0x213c48: 0x18c00003  blez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x213C48u;
    {
        const bool branch_taken_0x213c48 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x213c48) {
            ctx->pc = 0x213C58u;
            goto label_213c58;
        }
    }
    ctx->pc = 0x213C50u;
    // 0x213c50: 0x51840045  beql        $t4, $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x213C50u;
    {
        const bool branch_taken_0x213c50 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 4));
        if (branch_taken_0x213c50) {
            ctx->pc = 0x213C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213C50u;
            // 0x213c54: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213D68u;
            goto label_213d68;
        }
    }
    ctx->pc = 0x213C58u;
label_213c58:
    // 0x213c58: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x213C58u;
    {
        const bool branch_taken_0x213c58 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x213c58) {
            ctx->pc = 0x213C68u;
            goto label_213c68;
        }
    }
    ctx->pc = 0x213C60u;
    // 0x213c60: 0x51240041  beql        $t1, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x213C60u;
    {
        const bool branch_taken_0x213c60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x213c60) {
            ctx->pc = 0x213C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213C60u;
            // 0x213c64: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213D68u;
            goto label_213d68;
        }
    }
    ctx->pc = 0x213C68u;
label_213c68:
    // 0x213c68: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x213C68u;
    {
        const bool branch_taken_0x213c68 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x213C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213C68u;
            // 0x213c6c: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c68) {
            ctx->pc = 0x213C78u;
            goto label_213c78;
        }
    }
    ctx->pc = 0x213C70u;
    // 0x213c70: 0x5104003d  beql        $t0, $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x213C70u;
    {
        const bool branch_taken_0x213c70 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x213c70) {
            ctx->pc = 0x213C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213C70u;
            // 0x213c74: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213D68u;
            goto label_213d68;
        }
    }
    ctx->pc = 0x213C78u;
label_213c78:
    // 0x213c78: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x213c78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x213c7c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x213c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x213c80: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x213c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x213c84: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x213c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x213c88: 0x54600037  bnel        $v1, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x213C88u;
    {
        const bool branch_taken_0x213c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x213c88) {
            ctx->pc = 0x213C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213C88u;
            // 0x213c8c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213D68u;
            goto label_213d68;
        }
    }
    ctx->pc = 0x213C90u;
    // 0x213c90: 0x8faf0090  lw          $t7, 0x90($sp)
    ctx->pc = 0x213c90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x213c94: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x213c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x213c98: 0x8de20048  lw          $v0, 0x48($t7)
    ctx->pc = 0x213c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 72)));
    // 0x213c9c: 0x8faf0098  lw          $t7, 0x98($sp)
    ctx->pc = 0x213c9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x213ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x213ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213ca4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x213ca4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x213ca8: 0xd9e20000  lqc2        $vf2, 0x0($t7)
    ctx->pc = 0x213ca8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x213cac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x213cacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213cb0: 0x4be510ac  vsub.xyzw   $vf2, $vf2, $vf5
    ctx->pc = 0x213cb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213cb4: 0x4bc4106a  vmul.xyz    $vf1, $vf2, $vf4
    ctx->pc = 0x213cb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213cb8: 0x4b0000c3  vaddw.x     $vf3, $vf0, $vf0w
    ctx->pc = 0x213cb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x213cbc: 0x4b01083d  vadday.x    $ACC, $vf1, $vf1y
    ctx->pc = 0x213cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213cc0: 0x4b01184a  vmaddz.x    $vf1, $vf3, $vf1z
    ctx->pc = 0x213cc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213cc4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x213cc4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213cc8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x213cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x213ccc: 0x0  nop
    ctx->pc = 0x213cccu;
    // NOP
    // 0x213cd0: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x213cd0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x213cd4: 0x46071836  c.le.s      $f3, $f7
    ctx->pc = 0x213cd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213cd8: 0x0  nop
    ctx->pc = 0x213cd8u;
    // NOP
    // 0x213cdc: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
    ctx->pc = 0x213CDCu;
    {
        const bool branch_taken_0x213cdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x213cdc) {
            ctx->pc = 0x213CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213CDCu;
            // 0x213ce0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213D68u;
            goto label_213d68;
        }
    }
    ctx->pc = 0x213CE4u;
    // 0x213ce4: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x213ce4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x213ce8: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x213ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x213cec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x213cecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213cf0: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x213cf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x213cf4: 0x48af1000  qmtc2.ni    $t7, $vf2
    ctx->pc = 0x213cf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x213cf8: 0x4be009bf  vmulaw.xyzw $ACC, $vf1, $vf0w
    ctx->pc = 0x213cf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x213cfc: 0x4be22848  vmaddx.xyzw $vf1, $vf5, $vf2x
    ctx->pc = 0x213cfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213d00: 0x4be120ea  vmul.xyzw   $vf3, $vf4, $vf1
    ctx->pc = 0x213d00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x213d04: 0x4b000083  vaddw.x     $vf2, $vf0, $vf0w
    ctx->pc = 0x213d04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213d08: 0x4b03183d  vadday.x    $ACC, $vf3, $vf3y
    ctx->pc = 0x213d08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213d0c: 0x4b0310be  vmaddaz.x   $ACC, $vf2, $vf3z
    ctx->pc = 0x213d0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x213d10: 0x4b0410cb  vmaddw.x    $vf3, $vf2, $vf4w
    ctx->pc = 0x213d10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213d14: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x213d14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x213d18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x213d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213d1c: 0x0  nop
    ctx->pc = 0x213d1cu;
    // NOP
    // 0x213d20: 0x46061036  c.le.s      $f2, $f6
    ctx->pc = 0x213d20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213d24: 0x0  nop
    ctx->pc = 0x213d24u;
    // NOP
    // 0x213d28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x213D28u;
    {
        const bool branch_taken_0x213d28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213D28u;
            // 0x213d2c: 0x8ce20024  lw          $v0, 0x24($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d28) {
            ctx->pc = 0x213D34u;
            goto label_213d34;
        }
    }
    ctx->pc = 0x213D30u;
    // 0x213d30: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x213d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_213d34:
    // 0x213d34: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x213d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x213d38: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x213d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x213d3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x213d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213d40: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x213d40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x213d44: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x213d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213d48: 0x0  nop
    ctx->pc = 0x213d48u;
    // NOP
    // 0x213d4c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x213D4Cu;
    {
        const bool branch_taken_0x213d4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213d4c) {
            ctx->pc = 0x213D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213D4Cu;
            // 0x213d50: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213D68u;
            goto label_213d68;
        }
    }
    ctx->pc = 0x213D54u;
    // 0x213d54: 0x0  nop
    ctx->pc = 0x213d54u;
    // NOP
    // 0x213d58: 0x0  nop
    ctx->pc = 0x213d58u;
    // NOP
    // 0x213d5c: 0x46031103  div.s       $f4, $f2, $f3
    ctx->pc = 0x213d5cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[4] = ctx->f[2] / ctx->f[3];
    // 0x213d60: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x213d60u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x213d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_213d68:
    // 0x213d68: 0x8d102a  slt         $v0, $a0, $t5
    ctx->pc = 0x213d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x213d6c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x213D6Cu;
    {
        const bool branch_taken_0x213d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213d6c) {
            ctx->pc = 0x213C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213c48;
        }
    }
    ctx->pc = 0x213D74u;
label_213d74:
    // 0x213d74: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x213d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x213d78: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x213d78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x213d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213d80: 0x0  nop
    ctx->pc = 0x213d80u;
    // NOP
    // 0x213d84: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x213d84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213d88: 0x0  nop
    ctx->pc = 0x213d88u;
    // NOP
    // 0x213d8c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x213D8Cu;
    {
        const bool branch_taken_0x213d8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213D8Cu;
            // 0x213d90: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d8c) {
            ctx->pc = 0x213E28u;
            goto label_213e28;
        }
    }
    ctx->pc = 0x213D94u;
    // 0x213d94: 0x4604b581  sub.s       $f22, $f22, $f4
    ctx->pc = 0x213d94u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[4]);
    // 0x213d98: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x213d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x213d9c: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x213d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x213da0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x213da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x213da4: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x213da4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x213da8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x213da8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x213dac: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x213dacu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x213db0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x213db0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213db4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213db8: 0x4be011bf  vmulaw.xyzw $ACC, $vf2, $vf0w
    ctx->pc = 0x213db8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x213dbc: 0x4be30888  vmaddx.xyzw $vf2, $vf1, $vf3x
    ctx->pc = 0x213dbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213dc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x213dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213dc4: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x213dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213dc8: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x213DC8u;
    {
        const bool branch_taken_0x213dc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x213DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213DC8u;
            // 0x213dcc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213dc8) {
            ctx->pc = 0x213E04u;
            goto label_213e04;
        }
    }
    ctx->pc = 0x213DD0u;
    // 0x213dd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x213dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213dd4: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x213dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_213dd8:
    // 0x213dd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x213dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213ddc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x213ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x213de0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x213de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213de4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x213de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x213de8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x213de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x213dec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x213decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213df0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x213df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x213df4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x213df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213df8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x213df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x213dfc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x213DFCu;
    {
        const bool branch_taken_0x213dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213DFCu;
            // 0x213e00: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213dfc) {
            ctx->pc = 0x213DD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213dd8;
        }
    }
    ctx->pc = 0x213E04u;
label_213e04:
    // 0x213e04: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x213e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213e08: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x213e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x213e0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x213e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x213e10: 0xe4c10020  swc1        $f1, 0x20($a2)
    ctx->pc = 0x213e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x213e14: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x213e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213e18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x213e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213e1c: 0x0  nop
    ctx->pc = 0x213e1cu;
    // NOP
    // 0x213e20: 0x450101ae  bc1t        . + 4 + (0x1AE << 2)
    ctx->pc = 0x213E20u;
    {
        const bool branch_taken_0x213e20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x213E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213E20u;
            // 0x213e24: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e20) {
            ctx->pc = 0x2144DCu;
            goto label_2144dc;
        }
    }
    ctx->pc = 0x213E28u;
label_213e28:
    // 0x213e28: 0x5c1001b  bgez        $t6, . + 4 + (0x1B << 2)
    ctx->pc = 0x213E28u;
    {
        const bool branch_taken_0x213e28 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x213E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213E28u;
            // 0x213e2c: 0x8fa30090  lw          $v1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e28) {
            ctx->pc = 0x213E98u;
            goto label_213e98;
        }
    }
    ctx->pc = 0x213E30u;
    // 0x213e30: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x213e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x213e34: 0x8fa80094  lw          $t0, 0x94($sp)
    ctx->pc = 0x213e34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x213e38: 0xc4e00040  lwc1        $f0, 0x40($a3)
    ctx->pc = 0x213e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213e3c: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x213E3Cu;
    {
        const bool branch_taken_0x213e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213E3Cu;
            // 0x213e40: 0xe5000020  swc1        $f0, 0x20($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e3c) {
            ctx->pc = 0x2144D8u;
            goto label_2144d8;
        }
    }
    ctx->pc = 0x213E44u;
label_213e44:
    // 0x213e44: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x213e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x213e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x213e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213e4c: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x213e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x213e50: 0x6a0f0013  ldl         $t7, 0x13($s0)
    ctx->pc = 0x213e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x213e54: 0x6e0f000c  ldr         $t7, 0xC($s0)
    ctx->pc = 0x213e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x213e58: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x213e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x213e5c: 0xb20f0007  sdl         $t7, 0x7($s0)
    ctx->pc = 0x213e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x213e60: 0xb60f0000  sdr         $t7, 0x0($s0)
    ctx->pc = 0x213e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x213e64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x213e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x213e68: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x213E68u;
    {
        const bool branch_taken_0x213e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213E68u;
            // 0x213e6c: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e68) {
            ctx->pc = 0x2144C0u;
            goto label_2144c0;
        }
    }
    ctx->pc = 0x213E70u;
label_213e70:
    // 0x213e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x213e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213e74: 0x7c440010  sq          $a0, 0x10($v0)
    ctx->pc = 0x213e74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 4));
    // 0x213e78: 0x6a06001f  ldl         $a2, 0x1F($s0)
    ctx->pc = 0x213e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x213e7c: 0x6e060018  ldr         $a2, 0x18($s0)
    ctx->pc = 0x213e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x213e80: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x213e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x213e84: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x213e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x213e88: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x213e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x213e8c: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x213e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x213e90: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x213E90u;
    {
        const bool branch_taken_0x213e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213E90u;
            // 0x213e94: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e90) {
            ctx->pc = 0x2144C0u;
            goto label_2144c0;
        }
    }
    ctx->pc = 0x213E98u;
label_213e98:
    // 0x213e98: 0xe3980  sll         $a3, $t6, 6
    ctx->pc = 0x213e98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
    // 0x213e9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x213e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213ea0: 0xe3100  sll         $a2, $t6, 4
    ctx->pc = 0x213ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x213ea4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x213ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x213ea8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x213ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213eac: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x213eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x213eb0: 0x8fa80094  lw          $t0, 0x94($sp)
    ctx->pc = 0x213eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x213eb4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x213eb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213eb8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x213eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x213ebc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x213ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x213ec0: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x213ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x213ec4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213ec8: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x213ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x213ecc: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x213eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x213ed0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x213ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x213ed4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x213ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x213ed8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x213ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x213edc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x213edcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x213ee0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x213ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213ee4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x213ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x213ee8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x213ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x213eec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x213eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x213ef0: 0xacae0000  sw          $t6, 0x0($a1)
    ctx->pc = 0x213ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
label_213ef4:
    // 0x213ef4: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x213ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
    // 0x213ef8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x213ef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x213efc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x213efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x213f00: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x213f00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213f04: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x213f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_213f08:
    // 0x213f08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x213f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213f0c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x213F0Cu;
    {
        const bool branch_taken_0x213f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213F0Cu;
            // 0x213f10: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f0c) {
            ctx->pc = 0x213F64u;
            goto label_213f64;
        }
    }
    ctx->pc = 0x213F14u;
    // 0x213f14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x213F14u;
    {
        const bool branch_taken_0x213f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213f14) {
            ctx->pc = 0x213F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213F14u;
            // 0x213f18: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213F2Cu;
            goto label_213f2c;
        }
    }
    ctx->pc = 0x213F1Cu;
    // 0x213f1c: 0x507e0009  beql        $v1, $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x213F1Cu;
    {
        const bool branch_taken_0x213f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x213f1c) {
            ctx->pc = 0x213F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213F1Cu;
            // 0x213f20: 0x8e060038  lw          $a2, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213F44u;
            goto label_213f44;
        }
    }
    ctx->pc = 0x213F24u;
    // 0x213f24: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x213F24u;
    {
        const bool branch_taken_0x213f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213f24) {
            ctx->pc = 0x2144C0u;
            goto label_2144c0;
        }
    }
    ctx->pc = 0x213F2Cu;
label_213f2c:
    // 0x213f2c: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x213F2Cu;
    {
        const bool branch_taken_0x213f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213F2Cu;
            // 0x213f30: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f2c) {
            ctx->pc = 0x213FE8u;
            goto label_213fe8;
        }
    }
    ctx->pc = 0x213F34u;
    // 0x213f34: 0x106200ac  beq         $v1, $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x213F34u;
    {
        const bool branch_taken_0x213f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213F34u;
            // 0x213f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f34) {
            ctx->pc = 0x2141E8u;
            goto label_2141e8;
        }
    }
    ctx->pc = 0x213F3Cu;
    // 0x213f3c: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x213F3Cu;
    {
        const bool branch_taken_0x213f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213f3c) {
            ctx->pc = 0x2144C0u;
            goto label_2144c0;
        }
    }
    ctx->pc = 0x213F44u;
label_213f44:
    // 0x213f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f48: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x213f48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x213f4c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x213f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x213f50: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x213f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x213f54: 0xc084c9c  jal         func_213270
    ctx->pc = 0x213F54u;
    SET_GPR_U32(ctx, 31, 0x213F5Cu);
    ctx->pc = 0x213F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213F54u;
            // 0x213f58: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213270u;
    if (runtime->hasFunction(0x213270u)) {
        auto targetFn = runtime->lookupFunction(0x213270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F5Cu; }
        if (ctx->pc != 0x213F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213270_0x213270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F5Cu; }
        if (ctx->pc != 0x213F5Cu) { return; }
    }
    ctx->pc = 0x213F5Cu;
label_213f5c:
    // 0x213f5c: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x213F5Cu;
    {
        const bool branch_taken_0x213f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213f5c) {
            ctx->pc = 0x2144C0u;
            goto label_2144c0;
        }
    }
    ctx->pc = 0x213F64u;
label_213f64:
    // 0x213f64: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x213f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x213f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f6c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x213f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x213f70: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x213f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x213f74: 0xc084c9c  jal         func_213270
    ctx->pc = 0x213F74u;
    SET_GPR_U32(ctx, 31, 0x213F7Cu);
    ctx->pc = 0x213F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213F74u;
            // 0x213f78: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213270u;
    if (runtime->hasFunction(0x213270u)) {
        auto targetFn = runtime->lookupFunction(0x213270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F7Cu; }
        if (ctx->pc != 0x213F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213270_0x213270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F7Cu; }
        if (ctx->pc != 0x213F7Cu) { return; }
    }
    ctx->pc = 0x213F7Cu;
label_213f7c:
    // 0x213f7c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x213f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x213f80: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x213f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f84: 0xdba50040  lqc2        $vf5, 0x40($sp)
    ctx->pc = 0x213f84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213f88: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x213f88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x213f8c: 0x4be228ac  vsub.xyzw   $vf2, $vf5, $vf2
    ctx->pc = 0x213f8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213f90: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x213f90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x213f94: 0x4bc110ea  vmul.xyz    $vf3, $vf2, $vf1
    ctx->pc = 0x213f94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x213f98: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x213f98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213f9c: 0x4b03183d  vadday.x    $ACC, $vf3, $vf3y
    ctx->pc = 0x213f9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x213fa0: 0x4b0320ca  vmaddz.x    $vf3, $vf4, $vf3z
    ctx->pc = 0x213fa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213fa4: 0x482f1800  qmfc2.ni    $t7, $vf3
    ctx->pc = 0x213fa4u;
    SET_GPR_VEC(ctx, 15, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x213fa8: 0x448f0000  mtc1        $t7, $f0
    ctx->pc = 0x213fa8u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213fac: 0x0  nop
    ctx->pc = 0x213facu;
    // NOP
    // 0x213fb0: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x213fb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213fb4: 0x0  nop
    ctx->pc = 0x213fb4u;
    // NOP
    // 0x213fb8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x213FB8u;
    {
        const bool branch_taken_0x213fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x213fb8) {
            ctx->pc = 0x213FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x213FB8u;
            // 0x213fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213FC0u;
            goto label_213fc0;
        }
    }
    ctx->pc = 0x213FC0u;
label_213fc0:
    // 0x213fc0: 0x1040ffa0  beqz        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x213FC0u;
    {
        const bool branch_taken_0x213fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213FC0u;
            // 0x213fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fc0) {
            ctx->pc = 0x213E44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213e44;
        }
    }
    ctx->pc = 0x213FC8u;
    // 0x213fc8: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x213fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x213fcc: 0x8e08003c  lw          $t0, 0x3C($s0)
    ctx->pc = 0x213fccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x213fd0: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x213fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x213fd4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x213fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x213fd8: 0xc084d42  jal         func_213508
    ctx->pc = 0x213FD8u;
    SET_GPR_U32(ctx, 31, 0x213FE0u);
    ctx->pc = 0x213FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213FD8u;
            // 0x213fdc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213508u;
    if (runtime->hasFunction(0x213508u)) {
        auto targetFn = runtime->lookupFunction(0x213508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FE0u; }
        if (ctx->pc != 0x213FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213508_0x213508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FE0u; }
        if (ctx->pc != 0x213FE0u) { return; }
    }
    ctx->pc = 0x213FE0u;
label_213fe0:
    // 0x213fe0: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x213FE0u;
    {
        const bool branch_taken_0x213fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213fe0) {
            ctx->pc = 0x2144C0u;
            goto label_2144c0;
        }
    }
    ctx->pc = 0x213FE8u;
label_213fe8:
    // 0x213fe8: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x213fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x213fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ff0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x213ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x213ff4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x213ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x213ff8: 0xc084c9c  jal         func_213270
    ctx->pc = 0x213FF8u;
    SET_GPR_U32(ctx, 31, 0x214000u);
    ctx->pc = 0x213FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213FF8u;
            // 0x213ffc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213270u;
    if (runtime->hasFunction(0x213270u)) {
        auto targetFn = runtime->lookupFunction(0x213270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214000u; }
        if (ctx->pc != 0x214000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213270_0x213270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214000u; }
        if (ctx->pc != 0x214000u) { return; }
    }
    ctx->pc = 0x214000u;
label_214000:
    // 0x214000: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x214000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214004: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x214004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214008: 0xdba50050  lqc2        $vf5, 0x50($sp)
    ctx->pc = 0x214008u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21400c: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x21400cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x214010: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x214010u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214014: 0x4be228ac  vsub.xyzw   $vf2, $vf5, $vf2
    ctx->pc = 0x214014u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214018: 0x4bc110ea  vmul.xyz    $vf3, $vf2, $vf1
    ctx->pc = 0x214018u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21401c: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x21401cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x214020: 0x4b03183d  vadday.x    $ACC, $vf3, $vf3y
    ctx->pc = 0x214020u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x214024: 0x4b0320ca  vmaddz.x    $vf3, $vf4, $vf3z
    ctx->pc = 0x214024u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x214028: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x214028u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x21402c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21402cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214030: 0x0  nop
    ctx->pc = 0x214030u;
    // NOP
    // 0x214034: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x214034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214038: 0x0  nop
    ctx->pc = 0x214038u;
    // NOP
    // 0x21403c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x21403Cu;
    {
        const bool branch_taken_0x21403c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21403c) {
            ctx->pc = 0x214040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21403Cu;
            // 0x214040: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214044u;
            goto label_214044;
        }
    }
    ctx->pc = 0x214044u;
label_214044:
    // 0x214044: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x214044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214048: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x214048u;
    {
        const bool branch_taken_0x214048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214048) {
            ctx->pc = 0x21404Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214048u;
            // 0x21404c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2140F4u;
            goto label_2140f4;
        }
    }
    ctx->pc = 0x214050u;
    // 0x214050: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x214050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x214054: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x214054u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x214058: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x214058u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21405c: 0x4be228ac  vsub.xyzw   $vf2, $vf5, $vf2
    ctx->pc = 0x21405cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214060: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x214060u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214064: 0x4bc110ea  vmul.xyz    $vf3, $vf2, $vf1
    ctx->pc = 0x214064u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x214068: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x214068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21406c: 0x4b03183d  vadday.x    $ACC, $vf3, $vf3y
    ctx->pc = 0x21406cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x214070: 0x4b0320ca  vmaddz.x    $vf3, $vf4, $vf3z
    ctx->pc = 0x214070u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x214074: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x214074u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x214078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x214078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21407c: 0x0  nop
    ctx->pc = 0x21407cu;
    // NOP
    // 0x214080: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x214080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214084: 0x0  nop
    ctx->pc = 0x214084u;
    // NOP
    // 0x214088: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x214088u;
    {
        const bool branch_taken_0x214088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21408Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214088u;
            // 0x21408c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214088) {
            ctx->pc = 0x2140E4u;
            goto label_2140e4;
        }
    }
    ctx->pc = 0x214090u;
    // 0x214090: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x214090u;
    {
        const bool branch_taken_0x214090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214090) {
            ctx->pc = 0x2140E8u;
            goto label_2140e8;
        }
    }
    ctx->pc = 0x214098u;
label_214098:
    // 0x214098: 0x3d31023  subu        $v0, $fp, $s3
    ctx->pc = 0x214098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x21409c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x21409cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2140a0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x2140a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2140a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2140a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2140a8: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2140a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2140ac: 0x6a050013  ldl         $a1, 0x13($s0)
    ctx->pc = 0x2140acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2140b0: 0x6e05000c  ldr         $a1, 0xC($s0)
    ctx->pc = 0x2140b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2140b4: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2140b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2140b8: 0xb0450007  sdl         $a1, 0x7($v0)
    ctx->pc = 0x2140b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2140bc: 0xb4450000  sdr         $a1, 0x0($v0)
    ctx->pc = 0x2140bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2140c0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2140c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x2140c4: 0x6a0f001f  ldl         $t7, 0x1F($s0)
    ctx->pc = 0x2140c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x2140c8: 0x6e0f0018  ldr         $t7, 0x18($s0)
    ctx->pc = 0x2140c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x2140cc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2140ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2140d0: 0xb20f0013  sdl         $t7, 0x13($s0)
    ctx->pc = 0x2140d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2140d4: 0xb60f000c  sdr         $t7, 0xC($s0)
    ctx->pc = 0x2140d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2140d8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2140d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2140dc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2140DCu;
    {
        const bool branch_taken_0x2140dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2140DCu;
            // 0x2140e0: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140dc) {
            ctx->pc = 0x2141A8u;
            goto label_2141a8;
        }
    }
    ctx->pc = 0x2140E4u;
label_2140e4:
    // 0x2140e4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2140e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2140e8:
    // 0x2140e8: 0x5040ff61  beql        $v0, $zero, . + 4 + (-0x9F << 2)
    ctx->pc = 0x2140E8u;
    {
        const bool branch_taken_0x2140e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2140e8) {
            ctx->pc = 0x2140ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2140E8u;
            // 0x2140ec: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213e70;
        }
    }
    ctx->pc = 0x2140F0u;
    // 0x2140f0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2140f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2140f4:
    // 0x2140f4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2140f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2140f8: 0x1440ff7e  bnez        $v0, . + 4 + (-0x82 << 2)
    ctx->pc = 0x2140F8u;
    {
        const bool branch_taken_0x2140f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2140FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2140F8u;
            // 0x2140fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140f8) {
            ctx->pc = 0x213EF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213ef4;
        }
    }
    ctx->pc = 0x214100u;
    // 0x214100: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x214100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
    // 0x214104: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x214104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x214108: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x214108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21410c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x21410cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214110: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x214110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x214114: 0x36110004  ori         $s1, $s0, 0x4
    ctx->pc = 0x214114u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x214118: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x214118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21411c: 0x0  nop
    ctx->pc = 0x21411cu;
    // NOP
label_214120:
    // 0x214120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214124: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x214124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x214128: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x214128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21412c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x21412cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x214130: 0xc084d42  jal         func_213508
    ctx->pc = 0x214130u;
    SET_GPR_U32(ctx, 31, 0x214138u);
    ctx->pc = 0x214134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214130u;
            // 0x214134: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213508u;
    if (runtime->hasFunction(0x213508u)) {
        auto targetFn = runtime->lookupFunction(0x213508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214138u; }
        if (ctx->pc != 0x214138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213508_0x213508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214138u; }
        if (ctx->pc != 0x214138u) { return; }
    }
    ctx->pc = 0x214138u;
label_214138:
    // 0x214138: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x214138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21413c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x21413cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214140: 0xdba30060  lqc2        $vf3, 0x60($sp)
    ctx->pc = 0x214140u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x214144: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x214144u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x214148: 0x4be218ec  vsub.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x214148u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21414c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x21414cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214150: 0x4bc118aa  vmul.xyz    $vf2, $vf3, $vf1
    ctx->pc = 0x214150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214154: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x214154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x214158: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x214158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x21415c: 0x4b02208a  vmaddz.x    $vf2, $vf4, $vf2z
    ctx->pc = 0x21415cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x214160: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x214160u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x214164: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x214164u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214168: 0x0  nop
    ctx->pc = 0x214168u;
    // NOP
    // 0x21416c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x21416cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214170: 0x0  nop
    ctx->pc = 0x214170u;
    // NOP
    // 0x214174: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x214174u;
    {
        const bool branch_taken_0x214174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x214174) {
            ctx->pc = 0x214178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214174u;
            // 0x214178: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21417Cu;
            goto label_21417c;
        }
    }
    ctx->pc = 0x21417Cu;
label_21417c:
    // 0x21417c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x21417cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214180: 0x1040ffc5  beqz        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x214180u;
    {
        const bool branch_taken_0x214180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214180u;
            // 0x214184: 0x2652fff4  addiu       $s2, $s2, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214180) {
            ctx->pc = 0x214098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214098;
        }
    }
    ctx->pc = 0x214188u;
    // 0x214188: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x214188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21418c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x21418cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x214190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214190u;
    {
        const bool branch_taken_0x214190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214190u;
            // 0x214194: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214190) {
            ctx->pc = 0x2141A8u;
            goto label_2141a8;
        }
    }
    ctx->pc = 0x214198u;
    // 0x214198: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x214198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21419c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x21419cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2141a0: 0x5040ffdf  beql        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2141A0u;
    {
        const bool branch_taken_0x2141a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2141a0) {
            ctx->pc = 0x2141A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2141A0u;
            // 0x2141a4: 0x8e070038  lw          $a3, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x214120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214120;
        }
    }
    ctx->pc = 0x2141A8u;
label_2141a8:
    // 0x2141a8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2141a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2141ac: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2141acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2141b0: 0x5440ff55  bnel        $v0, $zero, . + 4 + (-0xAB << 2)
    ctx->pc = 0x2141B0u;
    {
        const bool branch_taken_0x2141b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2141b0) {
            ctx->pc = 0x2141B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2141B0u;
            // 0x2141b4: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213f08;
        }
    }
    ctx->pc = 0x2141B8u;
    // 0x2141b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2141b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141bc: 0x8e090038  lw          $t1, 0x38($s0)
    ctx->pc = 0x2141bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2141c0: 0x8e0a003c  lw          $t2, 0x3C($s0)
    ctx->pc = 0x2141c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2141c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2141c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2141c8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2141c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2141cc: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x2141ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x2141d0: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x2141d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2141d4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x2141d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x2141d8: 0xc084e28  jal         func_2138A0
    ctx->pc = 0x2141D8u;
    SET_GPR_U32(ctx, 31, 0x2141E0u);
    ctx->pc = 0x2141DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2141D8u;
            // 0x2141dc: 0x8c87001c  lw          $a3, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2138A0u;
    if (runtime->hasFunction(0x2138A0u)) {
        auto targetFn = runtime->lookupFunction(0x2138A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2141E0u; }
        if (ctx->pc != 0x2141E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002138A0_0x2138a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2141E0u; }
        if (ctx->pc != 0x2141E0u) { return; }
    }
    ctx->pc = 0x2141E0u;
label_2141e0:
    // 0x2141e0: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2141E0u;
    {
        const bool branch_taken_0x2141e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2141e0) {
            ctx->pc = 0x2144C0u;
            goto label_2144c0;
        }
    }
    ctx->pc = 0x2141E8u;
label_2141e8:
    // 0x2141e8: 0xc084c50  jal         func_213140
    ctx->pc = 0x2141E8u;
    SET_GPR_U32(ctx, 31, 0x2141F0u);
    ctx->pc = 0x2141ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2141E8u;
            // 0x2141ec: 0x36130004  ori         $s3, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x213140u;
    if (runtime->hasFunction(0x213140u)) {
        auto targetFn = runtime->lookupFunction(0x213140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2141F0u; }
        if (ctx->pc != 0x2141F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00213140_0x213140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2141F0u; }
        if (ctx->pc != 0x2141F0u) { return; }
    }
    ctx->pc = 0x2141F0u;
label_2141f0:
    // 0x2141f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2141f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141f4: 0x27b70070  addiu       $s7, $sp, 0x70
    ctx->pc = 0x2141f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2141f8: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x2141f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2141fc: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x2141fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x214200: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x214200u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214204: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x214204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214208: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x214208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21420c: 0x0  nop
    ctx->pc = 0x21420cu;
    // NOP
label_214210:
    // 0x214210: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x214210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x214214: 0x26830002  addiu       $v1, $s4, 0x2
    ctx->pc = 0x214214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x214218: 0x55001a  div         $zero, $v0, $s5
    ctx->pc = 0x214218u;
    { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21421c: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21421Cu;
    {
        const bool branch_taken_0x21421c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x21421c) {
            ctx->pc = 0x214220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21421Cu;
            // 0x214220: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x214224u;
            goto label_214224;
        }
    }
    ctx->pc = 0x214224u;
label_214224:
    // 0x214224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214228: 0x8e090038  lw          $t1, 0x38($s0)
    ctx->pc = 0x214228u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21422c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21422cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214230: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x214230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x214234: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x214234u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214238: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x214238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x21423c: 0x2810  mfhi        $a1
    ctx->pc = 0x21423cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x214240: 0x75001a  div         $zero, $v1, $s5
    ctx->pc = 0x214240u;
    { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x214244: 0x3010  mfhi        $a2
    ctx->pc = 0x214244u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x214248: 0xb61818  mult        $v1, $a1, $s6
    ctx->pc = 0x214248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21424c: 0xd62818  mult        $a1, $a2, $s6
    ctx->pc = 0x21424cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x214250: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x214250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x214254: 0xb31821  addu        $v1, $a1, $s3
    ctx->pc = 0x214254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x214258: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x214258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21425c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21425cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214260: 0xc084e28  jal         func_2138A0
    ctx->pc = 0x214260u;
    SET_GPR_U32(ctx, 31, 0x214268u);
    ctx->pc = 0x214264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214260u;
            // 0x214264: 0x7fab00a0  sq          $t3, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2138A0u;
    if (runtime->hasFunction(0x2138A0u)) {
        auto targetFn = runtime->lookupFunction(0x2138A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214268u; }
        if (ctx->pc != 0x214268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002138A0_0x2138a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214268u; }
        if (ctx->pc != 0x214268u) { return; }
    }
    ctx->pc = 0x214268u;
label_214268:
    // 0x214268: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x214268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21426c: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x21426cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x214270: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x214270u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x214274: 0x4be218ec  vsub.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x214274u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x214278: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x214278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21427c: 0x4bc118aa  vmul.xyz    $vf2, $vf3, $vf1
    ctx->pc = 0x21427cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214280: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x214280u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x214284: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x214284u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x214288: 0x4b02208a  vmaddz.x    $vf2, $vf4, $vf2z
    ctx->pc = 0x214288u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21428c: 0x7bab00a0  lq          $t3, 0xA0($sp)
    ctx->pc = 0x21428cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x214290: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x214290u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x214294: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x214294u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214298: 0x0  nop
    ctx->pc = 0x214298u;
    // NOP
    // 0x21429c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x21429cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2142a0: 0x0  nop
    ctx->pc = 0x2142a0u;
    // NOP
    // 0x2142a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2142A4u;
    {
        const bool branch_taken_0x2142a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2142A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2142A4u;
            // 0x2142a8: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142a4) {
            ctx->pc = 0x2142B0u;
            goto label_2142b0;
        }
    }
    ctx->pc = 0x2142ACu;
    // 0x2142ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2142acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2142b0:
    // 0x2142b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2142b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2142b4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2142B4u;
    {
        const bool branch_taken_0x2142b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2142B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2142B4u;
            // 0x2142b8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142b4) {
            ctx->pc = 0x214300u;
            goto label_214300;
        }
    }
    ctx->pc = 0x2142BCu;
    // 0x2142bc: 0x6a07001f  ldl         $a3, 0x1F($s0)
    ctx->pc = 0x2142bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2142c0: 0x6e070018  ldr         $a3, 0x18($s0)
    ctx->pc = 0x2142c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2142c4: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x2142c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2142c8: 0xb2270007  sdl         $a3, 0x7($s1)
    ctx->pc = 0x2142c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2142cc: 0xb6270000  sdr         $a3, 0x0($s1)
    ctx->pc = 0x2142ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2142d0: 0xae280008  sw          $t0, 0x8($s1)
    ctx->pc = 0x2142d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
    // 0x2142d4: 0x26720078  addiu       $s2, $s3, 0x78
    ctx->pc = 0x2142d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2142d8: 0x6a03002b  ldl         $v1, 0x2B($s0)
    ctx->pc = 0x2142d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2142dc: 0x6e030024  ldr         $v1, 0x24($s0)
    ctx->pc = 0x2142dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2142e0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2142e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2142e4: 0xb203001f  sdl         $v1, 0x1F($s0)
    ctx->pc = 0x2142e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2142e8: 0xb6030018  sdr         $v1, 0x18($s0)
    ctx->pc = 0x2142e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2142ec: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x2142ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x2142f0: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x2142f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2142f4: 0xae150030  sw          $s5, 0x30($s0)
    ctx->pc = 0x2142f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 21));
    // 0x2142f8: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x2142f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2142fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2142fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_214300:
    // 0x214300: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x214300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x214304: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x214304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x214308: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x214308u;
    {
        const bool branch_taken_0x214308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214308u;
            // 0x21430c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214308) {
            ctx->pc = 0x214210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214210;
        }
    }
    ctx->pc = 0x214310u;
    // 0x214310: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x214310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x214314: 0x5040fefc  beql        $v0, $zero, . + 4 + (-0x104 << 2)
    ctx->pc = 0x214314u;
    {
        const bool branch_taken_0x214314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214314) {
            ctx->pc = 0x214318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214314u;
            // 0x214318: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x213F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213f08;
        }
    }
    ctx->pc = 0x21431Cu;
    // 0x21431c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x21431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x214320: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x214320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x214324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214328: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21432c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x21432cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x214330: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x214330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214334: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x214334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214338: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x214338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x21433c: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x21433cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x214340: 0x8e150010  lw          $s5, 0x10($s0)
    ctx->pc = 0x214340u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x214344: 0x8e16001c  lw          $s6, 0x1C($s0)
    ctx->pc = 0x214344u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x214348: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21434c: 0x8e140028  lw          $s4, 0x28($s0)
    ctx->pc = 0x21434cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x214350: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x214350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214354: 0x8e130030  lw          $s3, 0x30($s0)
    ctx->pc = 0x214354u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x214358: 0xc084e28  jal         func_2138A0
    ctx->pc = 0x214358u;
    SET_GPR_U32(ctx, 31, 0x214360u);
    ctx->pc = 0x21435Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214358u;
            // 0x21435c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2138A0u;
    if (runtime->hasFunction(0x2138A0u)) {
        auto targetFn = runtime->lookupFunction(0x2138A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214360u; }
        if (ctx->pc != 0x214360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002138A0_0x2138a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214360u; }
        if (ctx->pc != 0x214360u) { return; }
    }
    ctx->pc = 0x214360u;
label_214360:
    // 0x214360: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x214360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x214364: 0x56620020  bnel        $s3, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x214364u;
    {
        const bool branch_taken_0x214364 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x214364) {
            ctx->pc = 0x214368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214364u;
            // 0x214368: 0x8e03003c  lw          $v1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2143E8u;
            goto label_2143e8;
        }
    }
    ctx->pc = 0x21436Cu;
    // 0x21436c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21436cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214370: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214374: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x214374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214378: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x214378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21437c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21437cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214380: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x214380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214384: 0xc084e28  jal         func_2138A0
    ctx->pc = 0x214384u;
    SET_GPR_U32(ctx, 31, 0x21438Cu);
    ctx->pc = 0x214388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214384u;
            // 0x214388: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2138A0u;
    if (runtime->hasFunction(0x2138A0u)) {
        auto targetFn = runtime->lookupFunction(0x2138A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21438Cu; }
        if (ctx->pc != 0x21438Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002138A0_0x2138a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21438Cu; }
        if (ctx->pc != 0x21438Cu) { return; }
    }
    ctx->pc = 0x21438Cu;
label_21438c:
    // 0x21438c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x21438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x214390: 0x56620015  bnel        $s3, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x214390u;
    {
        const bool branch_taken_0x214390 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x214390) {
            ctx->pc = 0x214394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x214390u;
            // 0x214394: 0x8e03003c  lw          $v1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2143E8u;
            goto label_2143e8;
        }
    }
    ctx->pc = 0x214398u;
    // 0x214398: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21439c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143a0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2143a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143a4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2143a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2143a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143ac: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2143acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143b0: 0xc084e28  jal         func_2138A0
    ctx->pc = 0x2143B0u;
    SET_GPR_U32(ctx, 31, 0x2143B8u);
    ctx->pc = 0x2143B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2143B0u;
            // 0x2143b4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2138A0u;
    if (runtime->hasFunction(0x2138A0u)) {
        auto targetFn = runtime->lookupFunction(0x2138A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2143B8u; }
        if (ctx->pc != 0x2143B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002138A0_0x2138a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2143B8u; }
        if (ctx->pc != 0x2143B8u) { return; }
    }
    ctx->pc = 0x2143B8u;
label_2143b8:
    // 0x2143b8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2143b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2143bc: 0x5662000a  bnel        $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2143BCu;
    {
        const bool branch_taken_0x2143bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2143bc) {
            ctx->pc = 0x2143C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2143BCu;
            // 0x2143c0: 0x8e03003c  lw          $v1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2143E8u;
            goto label_2143e8;
        }
    }
    ctx->pc = 0x2143C4u;
    // 0x2143c4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2143c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2143c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143cc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2143ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143d0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2143d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2143d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2143d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143dc: 0xc084e28  jal         func_2138A0
    ctx->pc = 0x2143DCu;
    SET_GPR_U32(ctx, 31, 0x2143E4u);
    ctx->pc = 0x2143E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2143DCu;
            // 0x2143e0: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2138A0u;
    if (runtime->hasFunction(0x2138A0u)) {
        auto targetFn = runtime->lookupFunction(0x2138A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2143E4u; }
        if (ctx->pc != 0x2143E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002138A0_0x2138a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2143E4u; }
        if (ctx->pc != 0x2143E4u) { return; }
    }
    ctx->pc = 0x2143E4u;
label_2143e4:
    // 0x2143e4: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2143e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2143e8:
    // 0x2143e8: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x2143e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2143ec: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x2143ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2143f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2143f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143f4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2143f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143f8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2143f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2143fc: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x2143fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
label_214400:
    // 0x214400: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x214400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214404: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x214404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x214408: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x214408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x21440c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x21440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x214410: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x214410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x214414: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x214414u;
    {
        const bool branch_taken_0x214414 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x214418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214414u;
            // 0x214418: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214414) {
            ctx->pc = 0x214400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214400;
        }
    }
    ctx->pc = 0x21441Cu;
    // 0x21441c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x21441cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x214420: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x214420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x214424: 0x14e2000a  bne         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x214424u;
    {
        const bool branch_taken_0x214424 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x214428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214424u;
            // 0x214428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214424) {
            ctx->pc = 0x214450u;
            goto label_214450;
        }
    }
    ctx->pc = 0x21442Cu;
    // 0x21442c: 0x6a07002b  ldl         $a3, 0x2B($s0)
    ctx->pc = 0x21442cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x214430: 0x6e070024  ldr         $a3, 0x24($s0)
    ctx->pc = 0x214430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x214434: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x214434u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x214438: 0xb2070007  sdl         $a3, 0x7($s0)
    ctx->pc = 0x214438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21443c: 0xb6070000  sdr         $a3, 0x0($s0)
    ctx->pc = 0x21443cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x214440: 0xae0f0008  sw          $t7, 0x8($s0)
    ctx->pc = 0x214440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 15));
    // 0x214444: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x214444u;
    {
        const bool branch_taken_0x214444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214444u;
            // 0x214448: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214444) {
            ctx->pc = 0x214498u;
            goto label_214498;
        }
    }
    ctx->pc = 0x21444Cu;
    // 0x21444c: 0x0  nop
    ctx->pc = 0x21444cu;
    // NOP
label_214450:
    // 0x214450: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x214450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_214454:
    // 0x214454: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x214454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x214458: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x214458u;
    {
        const bool branch_taken_0x214458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21445Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214458u;
            // 0x21445c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214458) {
            ctx->pc = 0x214494u;
            goto label_214494;
        }
    }
    ctx->pc = 0x214460u;
    // 0x214460: 0xc42818  mult        $a1, $a2, $a0
    ctx->pc = 0x214460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x214464: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x214464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x214468: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21446c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x21446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x214470: 0x14e4fff8  bne         $a3, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x214470u;
    {
        const bool branch_taken_0x214470 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x214474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214470u;
            // 0x214474: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214470) {
            ctx->pc = 0x214454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_214454;
        }
    }
    ctx->pc = 0x214478u;
    // 0x214478: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x214478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x21447c: 0x6a05002b  ldl         $a1, 0x2B($s0)
    ctx->pc = 0x21447cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x214480: 0x6e050024  ldr         $a1, 0x24($s0)
    ctx->pc = 0x214480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x214484: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x214484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x214488: 0xb0450007  sdl         $a1, 0x7($v0)
    ctx->pc = 0x214488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21448c: 0xb4450000  sdr         $a1, 0x0($v0)
    ctx->pc = 0x21448cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x214490: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x214490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_214494:
    // 0x214494: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x214494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_214498:
    // 0x214498: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x214498u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21449c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21449cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2144a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2144a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2144a4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2144a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2144a8:
    // 0x2144a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2144a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2144ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2144acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2144b0: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2144b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2144b4: 0x0  nop
    ctx->pc = 0x2144b4u;
    // NOP
    // 0x2144b8: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2144B8u;
    {
        const bool branch_taken_0x2144b8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2144BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2144B8u;
            // 0x2144bc: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144b8) {
            ctx->pc = 0x2144A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2144a8;
        }
    }
    ctx->pc = 0x2144C0u;
label_2144c0:
    // 0x2144c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2144c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2144c4: 0x0  nop
    ctx->pc = 0x2144c4u;
    // NOP
    // 0x2144c8: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x2144c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2144cc: 0x0  nop
    ctx->pc = 0x2144ccu;
    // NOP
    // 0x2144d0: 0x4501fdcb  bc1t        . + 4 + (-0x235 << 2)
    ctx->pc = 0x2144D0u;
    {
        const bool branch_taken_0x2144d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2144D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2144D0u;
            // 0x2144d4: 0x8faf0090  lw          $t7, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144d0) {
            ctx->pc = 0x213C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_213c00;
        }
    }
    ctx->pc = 0x2144D8u;
label_2144d8:
    // 0x2144d8: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x2144d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2144dc:
    // 0x2144dc: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x2144dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2144e0: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x2144e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2144e4: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x2144e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2144e8: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x2144e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2144ec: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x2144ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2144f0: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x2144f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2144f4: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x2144f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2144f8: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x2144f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2144fc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2144fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x214500: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x214500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x214504: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x214504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x214508: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x214508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21450c: 0x3e00008  jr          $ra
    ctx->pc = 0x21450Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21450Cu;
            // 0x214510: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214514u;
    // 0x214514: 0x0  nop
    ctx->pc = 0x214514u;
    // NOP
}
