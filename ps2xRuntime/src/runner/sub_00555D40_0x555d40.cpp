#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00555D40
// Address: 0x555d40 - 0x555fa0
void sub_00555D40_0x555d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00555D40_0x555d40");
#endif

    switch (ctx->pc) {
        case 0x555db8u: goto label_555db8;
        case 0x555df4u: goto label_555df4;
        case 0x555e84u: goto label_555e84;
        case 0x555ea8u: goto label_555ea8;
        case 0x555f10u: goto label_555f10;
        case 0x555f50u: goto label_555f50;
        case 0x555f84u: goto label_555f84;
        default: break;
    }

    ctx->pc = 0x555d40u;

    // 0x555d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x555d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x555d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x555d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x555d48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x555d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x555d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x555d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x555d50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x555d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x555d54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x555d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x555d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x555d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x555d5c: 0x90830074  lbu         $v1, 0x74($a0)
    ctx->pc = 0x555d5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x555d60: 0x8c900078  lw          $s0, 0x78($a0)
    ctx->pc = 0x555d60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x555d64: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x555D64u;
    {
        const bool branch_taken_0x555d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x555D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555D64u;
            // 0x555d68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555d64) {
            ctx->pc = 0x555EB0u;
            goto label_555eb0;
        }
    }
    ctx->pc = 0x555D6Cu;
    // 0x555d6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x555D6Cu;
    {
        const bool branch_taken_0x555d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x555d6c) {
            ctx->pc = 0x555D7Cu;
            goto label_555d7c;
        }
    }
    ctx->pc = 0x555D74u;
    // 0x555d74: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x555D74u;
    {
        const bool branch_taken_0x555d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555D74u;
            // 0x555d78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555d74) {
            ctx->pc = 0x555F88u;
            goto label_555f88;
        }
    }
    ctx->pc = 0x555D7Cu;
label_555d7c:
    // 0x555d7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x555d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x555d80: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x555d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x555d84: 0x8c44976c  lw          $a0, -0x6894($v0)
    ctx->pc = 0x555d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940524)));
    // 0x555d88: 0x34620080  ori         $v0, $v1, 0x80
    ctx->pc = 0x555d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x555d8c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x555d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x555d90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x555d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x555d94: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x555D94u;
    {
        const bool branch_taken_0x555d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555d94) {
            ctx->pc = 0x555D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555D94u;
            // 0x555d98: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555DC0u;
            goto label_555dc0;
        }
    }
    ctx->pc = 0x555D9Cu;
    // 0x555d9c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x555d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x555da0: 0x2c41003d  sltiu       $at, $v0, 0x3D
    ctx->pc = 0x555da0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
    // 0x555da4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x555DA4u;
    {
        const bool branch_taken_0x555da4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x555DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555DA4u;
            // 0x555da8: 0xae420078  sw          $v0, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555da4) {
            ctx->pc = 0x555DB0u;
            goto label_555db0;
        }
    }
    ctx->pc = 0x555DACu;
    // 0x555dac: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x555dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_555db0:
    // 0x555db0: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x555DB0u;
    SET_GPR_U32(ctx, 31, 0x555DB8u);
    ctx->pc = 0x555DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555DB0u;
            // 0x555db4: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555DB8u; }
        if (ctx->pc != 0x555DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555DB8u; }
        if (ctx->pc != 0x555DB8u) { return; }
    }
    ctx->pc = 0x555DB8u;
label_555db8:
    // 0x555db8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x555DB8u;
    {
        const bool branch_taken_0x555db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555DB8u;
            // 0x555dbc: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555db8) {
            ctx->pc = 0x555DF8u;
            goto label_555df8;
        }
    }
    ctx->pc = 0x555DC0u;
label_555dc0:
    // 0x555dc0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x555dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x555dc4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x555dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x555dc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x555dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x555dcc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x555DCCu;
    {
        const bool branch_taken_0x555dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555dcc) {
            ctx->pc = 0x555DF4u;
            goto label_555df4;
        }
    }
    ctx->pc = 0x555DD4u;
    // 0x555dd4: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x555DD4u;
    {
        const bool branch_taken_0x555dd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x555dd4) {
            ctx->pc = 0x555DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555DD4u;
            // 0x555dd8: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555DE8u;
            goto label_555de8;
        }
    }
    ctx->pc = 0x555DDCu;
    // 0x555ddc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x555ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x555de0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x555DE0u;
    {
        const bool branch_taken_0x555de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555DE0u;
            // 0x555de4: 0xae420078  sw          $v0, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555de0) {
            ctx->pc = 0x555DECu;
            goto label_555dec;
        }
    }
    ctx->pc = 0x555DE8u;
