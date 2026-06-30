#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013EEB0
// Address: 0x13eeb0 - 0x13f0d0
void sub_0013EEB0_0x13eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EEB0_0x13eeb0");
#endif

    switch (ctx->pc) {
        case 0x13ef14u: goto label_13ef14;
        case 0x13ef24u: goto label_13ef24;
        case 0x13efd0u: goto label_13efd0;
        case 0x13f070u: goto label_13f070;
        case 0x13f07cu: goto label_13f07c;
        case 0x13f090u: goto label_13f090;
        case 0x13f09cu: goto label_13f09c;
        default: break;
    }

    ctx->pc = 0x13eeb0u;

    // 0x13eeb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13eeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13eeb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13eeb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13eeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13eebc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13eebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13eec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13eec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13eec4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13eec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13eec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13eecc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x13eeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eed0: 0x8c4256b4  lw          $v0, 0x56B4($v0)
    ctx->pc = 0x13eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22196)));
    // 0x13eed4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EED4u;
    {
        const bool branch_taken_0x13eed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EED4u;
            // 0x13eed8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eed4) {
            ctx->pc = 0x13EEE4u;
            goto label_13eee4;
        }
    }
    ctx->pc = 0x13EEDCu;
    // 0x13eedc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x13EEDCu;
    {
        const bool branch_taken_0x13eedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEDCu;
            // 0x13eee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eedc) {
            ctx->pc = 0x13F0B8u;
            goto label_13f0b8;
        }
    }
    ctx->pc = 0x13EEE4u;
label_13eee4:
    // 0x13eee4: 0x8f838198  lw          $v1, -0x7E68($gp)
    ctx->pc = 0x13eee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934936)));
    // 0x13eee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13eeec: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EEECu;
    {
        const bool branch_taken_0x13eeec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13eeec) {
            ctx->pc = 0x13EEFCu;
            goto label_13eefc;
        }
    }
    ctx->pc = 0x13EEF4u;
    // 0x13eef4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x13EEF4u;
    {
        const bool branch_taken_0x13eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEF4u;
            // 0x13eef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eef4) {
            ctx->pc = 0x13F0B8u;
            goto label_13f0b8;
        }
    }
    ctx->pc = 0x13EEFCu;
label_13eefc:
    // 0x13eefc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EEFCu;
    {
        const bool branch_taken_0x13eefc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eefc) {
            ctx->pc = 0x13EF0Cu;
            goto label_13ef0c;
        }
    }
    ctx->pc = 0x13EF04u;
    // 0x13ef04: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x13EF04u;
    {
        const bool branch_taken_0x13ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF04u;
            // 0x13ef08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef04) {
            ctx->pc = 0x13F0B8u;
            goto label_13f0b8;
        }
    }
    ctx->pc = 0x13EF0Cu;
label_13ef0c:
    // 0x13ef0c: 0xc04fb88  jal         func_13EE20
    ctx->pc = 0x13EF0Cu;
    SET_GPR_U32(ctx, 31, 0x13EF14u);
    ctx->pc = 0x13EE20u;
    if (runtime->hasFunction(0x13EE20u)) {
        auto targetFn = runtime->lookupFunction(0x13EE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF14u; }
        if (ctx->pc != 0x13EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EE20_0x13ee20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF14u; }
        if (ctx->pc != 0x13EF14u) { return; }
    }
    ctx->pc = 0x13EF14u;
label_13ef14:
    // 0x13ef14: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13EF14u;
    {
        const bool branch_taken_0x13ef14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ef14) {
            ctx->pc = 0x13EF18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF14u;
            // 0x13ef18: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13EF44u;
            goto label_13ef44;
        }
    }
    ctx->pc = 0x13EF1Cu;
    // 0x13ef1c: 0xc0562e0  jal         func_158B80
    ctx->pc = 0x13EF1Cu;
    SET_GPR_U32(ctx, 31, 0x13EF24u);
    ctx->pc = 0x13EF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF1Cu;
            // 0x13ef20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B80u;
    if (runtime->hasFunction(0x158B80u)) {
        auto targetFn = runtime->lookupFunction(0x158B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF24u; }
        if (ctx->pc != 0x13EF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158B80_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF24u; }
        if (ctx->pc != 0x13EF24u) { return; }
    }
    ctx->pc = 0x13EF24u;
label_13ef24:
    // 0x13ef24: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EF24u;
    {
        const bool branch_taken_0x13ef24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ef24) {
            ctx->pc = 0x13EF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF24u;
            // 0x13ef28: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13EF3Cu;
            goto label_13ef3c;
        }
    }
    ctx->pc = 0x13EF2Cu;
    // 0x13ef2c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ef30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ef30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef34: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x13EF34u;
    {
        const bool branch_taken_0x13ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EF34u;
            // 0x13ef38: 0xac6056b0  sw          $zero, 0x56B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ef34) {
            ctx->pc = 0x13F0B8u;
            goto label_13f0b8;
        }
    }
    ctx->pc = 0x13EF3Cu;
