#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AAD0
// Address: 0x16aad0 - 0x16ac40
void sub_0016AAD0_0x16aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AAD0_0x16aad0");
#endif

    switch (ctx->pc) {
        case 0x16ab20u: goto label_16ab20;
        case 0x16ab3cu: goto label_16ab3c;
        case 0x16ab58u: goto label_16ab58;
        case 0x16ab9cu: goto label_16ab9c;
        case 0x16abe4u: goto label_16abe4;
        case 0x16ac1cu: goto label_16ac1c;
        case 0x16ac24u: goto label_16ac24;
        case 0x16ac2cu: goto label_16ac2c;
        default: break;
    }

    ctx->pc = 0x16aad0u;

    // 0x16aad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16aad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16aad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16aad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16aad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16aad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aadc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16aadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16aae0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16aae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aae4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16aae8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16aae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aaec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16aaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16aaf0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AAF0u;
    {
        const bool branch_taken_0x16aaf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AAF0u;
            // 0x16aaf4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aaf0) {
            ctx->pc = 0x16AB08u;
            goto label_16ab08;
        }
    }
    ctx->pc = 0x16AAF8u;
    // 0x16aaf8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16aafc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16AAFCu;
    {
        const bool branch_taken_0x16aafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AAFCu;
            // 0x16ab00: 0x24843980  addiu       $a0, $a0, 0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aafc) {
            ctx->pc = 0x16AB94u;
            goto label_16ab94;
        }
    }
    ctx->pc = 0x16AB04u;
    // 0x16ab04: 0x0  nop
    ctx->pc = 0x16ab04u;
    // NOP
label_16ab08:
    // 0x16ab08: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16ab0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ab0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16ab10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab14: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x16ab14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab18: 0xc05a148  jal         func_168520
    ctx->pc = 0x16AB18u;
    SET_GPR_U32(ctx, 31, 0x16AB20u);
    ctx->pc = 0x16AB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB18u;
            // 0x16ab1c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB20u; }
        if (ctx->pc != 0x16AB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB20u; }
        if (ctx->pc != 0x16AB20u) { return; }
    }
    ctx->pc = 0x16AB20u;
label_16ab20:
    // 0x16ab20: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x16ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16ab24: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x16ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x16ab28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16ab28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16ab2c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AB2Cu;
    {
        const bool branch_taken_0x16ab2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ab2c) {
            ctx->pc = 0x16AB30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB2Cu;
            // 0x16ab30: 0x82020001  lb          $v0, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16AB44u;
            goto label_16ab44;
        }
    }
    ctx->pc = 0x16AB34u;
    // 0x16ab34: 0xc05ab2a  jal         func_16ACA8
    ctx->pc = 0x16AB34u;
    SET_GPR_U32(ctx, 31, 0x16AB3Cu);
    ctx->pc = 0x16AB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB34u;
            // 0x16ab38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ACA8u;
    if (runtime->hasFunction(0x16ACA8u)) {
        auto targetFn = runtime->lookupFunction(0x16ACA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB3Cu; }
        if (ctx->pc != 0x16AB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ACA8_0x16aca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB3Cu; }
        if (ctx->pc != 0x16AB3Cu) { return; }
    }
    ctx->pc = 0x16AB3Cu;
label_16ab3c:
    // 0x16ab3c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x16ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x16ab40: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x16ab40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_16ab44:
    // 0x16ab44: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x16ab44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ab48: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AB48u;
    {
        const bool branch_taken_0x16ab48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x16ab48) {
            ctx->pc = 0x16AB58u;
            goto label_16ab58;
        }
    }
    ctx->pc = 0x16AB50u;
    // 0x16ab50: 0xc05a9c6  jal         func_16A718
    ctx->pc = 0x16AB50u;
    SET_GPR_U32(ctx, 31, 0x16AB58u);
    ctx->pc = 0x16AB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB50u;
            // 0x16ab54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A718u;
    if (runtime->hasFunction(0x16A718u)) {
        auto targetFn = runtime->lookupFunction(0x16A718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB58u; }
        if (ctx->pc != 0x16AB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A718_0x16a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB58u; }
        if (ctx->pc != 0x16AB58u) { return; }
    }
    ctx->pc = 0x16AB58u;
label_16ab58:
    // 0x16ab58: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AB58u;
    {
        const bool branch_taken_0x16ab58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB58u;
            // 0x16ab5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab58) {
            ctx->pc = 0x16AB68u;
            goto label_16ab68;
        }
    }
    ctx->pc = 0x16AB60u;
    // 0x16ab60: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16AB60u;
    {
        const bool branch_taken_0x16ab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB60u;
            // 0x16ab64: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab60) {
            ctx->pc = 0x16ABA8u;
            goto label_16aba8;
        }
    }
    ctx->pc = 0x16AB68u;
label_16ab68:
    // 0x16ab68: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AB68u;
    {
        const bool branch_taken_0x16ab68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ab68) {
            ctx->pc = 0x16AB78u;
            goto label_16ab78;
        }
    }
    ctx->pc = 0x16AB70u;
    // 0x16ab70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AB70u;
    {
        const bool branch_taken_0x16ab70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB70u;
            // 0x16ab74: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab70) {
            ctx->pc = 0x16AB84u;
            goto label_16ab84;
        }
    }
    ctx->pc = 0x16AB78u;
