#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017CB38
// Address: 0x17cb38 - 0x17ccf8
void sub_0017CB38_0x17cb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CB38_0x17cb38");
#endif

    switch (ctx->pc) {
        case 0x17cb4cu: goto label_17cb4c;
        case 0x17cb68u: goto label_17cb68;
        case 0x17cbd4u: goto label_17cbd4;
        case 0x17cbf4u: goto label_17cbf4;
        case 0x17cbfcu: goto label_17cbfc;
        case 0x17cc04u: goto label_17cc04;
        case 0x17cc0cu: goto label_17cc0c;
        case 0x17cc18u: goto label_17cc18;
        case 0x17cc68u: goto label_17cc68;
        case 0x17cc88u: goto label_17cc88;
        case 0x17cc90u: goto label_17cc90;
        case 0x17cc98u: goto label_17cc98;
        case 0x17cca0u: goto label_17cca0;
        case 0x17ccacu: goto label_17ccac;
        case 0x17ccc4u: goto label_17ccc4;
        case 0x17ccd8u: goto label_17ccd8;
        default: break;
    }

    ctx->pc = 0x17cb38u;

    // 0x17cb38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17cb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17cb3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cb40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17cb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17cb44: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x17CB44u;
    SET_GPR_U32(ctx, 31, 0x17CB4Cu);
    ctx->pc = 0x17CB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CB44u;
            // 0x17cb48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CB4Cu; }
        if (ctx->pc != 0x17CB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CB4Cu; }
        if (ctx->pc != 0x17CB4Cu) { return; }
    }
    ctx->pc = 0x17CB4Cu;
label_17cb4c:
    // 0x17cb4c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17cb4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb50: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x17CB50u;
    {
        const bool branch_taken_0x17cb50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CB50u;
            // 0x17cb54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb50) {
            ctx->pc = 0x17CBA0u;
            goto label_17cba0;
        }
    }
    ctx->pc = 0x17CB58u;
    // 0x17cb58: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x17cb58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x17cb5c: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x17cb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x17cb60: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x17cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x17cb64: 0x0  nop
    ctx->pc = 0x17cb64u;
    // NOP
label_17cb68:
    // 0x17cb68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17cb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17cb6c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17cb6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cb70: 0xc7282b  sltu        $a1, $a2, $a3
    ctx->pc = 0x17cb70u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x17cb74: 0x14490003  bne         $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CB74u;
    {
        const bool branch_taken_0x17cb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x17CB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CB74u;
            // 0x17cb78: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb74) {
            ctx->pc = 0x17CB84u;
            goto label_17cb84;
        }
    }
    ctx->pc = 0x17CB7Cu;
    // 0x17cb7c: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x17cb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x17cb80: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x17cb80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_17cb84:
    // 0x17cb84: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x17cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x17cb88: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x17cb88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x17cb8c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CB8Cu;
    {
        const bool branch_taken_0x17cb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CB8Cu;
            // 0x17cb90: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb8c) {
            ctx->pc = 0x17CB98u;
            goto label_17cb98;
        }
    }
    ctx->pc = 0x17CB94u;
    // 0x17cb94: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x17cb94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_17cb98:
    // 0x17cb98: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x17CB98u;
    {
        const bool branch_taken_0x17cb98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CB98u;
            // 0x17cb9c: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb98) {
            ctx->pc = 0x17CB68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17cb68;
        }
    }
    ctx->pc = 0x17CBA0u;
label_17cba0:
    // 0x17cba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cba4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17cba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17cba8: 0x3e00008  jr          $ra
    ctx->pc = 0x17CBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBA8u;
            // 0x17cbac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CBB0u;
    // 0x17cbb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17cbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17cbb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17cbb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbb8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x17cbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x17cbbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17cbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbc0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x17cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x17cbc4: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17CBC4u;
    {
        const bool branch_taken_0x17cbc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBC4u;
            // 0x17cbc8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbc4) {
            ctx->pc = 0x17CC24u;
            goto label_17cc24;
        }
    }
    ctx->pc = 0x17CBCCu;
    // 0x17cbcc: 0xc05f77a  jal         func_17DDE8
    ctx->pc = 0x17CBCCu;
    SET_GPR_U32(ctx, 31, 0x17CBD4u);
    ctx->pc = 0x17CBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBCCu;
            // 0x17cbd0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDE8u;
    if (runtime->hasFunction(0x17DDE8u)) {
        auto targetFn = runtime->lookupFunction(0x17DDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBD4u; }
        if (ctx->pc != 0x17CBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDE8_0x17dde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBD4u; }
        if (ctx->pc != 0x17CBD4u) { return; }
    }
    ctx->pc = 0x17CBD4u;
