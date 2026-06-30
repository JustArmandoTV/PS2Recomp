#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013DDE0
// Address: 0x13dde0 - 0x13df70
void sub_0013DDE0_0x13dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DDE0_0x13dde0");
#endif

    switch (ctx->pc) {
        case 0x13de7cu: goto label_13de7c;
        case 0x13de8cu: goto label_13de8c;
        case 0x13de9cu: goto label_13de9c;
        case 0x13deacu: goto label_13deac;
        case 0x13df38u: goto label_13df38;
        case 0x13df48u: goto label_13df48;
        case 0x13df58u: goto label_13df58;
        default: break;
    }

    ctx->pc = 0x13dde0u;

    // 0x13dde0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13dde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13dde4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13dde8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13dde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ddec: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x13ddecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ddf0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13ddf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ddf4: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x13ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x13ddf8: 0x30e60008  andi        $a2, $a3, 0x8
    ctx->pc = 0x13ddf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x13ddfc: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x13DDFCu;
    {
        const bool branch_taken_0x13ddfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DDFCu;
            // 0x13de00: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddfc) {
            ctx->pc = 0x13DEB4u;
            goto label_13deb4;
        }
    }
    ctx->pc = 0x13DE04u;
    // 0x13de04: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x13de04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13de08: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x13de08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13de0c: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x13de0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x13de10: 0x50c40024  beql        $a2, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x13DE10u;
    {
        const bool branch_taken_0x13de10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13de10) {
            ctx->pc = 0x13DE14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE10u;
            // 0x13de14: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DEA4u;
            goto label_13dea4;
        }
    }
    ctx->pc = 0x13DE18u;
    // 0x13de18: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x13de18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13de1c: 0x50c4001d  beql        $a2, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13DE1Cu;
    {
        const bool branch_taken_0x13de1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13de1c) {
            ctx->pc = 0x13DE20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE1Cu;
            // 0x13de20: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DE94u;
            goto label_13de94;
        }
    }
    ctx->pc = 0x13DE24u;
    // 0x13de24: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x13de24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x13de28: 0x50c4004e  beql        $a2, $a0, . + 4 + (0x4E << 2)
    ctx->pc = 0x13DE28u;
    {
        const bool branch_taken_0x13de28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13de28) {
            ctx->pc = 0x13DE2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE28u;
            // 0x13de2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DF64u;
            goto label_13df64;
        }
    }
    ctx->pc = 0x13DE30u;
    // 0x13de30: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x13de30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x13de34: 0x10c4004a  beq         $a2, $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x13DE34u;
    {
        const bool branch_taken_0x13de34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13de34) {
            ctx->pc = 0x13DF60u;
            goto label_13df60;
        }
    }
    ctx->pc = 0x13DE3Cu;
    // 0x13de3c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x13de3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x13de40: 0x10c40047  beq         $a2, $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x13DE40u;
    {
        const bool branch_taken_0x13de40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13de40) {
            ctx->pc = 0x13DF60u;
            goto label_13df60;
        }
    }
    ctx->pc = 0x13DE48u;
    // 0x13de48: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x13de48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13de4c: 0x50c4000d  beql        $a2, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x13DE4Cu;
    {
        const bool branch_taken_0x13de4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13de4c) {
            ctx->pc = 0x13DE50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE4Cu;
            // 0x13de50: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DE84u;
            goto label_13de84;
        }
    }
    ctx->pc = 0x13DE54u;
    // 0x13de54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13de58: 0x50c40006  beql        $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DE58u;
    {
        const bool branch_taken_0x13de58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13de58) {
            ctx->pc = 0x13DE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE58u;
            // 0x13de5c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DE74u;
            goto label_13de74;
        }
    }
    ctx->pc = 0x13DE60u;
    // 0x13de60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13de60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13de64: 0x10c3003e  beq         $a2, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x13DE64u;
    {
        const bool branch_taken_0x13de64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13de64) {
            ctx->pc = 0x13DF60u;
            goto label_13df60;
        }
    }
    ctx->pc = 0x13DE6Cu;
    // 0x13de6c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x13DE6Cu;
    {
        const bool branch_taken_0x13de6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13de6c) {
            ctx->pc = 0x13DF60u;
            goto label_13df60;
        }
    }
    ctx->pc = 0x13DE74u;
label_13de74:
    // 0x13de74: 0xc04d8d0  jal         func_136340
    ctx->pc = 0x13DE74u;
    SET_GPR_U32(ctx, 31, 0x13DE7Cu);
    ctx->pc = 0x13DE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE74u;
            // 0x13de78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136340u;
    if (runtime->hasFunction(0x136340u)) {
        auto targetFn = runtime->lookupFunction(0x136340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE7Cu; }
        if (ctx->pc != 0x13DE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136340_0x136340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE7Cu; }
        if (ctx->pc != 0x13DE7Cu) { return; }
    }
    ctx->pc = 0x13DE7Cu;
