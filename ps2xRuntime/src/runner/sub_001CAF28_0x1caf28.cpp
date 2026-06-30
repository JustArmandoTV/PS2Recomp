#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CAF28
// Address: 0x1caf28 - 0x1cb078
void sub_001CAF28_0x1caf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAF28_0x1caf28");
#endif

    switch (ctx->pc) {
        case 0x1caf28u: goto label_1caf28;
        case 0x1caf2cu: goto label_1caf2c;
        case 0x1caf30u: goto label_1caf30;
        case 0x1caf34u: goto label_1caf34;
        case 0x1caf38u: goto label_1caf38;
        case 0x1caf3cu: goto label_1caf3c;
        case 0x1caf40u: goto label_1caf40;
        case 0x1caf44u: goto label_1caf44;
        case 0x1caf48u: goto label_1caf48;
        case 0x1caf4cu: goto label_1caf4c;
        case 0x1caf50u: goto label_1caf50;
        case 0x1caf54u: goto label_1caf54;
        case 0x1caf58u: goto label_1caf58;
        case 0x1caf5cu: goto label_1caf5c;
        case 0x1caf60u: goto label_1caf60;
        case 0x1caf64u: goto label_1caf64;
        case 0x1caf68u: goto label_1caf68;
        case 0x1caf6cu: goto label_1caf6c;
        case 0x1caf70u: goto label_1caf70;
        case 0x1caf74u: goto label_1caf74;
        case 0x1caf78u: goto label_1caf78;
        case 0x1caf7cu: goto label_1caf7c;
        case 0x1caf80u: goto label_1caf80;
        case 0x1caf84u: goto label_1caf84;
        case 0x1caf88u: goto label_1caf88;
        case 0x1caf8cu: goto label_1caf8c;
        case 0x1caf90u: goto label_1caf90;
        case 0x1caf94u: goto label_1caf94;
        case 0x1caf98u: goto label_1caf98;
        case 0x1caf9cu: goto label_1caf9c;
        case 0x1cafa0u: goto label_1cafa0;
        case 0x1cafa4u: goto label_1cafa4;
        case 0x1cafa8u: goto label_1cafa8;
        case 0x1cafacu: goto label_1cafac;
        case 0x1cafb0u: goto label_1cafb0;
        case 0x1cafb4u: goto label_1cafb4;
        case 0x1cafb8u: goto label_1cafb8;
        case 0x1cafbcu: goto label_1cafbc;
        case 0x1cafc0u: goto label_1cafc0;
        case 0x1cafc4u: goto label_1cafc4;
        case 0x1cafc8u: goto label_1cafc8;
        case 0x1cafccu: goto label_1cafcc;
        case 0x1cafd0u: goto label_1cafd0;
        case 0x1cafd4u: goto label_1cafd4;
        case 0x1cafd8u: goto label_1cafd8;
        case 0x1cafdcu: goto label_1cafdc;
        case 0x1cafe0u: goto label_1cafe0;
        case 0x1cafe4u: goto label_1cafe4;
        case 0x1cafe8u: goto label_1cafe8;
        case 0x1cafecu: goto label_1cafec;
        case 0x1caff0u: goto label_1caff0;
        case 0x1caff4u: goto label_1caff4;
        case 0x1caff8u: goto label_1caff8;
        case 0x1caffcu: goto label_1caffc;
        case 0x1cb000u: goto label_1cb000;
        case 0x1cb004u: goto label_1cb004;
        case 0x1cb008u: goto label_1cb008;
        case 0x1cb00cu: goto label_1cb00c;
        case 0x1cb010u: goto label_1cb010;
        case 0x1cb014u: goto label_1cb014;
        case 0x1cb018u: goto label_1cb018;
        case 0x1cb01cu: goto label_1cb01c;
        case 0x1cb020u: goto label_1cb020;
        case 0x1cb024u: goto label_1cb024;
        case 0x1cb028u: goto label_1cb028;
        case 0x1cb02cu: goto label_1cb02c;
        case 0x1cb030u: goto label_1cb030;
        case 0x1cb034u: goto label_1cb034;
        case 0x1cb038u: goto label_1cb038;
        case 0x1cb03cu: goto label_1cb03c;
        case 0x1cb040u: goto label_1cb040;
        case 0x1cb044u: goto label_1cb044;
        case 0x1cb048u: goto label_1cb048;
        case 0x1cb04cu: goto label_1cb04c;
        case 0x1cb050u: goto label_1cb050;
        case 0x1cb054u: goto label_1cb054;
        case 0x1cb058u: goto label_1cb058;
        case 0x1cb05cu: goto label_1cb05c;
        case 0x1cb060u: goto label_1cb060;
        case 0x1cb064u: goto label_1cb064;
        case 0x1cb068u: goto label_1cb068;
        case 0x1cb06cu: goto label_1cb06c;
        case 0x1cb070u: goto label_1cb070;
        case 0x1cb074u: goto label_1cb074;
        default: break;
    }

    ctx->pc = 0x1caf28u;