label_17cbd4:
    // 0x17cbd4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17cbd8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17cbdc: 0x24716410  addiu       $s1, $v1, 0x6410
    ctx->pc = 0x17cbdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25616));
    // 0x17cbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbe4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17CBE4u;
    {
        const bool branch_taken_0x17cbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBE4u;
            // 0x17cbe8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbe4) {
            ctx->pc = 0x17CC20u;
            goto label_17cc20;
        }
    }
    ctx->pc = 0x17CBECu;
    // 0x17cbec: 0xc05f55e  jal         func_17D578
    ctx->pc = 0x17CBECu;
    SET_GPR_U32(ctx, 31, 0x17CBF4u);
    ctx->pc = 0x17D578u;
    if (runtime->hasFunction(0x17D578u)) {
        auto targetFn = runtime->lookupFunction(0x17D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBF4u; }
        if (ctx->pc != 0x17CBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D578_0x17d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBF4u; }
        if (ctx->pc != 0x17CBF4u) { return; }
    }
    ctx->pc = 0x17CBF4u;
label_17cbf4:
    // 0x17cbf4: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17CBF4u;
    SET_GPR_U32(ctx, 31, 0x17CBFCu);
    ctx->pc = 0x17CBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBF4u;
            // 0x17cbf8: 0x34048100  ori         $a0, $zero, 0x8100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBFCu; }
        if (ctx->pc != 0x17CBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CBFCu; }
        if (ctx->pc != 0x17CBFCu) { return; }
    }
    ctx->pc = 0x17CBFCu;
label_17cbfc:
    // 0x17cbfc: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17CBFCu;
    SET_GPR_U32(ctx, 31, 0x17CC04u);
    ctx->pc = 0x17CC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CBFCu;
            // 0x17cc00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC04u; }
        if (ctx->pc != 0x17CC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC04u; }
        if (ctx->pc != 0x17CC04u) { return; }
    }
    ctx->pc = 0x17CC04u;
label_17cc04:
    // 0x17cc04: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17CC04u;
    SET_GPR_U32(ctx, 31, 0x17CC0Cu);
    ctx->pc = 0x17CC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC04u;
            // 0x17cc08: 0x34048101  ori         $a0, $zero, 0x8101 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33025);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC0Cu; }
        if (ctx->pc != 0x17CC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC0Cu; }
        if (ctx->pc != 0x17CC0Cu) { return; }
    }
    ctx->pc = 0x17CC0Cu;
label_17cc0c:
    // 0x17cc0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc10: 0xc05f24e  jal         func_17C938
    ctx->pc = 0x17CC10u;
    SET_GPR_U32(ctx, 31, 0x17CC18u);
    ctx->pc = 0x17CC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC10u;
            // 0x17cc14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C938u;
    if (runtime->hasFunction(0x17C938u)) {
        auto targetFn = runtime->lookupFunction(0x17C938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC18u; }
        if (ctx->pc != 0x17CC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C938_0x17c938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC18u; }
        if (ctx->pc != 0x17CC18u) { return; }
    }
    ctx->pc = 0x17CC18u;
label_17cc18:
    // 0x17cc18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CC18u;
    {
        const bool branch_taken_0x17cc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC18u;
            // 0x17cc1c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc18) {
            ctx->pc = 0x17CC28u;
            goto label_17cc28;
        }
    }
    ctx->pc = 0x17CC20u;
label_17cc20:
    // 0x17cc20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17cc24:
    // 0x17cc24: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x17cc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17cc28:
    // 0x17cc28: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x17cc28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17cc2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17cc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cc30: 0x3e00008  jr          $ra
    ctx->pc = 0x17CC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC30u;
            // 0x17cc34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CC38u;
    // 0x17cc38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17cc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17cc3c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x17cc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x17cc40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17cc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc44: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x17cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x17cc48: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17CC48u;
    {
        const bool branch_taken_0x17cc48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC48u;
            // 0x17cc4c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc48) {
            ctx->pc = 0x17CC60u;
            goto label_17cc60;
        }
    }
    ctx->pc = 0x17CC50u;
    // 0x17cc50: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17cc50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17cc54: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17CC54u;
    {
        const bool branch_taken_0x17cc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC54u;
            // 0x17cc58: 0x24a55e38  addiu       $a1, $a1, 0x5E38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc54) {
            ctx->pc = 0x17CCD0u;
            goto label_17ccd0;
        }
    }
    ctx->pc = 0x17CC5Cu;
    // 0x17cc5c: 0x0  nop
    ctx->pc = 0x17cc5cu;
    // NOP
label_17cc60:
    // 0x17cc60: 0xc05f77a  jal         func_17DDE8
    ctx->pc = 0x17CC60u;
    SET_GPR_U32(ctx, 31, 0x17CC68u);
    ctx->pc = 0x17CC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC60u;
            // 0x17cc64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DDE8u;
    if (runtime->hasFunction(0x17DDE8u)) {
        auto targetFn = runtime->lookupFunction(0x17DDE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC68u; }
        if (ctx->pc != 0x17CC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DDE8_0x17dde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC68u; }
        if (ctx->pc != 0x17CC68u) { return; }
    }
    ctx->pc = 0x17CC68u;