label_13de7c:
    // 0x13de7c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x13DE7Cu;
    {
        const bool branch_taken_0x13de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13de7c) {
            ctx->pc = 0x13DF60u;
            goto label_13df60;
        }
    }
    ctx->pc = 0x13DE84u;
label_13de84:
    // 0x13de84: 0xc04d7e8  jal         func_135FA0
    ctx->pc = 0x13DE84u;
    SET_GPR_U32(ctx, 31, 0x13DE8Cu);
    ctx->pc = 0x13DE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE84u;
            // 0x13de88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FA0u;
    if (runtime->hasFunction(0x135FA0u)) {
        auto targetFn = runtime->lookupFunction(0x135FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE8Cu; }
        if (ctx->pc != 0x13DE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135FA0_0x135fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE8Cu; }
        if (ctx->pc != 0x13DE8Cu) { return; }
    }
    ctx->pc = 0x13DE8Cu;
label_13de8c:
    // 0x13de8c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x13DE8Cu;
    {
        const bool branch_taken_0x13de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13de8c) {
            ctx->pc = 0x13DF60u;
            goto label_13df60;
        }
    }
    ctx->pc = 0x13DE94u;
label_13de94:
    // 0x13de94: 0xc04dac4  jal         func_136B10
    ctx->pc = 0x13DE94u;
    SET_GPR_U32(ctx, 31, 0x13DE9Cu);
    ctx->pc = 0x13DE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DE94u;
            // 0x13de98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136B10u;
    if (runtime->hasFunction(0x136B10u)) {
        auto targetFn = runtime->lookupFunction(0x136B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE9Cu; }
        if (ctx->pc != 0x13DE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136B10_0x136b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE9Cu; }
        if (ctx->pc != 0x13DE9Cu) { return; }
    }
    ctx->pc = 0x13DE9Cu;
label_13de9c:
    // 0x13de9c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x13DE9Cu;
    {
        const bool branch_taken_0x13de9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13de9c) {
            ctx->pc = 0x13DF60u;
            goto label_13df60;
        }
    }
    ctx->pc = 0x13DEA4u;
label_13dea4:
    // 0x13dea4: 0xc04dff0  jal         func_137FC0
    ctx->pc = 0x13DEA4u;
    SET_GPR_U32(ctx, 31, 0x13DEACu);
    ctx->pc = 0x13DEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DEA4u;
            // 0x13dea8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137FC0u;
    if (runtime->hasFunction(0x137FC0u)) {
        auto targetFn = runtime->lookupFunction(0x137FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DEACu; }
        if (ctx->pc != 0x13DEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137FC0_0x137fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DEACu; }
        if (ctx->pc != 0x13DEACu) { return; }
    }
    ctx->pc = 0x13DEACu;
label_13deac:
    // 0x13deac: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x13DEACu;
    {
        const bool branch_taken_0x13deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13deac) {
            ctx->pc = 0x13DF60u;
            goto label_13df60;
        }
    }
    ctx->pc = 0x13DEB4u;
