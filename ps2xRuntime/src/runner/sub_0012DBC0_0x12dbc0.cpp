#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012DBC0
// Address: 0x12dbc0 - 0x12dd50
void sub_0012DBC0_0x12dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DBC0_0x12dbc0");
#endif

    switch (ctx->pc) {
        case 0x12dc14u: goto label_12dc14;
        case 0x12dc48u: goto label_12dc48;
        case 0x12dc98u: goto label_12dc98;
        case 0x12dcc0u: goto label_12dcc0;
        default: break;
    }

    ctx->pc = 0x12dbc0u;

    // 0x12dbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12dbc4: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x12dbc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12dbc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12dbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dbcc: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12dbccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12dbd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12dbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12dbd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12dbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12dbd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12dbd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbdc: 0x108f0038  beq         $a0, $t7, . + 4 + (0x38 << 2)
    ctx->pc = 0x12DBDCu;
    {
        const bool branch_taken_0x12dbdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x12DBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DBDCu;
            // 0x12dbe0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbdc) {
            ctx->pc = 0x12DCC0u;
            goto label_12dcc0;
        }
    }
    ctx->pc = 0x12DBE4u;
    // 0x12dbe4: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x12dbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x12dbe8: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DBE8u;
    {
        const bool branch_taken_0x12dbe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dbe8) {
            ctx->pc = 0x12DBECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DBE8u;
            // 0x12dbec: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DC04u;
            goto label_12dc04;
        }
    }
    ctx->pc = 0x12DBF0u;
    // 0x12dbf0: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12dbf0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
    // 0x12dbf4: 0x8dee1ad8  lw          $t6, 0x1AD8($t7)
    ctx->pc = 0x12dbf4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
    // 0x12dbf8: 0xacae0054  sw          $t6, 0x54($a1)
    ctx->pc = 0x12dbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 14));
    // 0x12dbfc: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x12dbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc00: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x12dc00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_12dc04:
    // 0x12dc04: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DC04u;
    {
        const bool branch_taken_0x12dc04 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dc04) {
            ctx->pc = 0x12DC08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC04u;
            // 0x12dc08: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DC18u;
            goto label_12dc18;
        }
    }
    ctx->pc = 0x12DC0Cu;
    // 0x12dc0c: 0xc049e72  jal         func_1279C8
    ctx->pc = 0x12DC0Cu;
    SET_GPR_U32(ctx, 31, 0x12DC14u);
    ctx->pc = 0x1279C8u;
    if (runtime->hasFunction(0x1279C8u)) {
        auto targetFn = runtime->lookupFunction(0x1279C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DC14u; }
        if (ctx->pc != 0x12DC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001279C8_0x1279c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DC14u; }
        if (ctx->pc != 0x12DC14u) { return; }
    }
    ctx->pc = 0x12DC14u;
label_12dc14:
    // 0x12dc14: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12dc14u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12dc18:
    // 0x12dc18: 0x31eeffdf  andi        $t6, $t7, 0xFFDF
    ctx->pc = 0x12dc18u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65503);
    // 0x12dc1c: 0x31cf0004  andi        $t7, $t6, 0x4
    ctx->pc = 0x12dc1cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x12dc20: 0x15e00013  bnez        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x12DC20u;
    {
        const bool branch_taken_0x12dc20 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC20u;
            // 0x12dc24: 0xa60e000c  sh          $t6, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc20) {
            ctx->pc = 0x12DC70u;
            goto label_12dc70;
        }
    }
    ctx->pc = 0x12DC28u;
    // 0x12dc28: 0x31cf0010  andi        $t7, $t6, 0x10
    ctx->pc = 0x12dc28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x12dc2c: 0x11e00024  beqz        $t7, . + 4 + (0x24 << 2)
    ctx->pc = 0x12DC2Cu;
    {
        const bool branch_taken_0x12dc2c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC2Cu;
            // 0x12dc30: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc2c) {
            ctx->pc = 0x12DCC0u;
            goto label_12dcc0;
        }
    }
    ctx->pc = 0x12DC34u;
    // 0x12dc34: 0x31cf0008  andi        $t7, $t6, 0x8
    ctx->pc = 0x12dc34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x12dc38: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12DC38u;
    {
        const bool branch_taken_0x12dc38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc38) {
            ctx->pc = 0x12DC3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC38u;
            // 0x12dc3c: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DC68u;
            goto label_12dc68;
        }
    }
    ctx->pc = 0x12DC40u;
    // 0x12dc40: 0xc049db4  jal         func_1276D0
    ctx->pc = 0x12DC40u;
    SET_GPR_U32(ctx, 31, 0x12DC48u);
    ctx->pc = 0x12DC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC40u;
            // 0x12dc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1276D0u;
    if (runtime->hasFunction(0x1276D0u)) {
        auto targetFn = runtime->lookupFunction(0x1276D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DC48u; }
        if (ctx->pc != 0x12DC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001276D0_0x1276d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DC48u; }
        if (ctx->pc != 0x12DC48u) { return; }
    }
    ctx->pc = 0x12DC48u;
