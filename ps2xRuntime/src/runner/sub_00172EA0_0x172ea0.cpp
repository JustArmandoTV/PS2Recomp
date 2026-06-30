#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172EA0
// Address: 0x172ea0 - 0x172fa8
void sub_00172EA0_0x172ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172EA0_0x172ea0");
#endif

    switch (ctx->pc) {
        case 0x172ea0u: goto label_172ea0;
        case 0x172ea4u: goto label_172ea4;
        case 0x172ea8u: goto label_172ea8;
        case 0x172eacu: goto label_172eac;
        case 0x172eb0u: goto label_172eb0;
        case 0x172eb4u: goto label_172eb4;
        case 0x172eb8u: goto label_172eb8;
        case 0x172ebcu: goto label_172ebc;
        case 0x172ec0u: goto label_172ec0;
        case 0x172ec4u: goto label_172ec4;
        case 0x172ec8u: goto label_172ec8;
        case 0x172eccu: goto label_172ecc;
        case 0x172ed0u: goto label_172ed0;
        case 0x172ed4u: goto label_172ed4;
        case 0x172ed8u: goto label_172ed8;
        case 0x172edcu: goto label_172edc;
        case 0x172ee0u: goto label_172ee0;
        case 0x172ee4u: goto label_172ee4;
        case 0x172ee8u: goto label_172ee8;
        case 0x172eecu: goto label_172eec;
        case 0x172ef0u: goto label_172ef0;
        case 0x172ef4u: goto label_172ef4;
        case 0x172ef8u: goto label_172ef8;
        case 0x172efcu: goto label_172efc;
        case 0x172f00u: goto label_172f00;
        case 0x172f04u: goto label_172f04;
        case 0x172f08u: goto label_172f08;
        case 0x172f0cu: goto label_172f0c;
        case 0x172f10u: goto label_172f10;
        case 0x172f14u: goto label_172f14;
        case 0x172f18u: goto label_172f18;
        case 0x172f1cu: goto label_172f1c;
        case 0x172f20u: goto label_172f20;
        case 0x172f24u: goto label_172f24;
        case 0x172f28u: goto label_172f28;
        case 0x172f2cu: goto label_172f2c;
        case 0x172f30u: goto label_172f30;
        case 0x172f34u: goto label_172f34;
        case 0x172f38u: goto label_172f38;
        case 0x172f3cu: goto label_172f3c;
        case 0x172f40u: goto label_172f40;
        case 0x172f44u: goto label_172f44;
        case 0x172f48u: goto label_172f48;
        case 0x172f4cu: goto label_172f4c;
        case 0x172f50u: goto label_172f50;
        case 0x172f54u: goto label_172f54;
        case 0x172f58u: goto label_172f58;
        case 0x172f5cu: goto label_172f5c;
        case 0x172f60u: goto label_172f60;
        case 0x172f64u: goto label_172f64;
        case 0x172f68u: goto label_172f68;
        case 0x172f6cu: goto label_172f6c;
        case 0x172f70u: goto label_172f70;
        case 0x172f74u: goto label_172f74;
        case 0x172f78u: goto label_172f78;
        case 0x172f7cu: goto label_172f7c;
        case 0x172f80u: goto label_172f80;
        case 0x172f84u: goto label_172f84;
        case 0x172f88u: goto label_172f88;
        case 0x172f8cu: goto label_172f8c;
        case 0x172f90u: goto label_172f90;
        case 0x172f94u: goto label_172f94;
        case 0x172f98u: goto label_172f98;
        case 0x172f9cu: goto label_172f9c;
        case 0x172fa0u: goto label_172fa0;
        case 0x172fa4u: goto label_172fa4;
        default: break;
    }

    ctx->pc = 0x172ea0u;