label_1caf28:
    // 0x1caf28: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1caf28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1caf2c:
    // 0x1caf2c: 0x2c840030  sltiu       $a0, $a0, 0x30
    ctx->pc = 0x1caf2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_1caf30:
    // 0x1caf30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1caf30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1caf34:
    // 0x1caf34: 0x24e60d30  addiu       $a2, $a3, 0xD30
    ctx->pc = 0x1caf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3376));
label_1caf38:
    // 0x1caf38: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_1caf3c:
    if (ctx->pc == 0x1CAF3Cu) {
        ctx->pc = 0x1CAF3Cu;
            // 0x1caf3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CAF40u;
        goto label_1caf40;
    }
    ctx->pc = 0x1CAF38u;
    {
        const bool branch_taken_0x1caf38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF38u;
            // 0x1caf3c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf38) {
            ctx->pc = 0x1CAFA4u;
            goto label_1cafa4;
        }
    }
    ctx->pc = 0x1CAF40u;
label_1caf40:
    // 0x1caf40: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1caf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1caf44:
    // 0x1caf44: 0x8c43a70c  lw          $v1, -0x58F4($v0)
    ctx->pc = 0x1caf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944524)));
label_1caf48:
    // 0x1caf48: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x1caf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1caf4c:
    // 0x1caf4c: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x1caf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1caf50:
    // 0x1caf50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1caf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1caf54:
    // 0x1caf54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1caf58:
    if (ctx->pc == 0x1CAF58u) {
        ctx->pc = 0x1CAF58u;
            // 0x1caf58: 0x2402ff00  addiu       $v0, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->pc = 0x1CAF5Cu;
        goto label_1caf5c;
    }
    ctx->pc = 0x1CAF54u;
    {
        const bool branch_taken_0x1caf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF54u;
            // 0x1caf58: 0x2402ff00  addiu       $v0, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf54) {
            ctx->pc = 0x1CAF70u;
            goto label_1caf70;
        }
    }
    ctx->pc = 0x1CAF5Cu;
label_1caf5c:
    // 0x1caf5c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1caf5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1caf60:
    // 0x1caf60: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1caf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_1caf64:
    // 0x1caf64: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1caf64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1caf68:
    // 0x1caf68: 0x1000000d  b           . + 4 + (0xD << 2)
label_1caf6c:
    if (ctx->pc == 0x1CAF6Cu) {
        ctx->pc = 0x1CAF6Cu;
            // 0x1caf6c: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->pc = 0x1CAF70u;
        goto label_1caf70;
    }
    ctx->pc = 0x1CAF68u;
    {
        const bool branch_taken_0x1caf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF68u;
            // 0x1caf6c: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf68) {
            ctx->pc = 0x1CAFA0u;
            goto label_1cafa0;
        }
    }
    ctx->pc = 0x1CAF70u;
label_1caf70:
    // 0x1caf70: 0x24e20bb0  addiu       $v0, $a3, 0xBB0
    ctx->pc = 0x1caf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2992));
label_1caf74:
    // 0x1caf74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1caf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1caf78:
    // 0x1caf78: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1caf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1caf7c:
    // 0x1caf7c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1caf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1caf80:
    // 0x1caf80: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
label_1caf84:
    if (ctx->pc == 0x1CAF84u) {
        ctx->pc = 0x1CAF84u;
            // 0x1caf84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1CAF88u;
        goto label_1caf88;
    }
    ctx->pc = 0x1CAF80u;
    {
        const bool branch_taken_0x1caf80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1caf80) {
            ctx->pc = 0x1CAF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF80u;
            // 0x1caf84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CAF90u;
            goto label_1caf90;
        }
    }
    ctx->pc = 0x1CAF88u;
label_1caf88:
    // 0x1caf88: 0x10000005  b           . + 4 + (0x5 << 2)
label_1caf8c:
    if (ctx->pc == 0x1CAF8Cu) {
        ctx->pc = 0x1CAF8Cu;
            // 0x1caf8c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CAF90u;
        goto label_1caf90;
    }
    ctx->pc = 0x1CAF88u;
    {
        const bool branch_taken_0x1caf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF88u;
            // 0x1caf8c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf88) {
            ctx->pc = 0x1CAFA0u;
            goto label_1cafa0;
        }
    }
    ctx->pc = 0x1CAF90u;