label_12dc48:
    // 0x12dc48: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x12DC48u;
    {
        const bool branch_taken_0x12dc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC48u;
            // 0x12dc4c: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc48) {
            ctx->pc = 0x12DCC0u;
            goto label_12dcc0;
        }
    }
    ctx->pc = 0x12DC50u;
    // 0x12dc50: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12dc50u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12dc54: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12dc58: 0x31effff7  andi        $t7, $t7, 0xFFF7
    ctx->pc = 0x12dc58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65527);
    // 0x12dc5c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x12dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x12dc60: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12dc60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12dc64: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12dc64u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12dc68:
    // 0x12dc68: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x12dc68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x12dc6c: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12dc6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_12dc70:
    // 0x12dc70: 0x8e0f0030  lw          $t7, 0x30($s0)
    ctx->pc = 0x12dc70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x12dc74: 0x11e00018  beqz        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12DC74u;
    {
        const bool branch_taken_0x12dc74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC74u;
            // 0x12dc78: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc74) {
            ctx->pc = 0x12DCD8u;
            goto label_12dcd8;
        }
    }
    ctx->pc = 0x12DC7Cu;
    // 0x12dc7c: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x12dc7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12dc80: 0x8e0e0034  lw          $t6, 0x34($s0)
    ctx->pc = 0x12dc80u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x12dc84: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x12dc84u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x12dc88: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DC88u;
    {
        const bool branch_taken_0x12dc88 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dc88) {
            ctx->pc = 0x12DC8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC88u;
            // 0x12dc8c: 0x8e0e0000  lw          $t6, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DCA4u;
            goto label_12dca4;
        }
    }
    ctx->pc = 0x12DC90u;
    // 0x12dc90: 0xc04b6b6  jal         func_12DAD8
    ctx->pc = 0x12DC90u;
    SET_GPR_U32(ctx, 31, 0x12DC98u);
    ctx->pc = 0x12DC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC90u;
            // 0x12dc94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DAD8u;
    if (runtime->hasFunction(0x12DAD8u)) {
        auto targetFn = runtime->lookupFunction(0x12DAD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DC98u; }
        if (ctx->pc != 0x12DC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DAD8_0x12dad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DC98u; }
        if (ctx->pc != 0x12DC98u) { return; }
    }
    ctx->pc = 0x12DC98u;
label_12dc98:
    // 0x12dc98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12DC98u;
    {
        const bool branch_taken_0x12dc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DC98u;
            // 0x12dc9c: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc98) {
            ctx->pc = 0x12DCC0u;
            goto label_12dcc0;
        }
    }
    ctx->pc = 0x12DCA0u;
    // 0x12dca0: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x12dca0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12dca4:
    // 0x12dca4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x12dca4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dca8: 0x25cfffff  addiu       $t7, $t6, -0x1
    ctx->pc = 0x12dca8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x12dcac: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x12dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
    // 0x12dcb0: 0xa1d1ffff  sb          $s1, -0x1($t6)
    ctx->pc = 0x12dcb0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x12dcb4: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x12dcb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12dcb8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12dcb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12dcbc: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x12dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
label_12dcc0:
    // 0x12dcc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12dcc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dcc4: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x12dcc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12dcc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12dccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12dcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x12DCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DCD0u;
            // 0x12dcd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DCD8u;
label_12dcd8:
    // 0x12dcd8: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x12dcd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12dcdc: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12DCDCu;
    {
        const bool branch_taken_0x12dcdc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DCDCu;
            // 0x12dce0: 0x8e0b0000  lw          $t3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcdc) {
            ctx->pc = 0x12DD18u;
            goto label_12dd18;
        }
    }
    ctx->pc = 0x12DCE4u;
    // 0x12dce4: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x12dce4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12dce8: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12DCE8u;
    {
        const bool branch_taken_0x12dce8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DCE8u;
            // 0x12dcec: 0x8e0e0004  lw          $t6, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dce8) {
            ctx->pc = 0x12DD1Cu;
            goto label_12dd1c;
        }
    }
    ctx->pc = 0x12DCF0u;
    // 0x12dcf0: 0x916fffff  lbu         $t7, -0x1($t3)
    ctx->pc = 0x12dcf0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294967295)));
    // 0x12dcf4: 0x15f10009  bne         $t7, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12DCF4u;
    {
        const bool branch_taken_0x12dcf4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        if (branch_taken_0x12dcf4) {
            ctx->pc = 0x12DD1Cu;
            goto label_12dd1c;
        }
    }
    ctx->pc = 0x12DCFCu;
    // 0x12dcfc: 0x256fffff  addiu       $t7, $t3, -0x1
    ctx->pc = 0x12dcfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x12dd00: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x12dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
    // 0x12dd04: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x12dd04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd08: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12dd08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12dd0c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12DD0Cu;
    {
        const bool branch_taken_0x12dd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DD0Cu;
            // 0x12dd10: 0xae0e0004  sw          $t6, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd0c) {
            ctx->pc = 0x12DCC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dcc0;
        }
    }
    ctx->pc = 0x12DD14u;
    // 0x12dd14: 0x0  nop
    ctx->pc = 0x12dd14u;
    // NOP
label_12dd18:
    // 0x12dd18: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x12dd18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_12dd1c:
    // 0x12dd1c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12dd1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dd20: 0x260d0040  addiu       $t5, $s0, 0x40
    ctx->pc = 0x12dd20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x12dd24: 0xae0b0038  sw          $t3, 0x38($s0)
    ctx->pc = 0x12dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 11));
    // 0x12dd28: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x12dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x12dd2c: 0x260c0042  addiu       $t4, $s0, 0x42
    ctx->pc = 0x12dd2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x12dd30: 0xae0e003c  sw          $t6, 0x3C($s0)
    ctx->pc = 0x12dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 14));
    // 0x12dd34: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x12dd34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd38: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x12dd38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12dd3c: 0xae0d0030  sw          $t5, 0x30($s0)
    ctx->pc = 0x12dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 13));
    // 0x12dd40: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x12dd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x12dd44: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x12dd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
    // 0x12dd48: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x12DD48u;
    {
        const bool branch_taken_0x12dd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DD48u;
            // 0x12dd4c: 0xa2110042  sb          $s1, 0x42($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd48) {
            ctx->pc = 0x12DCC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dcc0;
        }
    }
    ctx->pc = 0x12DD50u;
}