label_555de8:
    // 0x555de8: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x555de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
label_555dec:
    // 0x555dec: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x555DECu;
    SET_GPR_U32(ctx, 31, 0x555DF4u);
    ctx->pc = 0x555DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555DECu;
            // 0x555df0: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555DF4u; }
        if (ctx->pc != 0x555DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555DF4u; }
        if (ctx->pc != 0x555DF4u) { return; }
    }
    ctx->pc = 0x555DF4u;
label_555df4:
    // 0x555df4: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x555df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_555df8:
    // 0x555df8: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x555DF8u;
    {
        const bool branch_taken_0x555df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x555df8) {
            ctx->pc = 0x555DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555DF8u;
            // 0x555dfc: 0x9642007c  lhu         $v0, 0x7C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555E08u;
            goto label_555e08;
        }
    }
    ctx->pc = 0x555E00u;
    // 0x555e00: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x555E00u;
    {
        const bool branch_taken_0x555e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555E00u;
            // 0x555e04: 0xa640007c  sh          $zero, 0x7C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 124), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555e00) {
            ctx->pc = 0x555E3Cu;
            goto label_555e3c;
        }
    }
    ctx->pc = 0x555E08u;
label_555e08:
    // 0x555e08: 0x28410200  slti        $at, $v0, 0x200
    ctx->pc = 0x555e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x555e0c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x555E0Cu;
    {
        const bool branch_taken_0x555e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x555e0c) {
            ctx->pc = 0x555E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555E0Cu;
            // 0x555e10: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555E20u;
            goto label_555e20;
        }
    }
    ctx->pc = 0x555E14u;
    // 0x555e14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x555e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x555e18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x555E18u;
    {
        const bool branch_taken_0x555e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555E18u;
            // 0x555e1c: 0xa642007c  sh          $v0, 0x7C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 124), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555e18) {
            ctx->pc = 0x555E24u;
            goto label_555e24;
        }
    }
    ctx->pc = 0x555E20u;
label_555e20:
    // 0x555e20: 0xa642007c  sh          $v0, 0x7C($s2)
    ctx->pc = 0x555e20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 124), (uint16_t)GPR_U32(ctx, 2));
label_555e24:
    // 0x555e24: 0x9642007e  lhu         $v0, 0x7E($s2)
    ctx->pc = 0x555e24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 126)));
    // 0x555e28: 0x28410200  slti        $at, $v0, 0x200
    ctx->pc = 0x555e28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x555e2c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x555E2Cu;
    {
        const bool branch_taken_0x555e2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x555e2c) {
            ctx->pc = 0x555E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555E2Cu;
            // 0x555e30: 0xa640007e  sh          $zero, 0x7E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 126), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555E3Cu;
            goto label_555e3c;
        }
    }
    ctx->pc = 0x555E34u;
    // 0x555e34: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x555e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x555e38: 0xa642007e  sh          $v0, 0x7E($s2)
    ctx->pc = 0x555e38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 126), (uint16_t)GPR_U32(ctx, 2));