label_1caf90:
    // 0x1caf90: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
label_1caf94:
    if (ctx->pc == 0x1CAF94u) {
        ctx->pc = 0x1CAF94u;
            // 0x1caf94: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF98u;
        goto label_1caf98;
    }
    ctx->pc = 0x1CAF90u;
    {
        const bool branch_taken_0x1caf90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1caf90) {
            ctx->pc = 0x1CAF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAF90u;
            // 0x1caf94: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CAFA4u;
            goto label_1cafa4;
        }
    }
    ctx->pc = 0x1CAF98u;
label_1caf98:
    // 0x1caf98: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1caf98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1caf9c:
    // 0x1caf9c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1caf9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cafa0:
    // 0x1cafa0: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1cafa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cafa4:
    // 0x1cafa4: 0x3e00008  jr          $ra
label_1cafa8:
    if (ctx->pc == 0x1CAFA8u) {
        ctx->pc = 0x1CAFACu;
        goto label_1cafac;
    }
    ctx->pc = 0x1CAFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAFACu;
label_1cafac:
    // 0x1cafac: 0x0  nop
    ctx->pc = 0x1cafacu;
    // NOP
label_1cafb0:
    // 0x1cafb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cafb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cafb4:
    // 0x1cafb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cafb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cafb8:
    // 0x1cafb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cafb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cafbc:
    // 0x1cafbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cafbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cafc0:
    // 0x1cafc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cafc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cafc4:
    // 0x1cafc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cafc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cafc8:
    // 0x1cafc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cafc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cafcc:
    // 0x1cafcc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cafccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cafd0:
    // 0x1cafd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1cafd4:
    if (ctx->pc == 0x1CAFD4u) {
        ctx->pc = 0x1CAFD4u;
            // 0x1cafd4: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x1CAFD8u;
        goto label_1cafd8;
    }
    ctx->pc = 0x1CAFD0u;
    {
        const bool branch_taken_0x1cafd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAFD0u;
            // 0x1cafd4: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafd0) {
            ctx->pc = 0x1CAFE0u;
            goto label_1cafe0;
        }
    }
    ctx->pc = 0x1CAFD8u;
label_1cafd8:
    // 0x1cafd8: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1cafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
label_1cafdc:
    // 0x1cafdc: 0xac403c00  sw          $zero, 0x3C00($v0)
    ctx->pc = 0x1cafdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15360), GPR_U32(ctx, 0));
label_1cafe0:
    // 0x1cafe0: 0x8e62a70c  lw          $v0, -0x58F4($s3)
    ctx->pc = 0x1cafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944524)));
label_1cafe4:
    // 0x1cafe4: 0x8c421880  lw          $v0, 0x1880($v0)
    ctx->pc = 0x1cafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6272)));
label_1cafe8:
    // 0x1cafe8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1cafec:
    if (ctx->pc == 0x1CAFECu) {
        ctx->pc = 0x1CAFECu;
            // 0x1cafec: 0x8e62a70c  lw          $v0, -0x58F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944524)));
        ctx->pc = 0x1CAFF0u;
        goto label_1caff0;
    }
    ctx->pc = 0x1CAFE8u;
    {
        const bool branch_taken_0x1cafe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cafe8) {
            ctx->pc = 0x1CAFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAFE8u;
            // 0x1cafec: 0x8e62a70c  lw          $v0, -0x58F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944524)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB008u;
            goto label_1cb008;
        }
    }
    ctx->pc = 0x1CAFF0u;
label_1caff0:
    // 0x1caff0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1caff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1caff4:
    // 0x1caff4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1caff8:
    if (ctx->pc == 0x1CAFF8u) {
        ctx->pc = 0x1CAFF8u;
            // 0x1caff8: 0x8e62a70c  lw          $v0, -0x58F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944524)));
        ctx->pc = 0x1CAFFCu;
        goto label_1caffc;
    }
    ctx->pc = 0x1CAFF4u;
    {
        const bool branch_taken_0x1caff4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caff4) {
            ctx->pc = 0x1CAFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAFF4u;
            // 0x1caff8: 0x8e62a70c  lw          $v0, -0x58F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944524)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CB008u;
            goto label_1cb008;
        }
    }
    ctx->pc = 0x1CAFFCu;
label_1caffc:
    // 0x1caffc: 0x40f809  jalr        $v0