label_172ea0:
    // 0x172ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_172ea4:
    // 0x172ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_172ea8:
    // 0x172ea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172eac:
    // 0x172eac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x172eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_172eb0:
    // 0x172eb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172eb4:
    // 0x172eb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x172eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_172eb8:
    // 0x172eb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x172eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_172ebc:
    // 0x172ebc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x172ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_172ec0:
    // 0x172ec0: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x172ec0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_172ec4:
    // 0x172ec4: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_172ec8:
    if (ctx->pc == 0x172EC8u) {
        ctx->pc = 0x172EC8u;
            // 0x172ec8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172ECCu;
        goto label_172ecc;
    }
    ctx->pc = 0x172EC4u;
    {
        const bool branch_taken_0x172ec4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x172EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172EC4u;
            // 0x172ec8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ec4) {
            ctx->pc = 0x172EFCu;
            goto label_172efc;
        }
    }
    ctx->pc = 0x172ECCu;
label_172ecc:
    // 0x172ecc: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x172eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_172ed0:
    // 0x172ed0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x172ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_172ed4:
    // 0x172ed4: 0x0  nop
    ctx->pc = 0x172ed4u;
    // NOP
label_172ed8:
    // 0x172ed8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x172ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_172edc:
    // 0x172edc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x172edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172ee0:
    // 0x172ee0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x172ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_172ee4:
    // 0x172ee4: 0x60f809  jalr        $v1
label_172ee8:
    if (ctx->pc == 0x172EE8u) {
        ctx->pc = 0x172EE8u;
            // 0x172ee8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x172EECu;
        goto label_172eec;
    }
    ctx->pc = 0x172EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x172EECu);
        ctx->pc = 0x172EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172EE4u;
            // 0x172ee8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x172EECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172EECu; }
            if (ctx->pc != 0x172EECu) { return; }
        }
        }
    }
    ctx->pc = 0x172EECu;
label_172eec:
    // 0x172eec: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x172eecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_172ef0:
    // 0x172ef0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x172ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_172ef4:
    // 0x172ef4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_172ef8:
    if (ctx->pc == 0x172EF8u) {
        ctx->pc = 0x172EF8u;
            // 0x172ef8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x172EFCu;
        goto label_172efc;
    }
    ctx->pc = 0x172EF4u;
    {
        const bool branch_taken_0x172ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172ef4) {
            ctx->pc = 0x172EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172EF4u;
            // 0x172ef8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172ed8;
        }
    }
    ctx->pc = 0x172EFCu;
label_172efc:
    // 0x172efc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x172efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_172f00:
    // 0x172f00: 0xc05bbd2  jal         func_16EF48
label_172f04:
    if (ctx->pc == 0x172F04u) {
        ctx->pc = 0x172F04u;
            // 0x172f04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172F08u;
        goto label_172f08;
    }
    ctx->pc = 0x172F00u;
    SET_GPR_U32(ctx, 31, 0x172F08u);
    ctx->pc = 0x172F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172F00u;
            // 0x172f04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EF48u;
    if (runtime->hasFunction(0x16EF48u)) {
        auto targetFn = runtime->lookupFunction(0x16EF48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F08u; }
        if (ctx->pc != 0x172F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EF48_0x16ef48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F08u; }
        if (ctx->pc != 0x172F08u) { return; }
    }
    ctx->pc = 0x172F08u;
label_172f08:
    // 0x172f08: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x172f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
label_172f0c:
    // 0x172f0c: 0xc05bc02  jal         func_16F008
label_172f10:
    if (ctx->pc == 0x172F10u) {
        ctx->pc = 0x172F10u;
            // 0x172f10: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x172F14u;
        goto label_172f14;
    }
    ctx->pc = 0x172F0Cu;
    SET_GPR_U32(ctx, 31, 0x172F14u);
    ctx->pc = 0x172F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172F0Cu;
            // 0x172f10: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F008u;
    if (runtime->hasFunction(0x16F008u)) {
        auto targetFn = runtime->lookupFunction(0x16F008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F14u; }
        if (ctx->pc != 0x172F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F008_0x16f008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F14u; }
        if (ctx->pc != 0x172F14u) { return; }
    }
    ctx->pc = 0x172F14u;