label_13ef3c:
    // 0x13ef3c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ef40: 0xac6456b0  sw          $a0, 0x56B0($v1)
    ctx->pc = 0x13ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22192), GPR_U32(ctx, 4));
label_13ef44:
    // 0x13ef44: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13ef44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13ef48: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ef4c: 0xa4905738  sh          $s0, 0x5738($a0)
    ctx->pc = 0x13ef4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22328), (uint16_t)GPR_U32(ctx, 16));
    // 0x13ef50: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13ef50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13ef54: 0xa460573c  sh          $zero, 0x573C($v1)
    ctx->pc = 0x13ef54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22332), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ef5c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ef60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13ef60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef64: 0xa464573e  sh          $a0, 0x573E($v1)
    ctx->pc = 0x13ef64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22334), (uint16_t)GPR_U32(ctx, 4));
    // 0x13ef68: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ef6c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13ef70: 0xa4605740  sh          $zero, 0x5740($v1)
    ctx->pc = 0x13ef70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22336), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef74: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ef78: 0xa4605742  sh          $zero, 0x5742($v1)
    ctx->pc = 0x13ef78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22338), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef7c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ef80: 0xa4605744  sh          $zero, 0x5744($v1)
    ctx->pc = 0x13ef80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22340), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef84: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ef88: 0xa460573a  sh          $zero, 0x573A($v1)
    ctx->pc = 0x13ef88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22330), (uint16_t)GPR_U32(ctx, 0));
    // 0x13ef8c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ef90: 0x8c6656b0  lw          $a2, 0x56B0($v1)
    ctx->pc = 0x13ef90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22192)));
    // 0x13ef94: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13ef98: 0x34c70001  ori         $a3, $a2, 0x1
    ctx->pc = 0x13ef98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x13ef9c: 0xa07056d4  sb          $s0, 0x56D4($v1)
    ctx->pc = 0x13ef9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22228), (uint8_t)GPR_U32(ctx, 16));
    // 0x13efa0: 0x908656d4  lbu         $a2, 0x56D4($a0)
    ctx->pc = 0x13efa0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22228)));
    // 0x13efa4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13efa8: 0xaca756b0  sw          $a3, 0x56B0($a1)
    ctx->pc = 0x13efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22192), GPR_U32(ctx, 7));
    // 0x13efac: 0x226001b  divu        $zero, $s1, $a2
    ctx->pc = 0x13efacu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x13efb0: 0x2012  mflo        $a0
    ctx->pc = 0x13efb0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x13efb4: 0x18c00014  blez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x13EFB4u;
    {
        const bool branch_taken_0x13efb4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x13EFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFB4u;
            // 0x13efb8: 0xac6456d0  sw          $a0, 0x56D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22224), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efb4) {
            ctx->pc = 0x13F008u;
            goto label_13f008;
        }
    }
    ctx->pc = 0x13EFBCu;
    // 0x13efbc: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x13efbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x13efc0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13efc4: 0x250856b0  addiu       $t0, $t0, 0x56B0
    ctx->pc = 0x13efc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22192));
    // 0x13efc8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13efcc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13efccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_13efd0:
    // 0x13efd0: 0x8ca656d0  lw          $a2, 0x56D0($a1)
    ctx->pc = 0x13efd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22224)));
    // 0x13efd4: 0xc93018  mult        $a2, $a2, $t1
    ctx->pc = 0x13efd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x13efd8: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x13efd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13efdc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x13efdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x13efe0: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x13efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x13efe4: 0x8c8656d0  lw          $a2, 0x56D0($a0)
    ctx->pc = 0x13efe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22224)));
    // 0x13efe8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x13efe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x13efec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x13efecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x13eff0: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x13eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x13eff4: 0x906656d4  lbu         $a2, 0x56D4($v1)
    ctx->pc = 0x13eff4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22228)));
    // 0x13eff8: 0x126302a  slt         $a2, $t1, $a2
    ctx->pc = 0x13eff8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x13effc: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x13EFFCu;
    {
        const bool branch_taken_0x13effc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFFCu;
            // 0x13f000: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13effc) {
            ctx->pc = 0x13EFD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13efd0;
        }
    }
    ctx->pc = 0x13F004u;
    // 0x13f004: 0x0  nop
    ctx->pc = 0x13f004u;
    // NOP