label_1cb000:
    if (ctx->pc == 0x1CB000u) {
        ctx->pc = 0x1CB000u;
            // 0x1cb000: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1CB004u;
        goto label_1cb004;
    }
    ctx->pc = 0x1CAFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB004u);
        ctx->pc = 0x1CB000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAFFCu;
            // 0x1cb000: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB004u; }
            if (ctx->pc != 0x1CB004u) { return; }
        }
        }
    }
    ctx->pc = 0x1CB004u;
label_1cb004:
    // 0x1cb004: 0x8e62a70c  lw          $v0, -0x58F4($s3)
    ctx->pc = 0x1cb004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944524)));
label_1cb008:
    // 0x1cb008: 0x8c431884  lw          $v1, 0x1884($v0)
    ctx->pc = 0x1cb008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6276)));
label_1cb00c:
    // 0x1cb00c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1cb010:
    if (ctx->pc == 0x1CB010u) {
        ctx->pc = 0x1CB010u;
            // 0x1cb010: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x1CB014u;
        goto label_1cb014;
    }
    ctx->pc = 0x1CB00Cu;
    {
        const bool branch_taken_0x1cb00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB00Cu;
            // 0x1cb010: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb00c) {
            ctx->pc = 0x1CB054u;
            goto label_1cb054;
        }
    }
    ctx->pc = 0x1CB014u;
label_1cb014:
    // 0x1cb014: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1cb014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1cb018:
    // 0x1cb018: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cb018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb01c:
    // 0x1cb01c: 0x0  nop
    ctx->pc = 0x1cb01cu;
    // NOP
label_1cb020:
    // 0x1cb020: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1cb020u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb024:
    // 0x1cb024: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1cb028:
    if (ctx->pc == 0x1CB028u) {
        ctx->pc = 0x1CB028u;
            // 0x1cb028: 0x8e63a70c  lw          $v1, -0x58F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944524)));
        ctx->pc = 0x1CB02Cu;
        goto label_1cb02c;
    }
    ctx->pc = 0x1CB024u;
    {
        const bool branch_taken_0x1cb024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB024u;
            // 0x1cb028: 0x8e63a70c  lw          $v1, -0x58F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb024) {
            ctx->pc = 0x1CB040u;
            goto label_1cb040;
        }
    }
    ctx->pc = 0x1CB02Cu;
label_1cb02c:
    // 0x1cb02c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cb02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb030:
    // 0x1cb030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cb030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb034:
    // 0x1cb034: 0x8c621884  lw          $v0, 0x1884($v1)
    ctx->pc = 0x1cb034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6276)));
label_1cb038:
    // 0x1cb038: 0x40f809  jalr        $v0
label_1cb03c:
    if (ctx->pc == 0x1CB03Cu) {
        ctx->pc = 0x1CB03Cu;
            // 0x1cb03c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CB040u;
        goto label_1cb040;
    }
    ctx->pc = 0x1CB038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB040u);
        ctx->pc = 0x1CB03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB038u;
            // 0x1cb03c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CB040u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CB040u; }
            if (ctx->pc != 0x1CB040u) { return; }
        }
        }
    }
    ctx->pc = 0x1CB040u;
label_1cb040:
    // 0x1cb040: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cb040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1cb044:
    // 0x1cb044: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1cb044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1cb048:
    // 0x1cb048: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x1cb048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
label_1cb04c:
    // 0x1cb04c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1cb050:
    if (ctx->pc == 0x1CB050u) {
        ctx->pc = 0x1CB050u;
            // 0x1cb050: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1CB054u;
        goto label_1cb054;
    }
    ctx->pc = 0x1CB04Cu;
    {
        const bool branch_taken_0x1cb04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB04Cu;
            // 0x1cb050: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb04c) {
            ctx->pc = 0x1CB020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cb020;
        }
    }
    ctx->pc = 0x1CB054u;
label_1cb054:
    // 0x1cb054: 0xf  sync
    ctx->pc = 0x1cb054u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1cb058:
    // 0x1cb058: 0x42000038  ei
    ctx->pc = 0x1cb058u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1cb05c:
    // 0x1cb05c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb060:
    // 0x1cb060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cb064:
    // 0x1cb064: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb068:
    // 0x1cb068: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cb068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cb06c:
    // 0x1cb06c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb070:
    // 0x1cb070: 0x3e00008  jr          $ra
label_1cb074:
    if (ctx->pc == 0x1CB074u) {
        ctx->pc = 0x1CB074u;
            // 0x1cb074: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1CB078u;
        goto label_fallthrough_0x1cb070;
    }
    ctx->pc = 0x1CB070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB070u;
            // 0x1cb074: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1cb070:
    ctx->pc = 0x1CB078u;
}