label_16ab78:
    // 0x16ab78: 0x16530005  bne         $s2, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AB78u;
    {
        const bool branch_taken_0x16ab78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x16AB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB78u;
            // 0x16ab7c: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab78) {
            ctx->pc = 0x16AB90u;
            goto label_16ab90;
        }
    }
    ctx->pc = 0x16AB80u;
    // 0x16ab80: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16ab84:
    // 0x16ab84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x16ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16ab88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16AB88u;
    {
        const bool branch_taken_0x16ab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB88u;
            // 0x16ab8c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab88) {
            ctx->pc = 0x16ABA8u;
            goto label_16aba8;
        }
    }
    ctx->pc = 0x16AB90u;
label_16ab90:
    // 0x16ab90: 0x248439a8  addiu       $a0, $a0, 0x39A8
    ctx->pc = 0x16ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14760));
label_16ab94:
    // 0x16ab94: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16AB94u;
    SET_GPR_U32(ctx, 31, 0x16AB9Cu);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB9Cu; }
        if (ctx->pc != 0x16AB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB9Cu; }
        if (ctx->pc != 0x16AB9Cu) { return; }
    }
    ctx->pc = 0x16AB9Cu;
label_16ab9c:
    // 0x16ab9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16AB9Cu;
    {
        const bool branch_taken_0x16ab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB9Cu;
            // 0x16aba0: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab9c) {
            ctx->pc = 0x16ABE8u;
            goto label_16abe8;
        }
    }
    ctx->pc = 0x16ABA4u;
    // 0x16aba4: 0x0  nop
    ctx->pc = 0x16aba4u;
    // NOP
label_16aba8:
    // 0x16aba8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16abac: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16ABACu;
    {
        const bool branch_taken_0x16abac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16abac) {
            ctx->pc = 0x16ABB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABACu;
            // 0x16abb0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16ABC0u;
            goto label_16abc0;
        }
    }
    ctx->pc = 0x16ABB4u;
    // 0x16abb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16ABB4u;
    {
        const bool branch_taken_0x16abb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABB4u;
            // 0x16abb8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abb4) {
            ctx->pc = 0x16ABCCu;
            goto label_16abcc;
        }
    }
    ctx->pc = 0x16ABBCu;
    // 0x16abbc: 0x0  nop
    ctx->pc = 0x16abbcu;
    // NOP
label_16abc0:
    // 0x16abc0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x16abc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16abc4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16ABC4u;
    {
        const bool branch_taken_0x16abc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16abc4) {
            ctx->pc = 0x16ABC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABC4u;
            // 0x16abc8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16ABCCu;
            goto label_16abcc;
        }
    }
    ctx->pc = 0x16ABCCu;
label_16abcc:
    // 0x16abcc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x16abccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abd0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x16abd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abd4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16abd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16abdc: 0xc05a148  jal         func_168520
    ctx->pc = 0x16ABDCu;
    SET_GPR_U32(ctx, 31, 0x16ABE4u);
    ctx->pc = 0x16ABE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABDCu;
            // 0x16abe0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168520u;
    if (runtime->hasFunction(0x168520u)) {
        auto targetFn = runtime->lookupFunction(0x168520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABE4u; }
        if (ctx->pc != 0x16ABE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168520_0x168520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABE4u; }
        if (ctx->pc != 0x16ABE4u) { return; }
    }
    ctx->pc = 0x16ABE4u;
label_16abe4:
    // 0x16abe4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16abe8:
    // 0x16abe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16abe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16abec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16abecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16abf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16abf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16abf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16abf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16abf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16abf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16abfc: 0x3e00008  jr          $ra
    ctx->pc = 0x16ABFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABFCu;
            // 0x16ac00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AC04u;
    // 0x16ac04: 0x0  nop
    ctx->pc = 0x16ac04u;
    // NOP
    // 0x16ac08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ac08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ac0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ac0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ac10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16ac14: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16AC14u;
    SET_GPR_U32(ctx, 31, 0x16AC1Cu);
    ctx->pc = 0x16AC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC14u;
            // 0x16ac18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC1Cu; }
        if (ctx->pc != 0x16AC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC1Cu; }
        if (ctx->pc != 0x16AC1Cu) { return; }
    }
    ctx->pc = 0x16AC1Cu;
label_16ac1c:
    // 0x16ac1c: 0xc05ab10  jal         func_16AC40
    ctx->pc = 0x16AC1Cu;
    SET_GPR_U32(ctx, 31, 0x16AC24u);
    ctx->pc = 0x16AC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC1Cu;
            // 0x16ac20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AC40u;
    if (runtime->hasFunction(0x16AC40u)) {
        auto targetFn = runtime->lookupFunction(0x16AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC24u; }
        if (ctx->pc != 0x16AC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AC40_0x16ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC24u; }
        if (ctx->pc != 0x16AC24u) { return; }
    }
    ctx->pc = 0x16AC24u;
label_16ac24:
    // 0x16ac24: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16AC24u;
    SET_GPR_U32(ctx, 31, 0x16AC2Cu);
    ctx->pc = 0x16AC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC24u;
            // 0x16ac28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC2Cu; }
        if (ctx->pc != 0x16AC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC2Cu; }
        if (ctx->pc != 0x16AC2Cu) { return; }
    }
    ctx->pc = 0x16AC2Cu;
label_16ac2c:
    // 0x16ac2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ac2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ac30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16ac30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ac34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ac38: 0x3e00008  jr          $ra
    ctx->pc = 0x16AC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC38u;
            // 0x16ac3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AC40u;
}
