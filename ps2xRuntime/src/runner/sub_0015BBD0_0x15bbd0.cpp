#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015BBD0
// Address: 0x15bbd0 - 0x15bd20
void sub_0015BBD0_0x15bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BBD0_0x15bbd0");
#endif

    switch (ctx->pc) {
        case 0x15bc28u: goto label_15bc28;
        case 0x15bc5cu: goto label_15bc5c;
        case 0x15bc74u: goto label_15bc74;
        default: break;
    }

    ctx->pc = 0x15bbd0u;

    // 0x15bbd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15bbd4: 0x2ce10004  sltiu       $at, $a3, 0x4
    ctx->pc = 0x15bbd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x15bbd8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15bbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15bbdc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15bbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15bbe0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15bbe4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x15bbe4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbe8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15bbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15bbec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15bbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15bbf0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15bbf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbf4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15bbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15bbf8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15bbf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15bbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15bc00: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x15bc00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bc08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15bc08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc0c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15BC0Cu;
    {
        const bool branch_taken_0x15bc0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC0Cu;
            // 0x15bc10: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc0c) {
            ctx->pc = 0x15BC18u;
            goto label_15bc18;
        }
    }
    ctx->pc = 0x15BC14u;
    // 0x15bc14: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x15bc14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15bc18:
    // 0x15bc18: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x15BC18u;
    {
        const bool branch_taken_0x15bc18 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC18u;
            // 0x15bc1c: 0x24f60001  addiu       $s6, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc18) {
            ctx->pc = 0x15BC50u;
            goto label_15bc50;
        }
    }
    ctx->pc = 0x15BC20u;
    // 0x15bc20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15bc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc24: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x15bc24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15bc28:
    // 0x15bc28: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15bc2c: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x15bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x15bc30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15bc34: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x15bc34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x15bc38: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x15bc3c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x15bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x15bc40: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x15bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x15bc44: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x15bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x15bc48: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15BC48u;
    {
        const bool branch_taken_0x15bc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC48u;
            // 0x15bc4c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc48) {
            ctx->pc = 0x15BC28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15bc28;
        }
    }
    ctx->pc = 0x15BC50u;
label_15bc50:
    // 0x15bc50: 0x1ac00025  blez        $s6, . + 4 + (0x25 << 2)
    ctx->pc = 0x15BC50u;
    {
        const bool branch_taken_0x15bc50 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x15BC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC50u;
            // 0x15bc54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc50) {
            ctx->pc = 0x15BCE8u;
            goto label_15bce8;
        }
    }
    ctx->pc = 0x15BC58u;
    // 0x15bc58: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x15bc58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15bc5c:
    // 0x15bc5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15bc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc60: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15bc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc64: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15bc64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc68: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x15bc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x15bc6c: 0xc056e7c  jal         func_15B9F0
    ctx->pc = 0x15BC6Cu;
    SET_GPR_U32(ctx, 31, 0x15BC74u);
    ctx->pc = 0x15BC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC6Cu;
            // 0x15bc70: 0x27a80098  addiu       $t0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B9F0u;
    if (runtime->hasFunction(0x15B9F0u)) {
        auto targetFn = runtime->lookupFunction(0x15B9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC74u; }
        if (ctx->pc != 0x15BC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B9F0_0x15b9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC74u; }
        if (ctx->pc != 0x15BC74u) { return; }
    }
    ctx->pc = 0x15BC74u;
label_15bc74:
    // 0x15bc74: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x15bc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x15bc78: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x15bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x15bc7c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x15bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x15bc80: 0x14a042  srl         $s4, $s4, 1
    ctx->pc = 0x15bc80u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x15bc84: 0x15a842  srl         $s5, $s5, 1
    ctx->pc = 0x15bc84u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x15bc88: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x15bc88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15bc8c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x15bc8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15bc90: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x15bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x15bc94: 0x246300ff  addiu       $v1, $v1, 0xFF
    ctx->pc = 0x15bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x15bc98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15bc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15bc9c: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x15BC9Cu;
    {
        const bool branch_taken_0x15bc9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC9Cu;
            // 0x15bca0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc9c) {
            ctx->pc = 0x15BCA8u;
            goto label_15bca8;
        }
    }
    ctx->pc = 0x15BCA4u;
    // 0x15bca4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x15bca4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bca8:
    // 0x15bca8: 0x12e0000b  beqz        $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x15BCA8u;
    {
        const bool branch_taken_0x15bca8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bca8) {
            ctx->pc = 0x15BCD8u;
            goto label_15bcd8;
        }
    }
    ctx->pc = 0x15BCB0u;
    // 0x15bcb0: 0x2a010006  slti        $at, $s0, 0x6
    ctx->pc = 0x15bcb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15bcb4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BCB4u;
    {
        const bool branch_taken_0x15bcb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bcb4) {
            ctx->pc = 0x15BCD8u;
            goto label_15bcd8;
        }
    }
    ctx->pc = 0x15BCBCu;
    // 0x15bcbc: 0x121202  srl         $v0, $s2, 8
    ctx->pc = 0x15bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x15bcc0: 0x151982  srl         $v1, $s5, 6
    ctx->pc = 0x15bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 6));
    // 0x15bcc4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15BCC4u;
    {
        const bool branch_taken_0x15bcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BCC4u;
            // 0x15bcc8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bcc4) {
            ctx->pc = 0x15BCD0u;
            goto label_15bcd0;
        }
    }
    ctx->pc = 0x15BCCCu;
    // 0x15bccc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bcd0:
    // 0x15bcd0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x15bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x15bcd4: 0x0  nop
    ctx->pc = 0x15bcd4u;
    // NOP
label_15bcd8:
    // 0x15bcd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15bcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15bcdc: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x15bcdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x15bce0: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x15BCE0u;
    {
        const bool branch_taken_0x15bce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BCE0u;
            // 0x15bce4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bce0) {
            ctx->pc = 0x15BC5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15BCE8u;
label_15bce8:
    // 0x15bce8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15bce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bcec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15bcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15bcf0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15bcf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15bcf4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15bcf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15bcf8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15bcf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15bcfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15bcfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bd00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15bd00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bd04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15bd04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bd08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bd08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bd0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bd0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bd10: 0x3e00008  jr          $ra
    ctx->pc = 0x15BD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD10u;
            // 0x15bd14: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BD18u;
    // 0x15bd18: 0x0  nop
    ctx->pc = 0x15bd18u;
    // NOP
    // 0x15bd1c: 0x0  nop
    ctx->pc = 0x15bd1cu;
    // NOP
}