label_17cc68:
    // 0x17cc68: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17cc6c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17cc70: 0x24716410  addiu       $s1, $v1, 0x6410
    ctx->pc = 0x17cc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25616));
    // 0x17cc74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc78: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x17CC78u;
    {
        const bool branch_taken_0x17cc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC78u;
            // 0x17cc7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc78) {
            ctx->pc = 0x17CCE4u;
            goto label_17cce4;
        }
    }
    ctx->pc = 0x17CC80u;
    // 0x17cc80: 0xc05f55e  jal         func_17D578
    ctx->pc = 0x17CC80u;
    SET_GPR_U32(ctx, 31, 0x17CC88u);
    ctx->pc = 0x17D578u;
    if (runtime->hasFunction(0x17D578u)) {
        auto targetFn = runtime->lookupFunction(0x17D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC88u; }
        if (ctx->pc != 0x17CC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D578_0x17d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC88u; }
        if (ctx->pc != 0x17CC88u) { return; }
    }
    ctx->pc = 0x17CC88u;
label_17cc88:
    // 0x17cc88: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17CC88u;
    SET_GPR_U32(ctx, 31, 0x17CC90u);
    ctx->pc = 0x17CC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC88u;
            // 0x17cc8c: 0x34048200  ori         $a0, $zero, 0x8200 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC90u; }
        if (ctx->pc != 0x17CC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC90u; }
        if (ctx->pc != 0x17CC90u) { return; }
    }
    ctx->pc = 0x17CC90u;
label_17cc90:
    // 0x17cc90: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17CC90u;
    SET_GPR_U32(ctx, 31, 0x17CC98u);
    ctx->pc = 0x17CC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC90u;
            // 0x17cc94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC98u; }
        if (ctx->pc != 0x17CC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC98u; }
        if (ctx->pc != 0x17CC98u) { return; }
    }
    ctx->pc = 0x17CC98u;
label_17cc98:
    // 0x17cc98: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17CC98u;
    SET_GPR_U32(ctx, 31, 0x17CCA0u);
    ctx->pc = 0x17CC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CC98u;
            // 0x17cc9c: 0x34048201  ori         $a0, $zero, 0x8201 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33281);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCA0u; }
        if (ctx->pc != 0x17CCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCA0u; }
        if (ctx->pc != 0x17CCA0u) { return; }
    }
    ctx->pc = 0x17CCA0u;
label_17cca0:
    // 0x17cca0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17cca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cca4: 0xc05f24e  jal         func_17C938
    ctx->pc = 0x17CCA4u;
    SET_GPR_U32(ctx, 31, 0x17CCACu);
    ctx->pc = 0x17CCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CCA4u;
            // 0x17cca8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C938u;
    if (runtime->hasFunction(0x17C938u)) {
        auto targetFn = runtime->lookupFunction(0x17C938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCACu; }
        if (ctx->pc != 0x17CCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C938_0x17c938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCACu; }
        if (ctx->pc != 0x17CCACu) { return; }
    }
    ctx->pc = 0x17CCACu;
label_17ccac:
    // 0x17ccac: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17ccb0: 0x24845e68  addiu       $a0, $a0, 0x5E68
    ctx->pc = 0x17ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24168));
    // 0x17ccb4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17CCB4u;
    {
        const bool branch_taken_0x17ccb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17CCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CCB4u;
            // 0x17ccb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ccb4) {
            ctx->pc = 0x17CCE0u;
            goto label_17cce0;
        }
    }
    ctx->pc = 0x17CCBCu;
    // 0x17ccbc: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17CCBCu;
    SET_GPR_U32(ctx, 31, 0x17CCC4u);
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCC4u; }
        if (ctx->pc != 0x17CCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCC4u; }
        if (ctx->pc != 0x17CCC4u) { return; }
    }
    ctx->pc = 0x17CCC4u;
label_17ccc4:
    // 0x17ccc4: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17ccc8: 0x24a55e90  addiu       $a1, $a1, 0x5E90
    ctx->pc = 0x17ccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24208));
    // 0x17cccc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17ccccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ccd0:
    // 0x17ccd0: 0xc05f242  jal         func_17C908
    ctx->pc = 0x17CCD0u;
    SET_GPR_U32(ctx, 31, 0x17CCD8u);
    ctx->pc = 0x17C908u;
    if (runtime->hasFunction(0x17C908u)) {
        auto targetFn = runtime->lookupFunction(0x17C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCD8u; }
        if (ctx->pc != 0x17CCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C908_0x17c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CCD8u; }
        if (ctx->pc != 0x17CCD8u) { return; }
    }
    ctx->pc = 0x17CCD8u;
label_17ccd8:
    // 0x17ccd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17CCD8u;
    {
        const bool branch_taken_0x17ccd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CCD8u;
            // 0x17ccdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ccd8) {
            ctx->pc = 0x17CCE4u;
            goto label_17cce4;
        }
    }
    ctx->pc = 0x17CCE0u;
label_17cce0:
    // 0x17cce0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17cce4:
    // 0x17cce4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x17cce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cce8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x17cce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ccec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17ccecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x17CCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CCF0u;
            // 0x17ccf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CCF8u;
}