label_555e3c:
    // 0x555e3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x555e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x555e40: 0x8c439764  lw          $v1, -0x689C($v0)
    ctx->pc = 0x555e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940516)));
    // 0x555e44: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x555e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x555e48: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x555E48u;
    {
        const bool branch_taken_0x555e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555e48) {
            ctx->pc = 0x555E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555E48u;
            // 0x555e4c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x555E8Cu;
            goto label_555e8c;
        }
    }
    ctx->pc = 0x555E50u;
    // 0x555e50: 0x92440074  lbu         $a0, 0x74($s2)
    ctx->pc = 0x555e50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x555e54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x555e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x555e58: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x555e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x555e5c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x555e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x555e60: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x555e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x555e64: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x555e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x555e68: 0xa2470074  sb          $a3, 0x74($s2)
    ctx->pc = 0x555e68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 7));
    // 0x555e6c: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x555e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
    // 0x555e70: 0xa2460081  sb          $a2, 0x81($s2)
    ctx->pc = 0x555e70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 129), (uint8_t)GPR_U32(ctx, 6));
    // 0x555e74: 0xa645007e  sh          $a1, 0x7E($s2)
    ctx->pc = 0x555e74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 126), (uint16_t)GPR_U32(ctx, 5));
    // 0x555e78: 0xa643007c  sh          $v1, 0x7C($s2)
    ctx->pc = 0x555e78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 124), (uint16_t)GPR_U32(ctx, 3));
    // 0x555e7c: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x555E7Cu;
    SET_GPR_U32(ctx, 31, 0x555E84u);
    ctx->pc = 0x555E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555E7Cu;
            // 0x555e80: 0xa2400082  sb          $zero, 0x82($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555E84u; }
        if (ctx->pc != 0x555E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555E84u; }
        if (ctx->pc != 0x555E84u) { return; }
    }
    ctx->pc = 0x555E84u;
label_555e84:
    // 0x555e84: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x555E84u;
    {
        const bool branch_taken_0x555e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555e84) {
            ctx->pc = 0x555F84u;
            goto label_555f84;
        }
    }
    ctx->pc = 0x555E8Cu;
label_555e8c:
    // 0x555e8c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x555e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x555e90: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x555E90u;
    {
        const bool branch_taken_0x555e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555e90) {
            ctx->pc = 0x555F84u;
            goto label_555f84;
        }
    }
    ctx->pc = 0x555E98u;
    // 0x555e98: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x555e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x555e9c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x555e9cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x555ea0: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x555EA0u;
    SET_GPR_U32(ctx, 31, 0x555EA8u);
    ctx->pc = 0x555EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555EA0u;
            // 0x555ea4: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555EA8u; }
        if (ctx->pc != 0x555EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555EA8u; }
        if (ctx->pc != 0x555EA8u) { return; }
    }
    ctx->pc = 0x555EA8u;
label_555ea8:
    // 0x555ea8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x555EA8u;
    {
        const bool branch_taken_0x555ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555ea8) {
            ctx->pc = 0x555F84u;
            goto label_555f84;
        }
    }
    ctx->pc = 0x555EB0u;
label_555eb0:
    // 0x555eb0: 0x92420082  lbu         $v0, 0x82($s2)
    ctx->pc = 0x555eb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 130)));
    // 0x555eb4: 0x284100d9  slti        $at, $v0, 0xD9
    ctx->pc = 0x555eb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)217) ? 1 : 0);
    // 0x555eb8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x555EB8u;
    {
        const bool branch_taken_0x555eb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x555eb8) {
            ctx->pc = 0x555EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555EB8u;
            // 0x555ebc: 0x240200d9  addiu       $v0, $zero, 0xD9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555ECCu;
            goto label_555ecc;
        }
    }
    ctx->pc = 0x555EC0u;
    // 0x555ec0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x555ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x555ec4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x555EC4u;
    {
        const bool branch_taken_0x555ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555EC4u;
            // 0x555ec8: 0xa2420082  sb          $v0, 0x82($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555ec4) {
            ctx->pc = 0x555ED0u;
            goto label_555ed0;
        }
    }
    ctx->pc = 0x555ECCu;
label_555ecc:
    // 0x555ecc: 0xa2420082  sb          $v0, 0x82($s2)
    ctx->pc = 0x555eccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 130), (uint8_t)GPR_U32(ctx, 2));