label_13f008:
    // 0x13f008: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f00c: 0x8c4556b4  lw          $a1, 0x56B4($v0)
    ctx->pc = 0x13f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22196)));
    // 0x13f010: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f014: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13f014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f018: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13f018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f01c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f020: 0xac6556cc  sw          $a1, 0x56CC($v1)
    ctx->pc = 0x13f020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22220), GPR_U32(ctx, 5));
    // 0x13f024: 0xa04056d5  sb          $zero, 0x56D5($v0)
    ctx->pc = 0x13f024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22229), (uint8_t)GPR_U32(ctx, 0));
    // 0x13f028: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f02c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f030: 0xa46056da  sh          $zero, 0x56DA($v1)
    ctx->pc = 0x13f030u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22234), (uint16_t)GPR_U32(ctx, 0));
    // 0x13f034: 0xa44456d6  sh          $a0, 0x56D6($v0)
    ctx->pc = 0x13f034u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22230), (uint16_t)GPR_U32(ctx, 4));
    // 0x13f038: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x13f038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x13f03c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f040: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f044: 0x944456d6  lhu         $a0, 0x56D6($v0)
    ctx->pc = 0x13f044u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22230)));
    // 0x13f048: 0x24a5e7f0  addiu       $a1, $a1, -0x1810
    ctx->pc = 0x13f048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961136));
    // 0x13f04c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f050: 0xac64582c  sw          $a0, 0x582C($v1)
    ctx->pc = 0x13f050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22572), GPR_U32(ctx, 4));
    // 0x13f054: 0xac405748  sw          $zero, 0x5748($v0)
    ctx->pc = 0x13f054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22344), GPR_U32(ctx, 0));
    // 0x13f058: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13f058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f05c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f060: 0xac40574c  sw          $zero, 0x574C($v0)
    ctx->pc = 0x13f060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22348), GPR_U32(ctx, 0));
    // 0x13f064: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f068: 0xc04301c  jal         func_10C070
    ctx->pc = 0x13F068u;
    SET_GPR_U32(ctx, 31, 0x13F070u);
    ctx->pc = 0x13F06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F068u;
            // 0x13f06c: 0xac405750  sw          $zero, 0x5750($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C070u;
    if (runtime->hasFunction(0x10C070u)) {
        auto targetFn = runtime->lookupFunction(0x10C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F070u; }
        if (ctx->pc != 0x13F070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C070_0x10c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F070u; }
        if (ctx->pc != 0x13F070u) { return; }
    }
    ctx->pc = 0x13F070u;
label_13f070:
    // 0x13f070: 0xaf828028  sw          $v0, -0x7FD8($gp)
    ctx->pc = 0x13f070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934568), GPR_U32(ctx, 2));
    // 0x13f074: 0xc0433de  jal         func_10CF78
    ctx->pc = 0x13F074u;
    SET_GPR_U32(ctx, 31, 0x13F07Cu);
    ctx->pc = 0x13F078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F074u;
            // 0x13f078: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CF78u;
    if (runtime->hasFunction(0x10CF78u)) {
        auto targetFn = runtime->lookupFunction(0x10CF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F07Cu; }
        if (ctx->pc != 0x13F07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CF78_0x10cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F07Cu; }
        if (ctx->pc != 0x13F07Cu) { return; }
    }
    ctx->pc = 0x13F07Cu;
label_13f07c:
    // 0x13f07c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x13f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x13f080: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x13f080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13f084: 0x24a5e940  addiu       $a1, $a1, -0x16C0
    ctx->pc = 0x13f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961472));
    // 0x13f088: 0xc043010  jal         func_10C040
    ctx->pc = 0x13F088u;
    SET_GPR_U32(ctx, 31, 0x13F090u);
    ctx->pc = 0x13F08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F088u;
            // 0x13f08c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C040u;
    if (runtime->hasFunction(0x10C040u)) {
        auto targetFn = runtime->lookupFunction(0x10C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F090u; }
        if (ctx->pc != 0x13F090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C040_0x10c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F090u; }
        if (ctx->pc != 0x13F090u) { return; }
    }
    ctx->pc = 0x13F090u;
label_13f090:
    // 0x13f090: 0xaf82802c  sw          $v0, -0x7FD4($gp)
    ctx->pc = 0x13f090u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934572), GPR_U32(ctx, 2));
    // 0x13f094: 0xc0433aa  jal         func_10CEA8
    ctx->pc = 0x13F094u;
    SET_GPR_U32(ctx, 31, 0x13F09Cu);
    ctx->pc = 0x13F098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F094u;
            // 0x13f098: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEA8u;
    if (runtime->hasFunction(0x10CEA8u)) {
        auto targetFn = runtime->lookupFunction(0x10CEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F09Cu; }
        if (ctx->pc != 0x13F09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEA8_0x10cea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F09Cu; }
        if (ctx->pc != 0x13F09Cu) { return; }
    }
    ctx->pc = 0x13F09Cu;
label_13f09c:
    // 0x13f09c: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x13f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x13f0a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f0a4: 0x2442eae0  addiu       $v0, $v0, -0x1520
    ctx->pc = 0x13f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961888));
    // 0x13f0a8: 0xaf838198  sw          $v1, -0x7E68($gp)
    ctx->pc = 0x13f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934936), GPR_U32(ctx, 3));
    // 0x13f0ac: 0xaf82819c  sw          $v0, -0x7E64($gp)
    ctx->pc = 0x13f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934940), GPR_U32(ctx, 2));
    // 0x13f0b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f0b4: 0x8c4256b4  lw          $v0, 0x56B4($v0)
    ctx->pc = 0x13f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22196)));
label_13f0b8:
    // 0x13f0b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13f0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f0bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f0c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x13F0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0C8u;
            // 0x13f0cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F0D0u;
}