label_172f14:
    // 0x172f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x172f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172f18:
    // 0x172f18: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x172f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_172f1c:
    // 0x172f1c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x172f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_172f20:
    // 0x172f20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x172f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_172f24:
    // 0x172f24: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x172f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_172f28:
    // 0x172f28: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x172f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_172f2c:
    // 0x172f2c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x172f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_172f30:
    // 0x172f30: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x172f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
label_172f34:
    // 0x172f34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x172f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_172f38:
    // 0x172f38: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x172f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_172f3c:
    // 0x172f3c: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x172f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_172f40:
    // 0x172f40: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x172f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_172f44:
    // 0x172f44: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x172f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_172f48:
    // 0x172f48: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x172f48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_172f4c:
    // 0x172f4c: 0x8ca29d88  lw          $v0, -0x6278($a1)
    ctx->pc = 0x172f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294942088)));
label_172f50:
    // 0x172f50: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x172f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_172f54:
    // 0x172f54: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
label_172f58:
    if (ctx->pc == 0x172F58u) {
        ctx->pc = 0x172F58u;
            // 0x172f58: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x172F5Cu;
        goto label_172f5c;
    }
    ctx->pc = 0x172F54u;
    {
        const bool branch_taken_0x172f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x172F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172F54u;
            // 0x172f58: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f54) {
            ctx->pc = 0x172F68u;
            goto label_172f68;
        }
    }
    ctx->pc = 0x172F5Cu;
label_172f5c:
    // 0x172f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172f60:
    // 0x172f60: 0xc05d36a  jal         func_174DA8
label_172f64:
    if (ctx->pc == 0x172F64u) {
        ctx->pc = 0x172F64u;
            // 0x172f64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172F68u;
        goto label_172f68;
    }
    ctx->pc = 0x172F60u;
    SET_GPR_U32(ctx, 31, 0x172F68u);
    ctx->pc = 0x172F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172F60u;
            // 0x172f64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174DA8u;
    if (runtime->hasFunction(0x174DA8u)) {
        auto targetFn = runtime->lookupFunction(0x174DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F68u; }
        if (ctx->pc != 0x172F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174DA8_0x174da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F68u; }
        if (ctx->pc != 0x172F68u) { return; }
    }
    ctx->pc = 0x172F68u;
label_172f68:
    // 0x172f68: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x172f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_172f6c:
    // 0x172f6c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_172f70:
    if (ctx->pc == 0x172F70u) {
        ctx->pc = 0x172F70u;
            // 0x172f70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x172F74u;
        goto label_172f74;
    }
    ctx->pc = 0x172F6Cu;
    {
        const bool branch_taken_0x172f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172F6Cu;
            // 0x172f70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f6c) {
            ctx->pc = 0x172F90u;
            goto label_172f90;
        }
    }
    ctx->pc = 0x172F74u;
label_172f74:
    // 0x172f74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_172f78:
    // 0x172f78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x172f78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172f7c:
    // 0x172f7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x172f7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_172f80:
    // 0x172f80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_172f84:
    // 0x172f84: 0x80589e2  j           func_162788
label_172f88:
    if (ctx->pc == 0x172F88u) {
        ctx->pc = 0x172F88u;
            // 0x172f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x172F8Cu;
        goto label_172f8c;
    }
    ctx->pc = 0x172F84u;
    ctx->pc = 0x172F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172F84u;
            // 0x172f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162788u;
    {
        auto targetFn = runtime->lookupFunction(0x162788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x172F8Cu;
label_172f8c:
    // 0x172f8c: 0x0  nop
    ctx->pc = 0x172f8cu;
    // NOP
label_172f90:
    // 0x172f90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_172f94:
    // 0x172f94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x172f94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172f98:
    // 0x172f98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x172f98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_172f9c:
    // 0x172f9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_172fa0:
    // 0x172fa0: 0x3e00008  jr          $ra
label_172fa4:
    if (ctx->pc == 0x172FA4u) {
        ctx->pc = 0x172FA4u;
            // 0x172fa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x172FA8u;
        goto label_fallthrough_0x172fa0;
    }
    ctx->pc = 0x172FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172FA0u;
            // 0x172fa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x172fa0:
    ctx->pc = 0x172FA8u;
}