label_555ed0:
    // 0x555ed0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x555ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x555ed4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x555ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x555ed8: 0x8c44976c  lw          $a0, -0x6894($v0)
    ctx->pc = 0x555ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940524)));
    // 0x555edc: 0x34620080  ori         $v0, $v1, 0x80
    ctx->pc = 0x555edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x555ee0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x555ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x555ee4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x555ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x555ee8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x555EE8u;
    {
        const bool branch_taken_0x555ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555ee8) {
            ctx->pc = 0x555EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555EE8u;
            // 0x555eec: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555F18u;
            goto label_555f18;
        }
    }
    ctx->pc = 0x555EF0u;
    // 0x555ef0: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x555ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x555ef4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x555ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x555ef8: 0x2c41003d  sltiu       $at, $v0, 0x3D
    ctx->pc = 0x555ef8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
    // 0x555efc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x555EFCu;
    {
        const bool branch_taken_0x555efc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x555F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555EFCu;
            // 0x555f00: 0xae420078  sw          $v0, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555efc) {
            ctx->pc = 0x555F08u;
            goto label_555f08;
        }
    }
    ctx->pc = 0x555F04u;
    // 0x555f04: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x555f04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_555f08:
    // 0x555f08: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x555F08u;
    SET_GPR_U32(ctx, 31, 0x555F10u);
    ctx->pc = 0x555F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555F08u;
            // 0x555f0c: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555F10u; }
        if (ctx->pc != 0x555F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555F10u; }
        if (ctx->pc != 0x555F10u) { return; }
    }
    ctx->pc = 0x555F10u;
label_555f10:
    // 0x555f10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x555F10u;
    {
        const bool branch_taken_0x555f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555f10) {
            ctx->pc = 0x555F50u;
            goto label_555f50;
        }
    }
    ctx->pc = 0x555F18u;
label_555f18:
    // 0x555f18: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x555f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x555f1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x555f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x555f20: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x555f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x555f24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x555F24u;
    {
        const bool branch_taken_0x555f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555f24) {
            ctx->pc = 0x555F50u;
            goto label_555f50;
        }
    }
    ctx->pc = 0x555F2Cu;
    // 0x555f2c: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x555f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x555f30: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x555F30u;
    {
        const bool branch_taken_0x555f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555f30) {
            ctx->pc = 0x555F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555F30u;
            // 0x555f34: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555F44u;
            goto label_555f44;
        }
    }
    ctx->pc = 0x555F38u;
    // 0x555f38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x555f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x555f3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x555F3Cu;
    {
        const bool branch_taken_0x555f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555F3Cu;
            // 0x555f40: 0xae420078  sw          $v0, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555f3c) {
            ctx->pc = 0x555F48u;
            goto label_555f48;
        }
    }
    ctx->pc = 0x555F44u;
label_555f44:
    // 0x555f44: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x555f44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
label_555f48:
    // 0x555f48: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x555F48u;
    SET_GPR_U32(ctx, 31, 0x555F50u);
    ctx->pc = 0x555F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555F48u;
            // 0x555f4c: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555F50u; }
        if (ctx->pc != 0x555F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555F50u; }
        if (ctx->pc != 0x555F50u) { return; }
    }
    ctx->pc = 0x555F50u;
label_555f50:
    // 0x555f50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x555f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x555f54: 0x8c429764  lw          $v0, -0x689C($v0)
    ctx->pc = 0x555f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940516)));
    // 0x555f58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x555f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x555f5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x555f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x555f60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x555F60u;
    {
        const bool branch_taken_0x555f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555f60) {
            ctx->pc = 0x555F84u;
            goto label_555f84;
        }
    }
    ctx->pc = 0x555F68u;
    // 0x555f68: 0x92430074  lbu         $v1, 0x74($s2)
    ctx->pc = 0x555f68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x555f6c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x555f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x555f70: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x555f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
    // 0x555f74: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x555f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x555f78: 0xa2420074  sb          $v0, 0x74($s2)
    ctx->pc = 0x555f78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x555f7c: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x555F7Cu;
    SET_GPR_U32(ctx, 31, 0x555F84u);
    ctx->pc = 0x555F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555F7Cu;
            // 0x555f80: 0xa2400081  sb          $zero, 0x81($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 129), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555F84u; }
        if (ctx->pc != 0x555F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555F84u; }
        if (ctx->pc != 0x555F84u) { return; }
    }
    ctx->pc = 0x555F84u;
label_555f84:
    // 0x555f84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x555f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_555f88:
    // 0x555f88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x555f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x555f8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x555f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x555f90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x555f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x555f94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x555f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x555f98: 0x3e00008  jr          $ra
    ctx->pc = 0x555F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x555F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555F98u;
            // 0x555f9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x555FA0u;
}