label_13deb4:
    // 0x13deb4: 0x30e60010  andi        $a2, $a3, 0x10
    ctx->pc = 0x13deb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x13deb8: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x13DEB8u;
    {
        const bool branch_taken_0x13deb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13deb8) {
            ctx->pc = 0x13DF60u;
            goto label_13df60;
        }
    }
    ctx->pc = 0x13DEC0u;
    // 0x13dec0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x13dec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13dec4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x13dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13dec8: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x13dec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x13decc: 0x50c40020  beql        $a2, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13DECCu;
    {
        const bool branch_taken_0x13decc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13decc) {
            ctx->pc = 0x13DED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DECCu;
            // 0x13ded0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DF50u;
            goto label_13df50;
        }
    }
    ctx->pc = 0x13DED4u;
    // 0x13ded4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x13ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13ded8: 0x50c40020  beql        $a2, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13DED8u;
    {
        const bool branch_taken_0x13ded8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13ded8) {
            ctx->pc = 0x13DEDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DED8u;
            // 0x13dedc: 0x87a3002e  lh          $v1, 0x2E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DF5Cu;
            goto label_13df5c;
        }
    }
    ctx->pc = 0x13DEE0u;
    // 0x13dee0: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x13dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x13dee4: 0x10c4001c  beq         $a2, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13DEE4u;
    {
        const bool branch_taken_0x13dee4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13dee4) {
            ctx->pc = 0x13DF58u;
            goto label_13df58;
        }
    }
    ctx->pc = 0x13DEECu;
    // 0x13deec: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x13deecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x13def0: 0x10c40019  beq         $a2, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13DEF0u;
    {
        const bool branch_taken_0x13def0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13def0) {
            ctx->pc = 0x13DF58u;
            goto label_13df58;
        }
    }
    ctx->pc = 0x13DEF8u;
    // 0x13def8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x13def8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x13defc: 0x10c40016  beq         $a2, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13DEFCu;
    {
        const bool branch_taken_0x13defc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13defc) {
            ctx->pc = 0x13DF58u;
            goto label_13df58;
        }
    }
    ctx->pc = 0x13DF04u;
    // 0x13df04: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x13df04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13df08: 0x50c4000d  beql        $a2, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x13DF08u;
    {
        const bool branch_taken_0x13df08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13df08) {
            ctx->pc = 0x13DF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF08u;
            // 0x13df0c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DF40u;
            goto label_13df40;
        }
    }
    ctx->pc = 0x13DF10u;
    // 0x13df10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13df10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13df14: 0x50c40006  beql        $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DF14u;
    {
        const bool branch_taken_0x13df14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13df14) {
            ctx->pc = 0x13DF18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF14u;
            // 0x13df18: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DF30u;
            goto label_13df30;
        }
    }
    ctx->pc = 0x13DF1Cu;
    // 0x13df1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13df20: 0x10c3000d  beq         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13DF20u;
    {
        const bool branch_taken_0x13df20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13df20) {
            ctx->pc = 0x13DF58u;
            goto label_13df58;
        }
    }
    ctx->pc = 0x13DF28u;
    // 0x13df28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13DF28u;
    {
        const bool branch_taken_0x13df28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df28) {
            ctx->pc = 0x13DF58u;
            goto label_13df58;
        }
    }
    ctx->pc = 0x13DF30u;
label_13df30:
    // 0x13df30: 0xc04d954  jal         func_136550
    ctx->pc = 0x13DF30u;
    SET_GPR_U32(ctx, 31, 0x13DF38u);
    ctx->pc = 0x13DF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF30u;
            // 0x13df34: 0x27a6002e  addiu       $a2, $sp, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136550u;
    if (runtime->hasFunction(0x136550u)) {
        auto targetFn = runtime->lookupFunction(0x136550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF38u; }
        if (ctx->pc != 0x13DF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136550_0x136550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF38u; }
        if (ctx->pc != 0x13DF38u) { return; }
    }
    ctx->pc = 0x13DF38u;
label_13df38:
    // 0x13df38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13DF38u;
    {
        const bool branch_taken_0x13df38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df38) {
            ctx->pc = 0x13DF58u;
            goto label_13df58;
        }
    }
    ctx->pc = 0x13DF40u;
label_13df40:
    // 0x13df40: 0xc04d824  jal         func_136090
    ctx->pc = 0x13DF40u;
    SET_GPR_U32(ctx, 31, 0x13DF48u);
    ctx->pc = 0x13DF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF40u;
            // 0x13df44: 0x27a6002e  addiu       $a2, $sp, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136090u;
    if (runtime->hasFunction(0x136090u)) {
        auto targetFn = runtime->lookupFunction(0x136090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF48u; }
        if (ctx->pc != 0x13DF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136090_0x136090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF48u; }
        if (ctx->pc != 0x13DF48u) { return; }
    }
    ctx->pc = 0x13DF48u;
label_13df48:
    // 0x13df48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13DF48u;
    {
        const bool branch_taken_0x13df48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df48) {
            ctx->pc = 0x13DF58u;
            goto label_13df58;
        }
    }
    ctx->pc = 0x13DF50u;
label_13df50:
    // 0x13df50: 0xc04e038  jal         func_1380E0
    ctx->pc = 0x13DF50u;
    SET_GPR_U32(ctx, 31, 0x13DF58u);
    ctx->pc = 0x13DF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF50u;
            // 0x13df54: 0x27a6002e  addiu       $a2, $sp, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1380E0u;
    if (runtime->hasFunction(0x1380E0u)) {
        auto targetFn = runtime->lookupFunction(0x1380E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF58u; }
        if (ctx->pc != 0x13DF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001380E0_0x1380e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF58u; }
        if (ctx->pc != 0x13DF58u) { return; }
    }
    ctx->pc = 0x13DF58u;
label_13df58:
    // 0x13df58: 0x87a3002e  lh          $v1, 0x2E($sp)
    ctx->pc = 0x13df58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
label_13df5c:
    // 0x13df5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x13df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_13df60:
    // 0x13df60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13df60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13df64:
    // 0x13df64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13df64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13df68: 0x3e00008  jr          $ra
    ctx->pc = 0x13DF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DF68u;
            // 0x13df6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13DF70u;
}
