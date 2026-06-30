#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014F8F0
// Address: 0x14f8f0 - 0x150210
void sub_0014F8F0_0x14f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F8F0_0x14f8f0");
#endif

    switch (ctx->pc) {
        case 0x14f9ccu: goto label_14f9cc;
        case 0x14f9e8u: goto label_14f9e8;
        case 0x14fd5cu: goto label_14fd5c;
        case 0x14fd80u: goto label_14fd80;
        case 0x14fdb8u: goto label_14fdb8;
        case 0x14fdc0u: goto label_14fdc0;
        case 0x14fdd4u: goto label_14fdd4;
        case 0x14fe08u: goto label_14fe08;
        case 0x150170u: goto label_150170;
        case 0x150178u: goto label_150178;
        default: break;
    }

    ctx->pc = 0x14f8f0u;

    // 0x14f8f0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x14f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x14f8f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14f8f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14f8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14f8fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14f8fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f900: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14f900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14f904: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14f904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f908: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14f908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14f90c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14f90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f910: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14f910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14f914: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14f914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14f918: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14f918u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f91c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14f91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14f920: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14f920u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f924: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14f924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14f928: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14f928u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f92c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14f930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f938: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x14f938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f93c: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x14f93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x14f940: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x14f940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x14f944: 0x30a30400  andi        $v1, $a1, 0x400
    ctx->pc = 0x14f944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x14f948: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x14f948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x14f94c: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x14f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x14f950: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x14f950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x14f954: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F954u;
    {
        const bool branch_taken_0x14f954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F954u;
            // 0x14f958: 0xa3a0014f  sb          $zero, 0x14F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 335), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f954) {
            ctx->pc = 0x14F968u;
            goto label_14f968;
        }
    }
    ctx->pc = 0x14F95Cu;
    // 0x14f95c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14f960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F960u;
    {
        const bool branch_taken_0x14f960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F960u;
            // 0x14f964: 0xafa30120  sw          $v1, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f960) {
            ctx->pc = 0x14F970u;
            goto label_14f970;
        }
    }
    ctx->pc = 0x14F968u;
label_14f968:
    // 0x14f968: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14f968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14f96c: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x14f96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_14f970:
    // 0x14f970: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x14f970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14f974: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x14f974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x14f978: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F978u;
    {
        const bool branch_taken_0x14f978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f978) {
            ctx->pc = 0x14F97Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F978u;
            // 0x14f97c: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F994u;
            goto label_14f994;
        }
    }
    ctx->pc = 0x14F980u;
    // 0x14f980: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x14f980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14f984: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x14f984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x14f988: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F988u;
    {
        const bool branch_taken_0x14f988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f988) {
            ctx->pc = 0x14F98Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F988u;
            // 0x14f98c: 0x8ea3000c  lw          $v1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F9A0u;
            goto label_14f9a0;
        }
    }
    ctx->pc = 0x14F990u;
    // 0x14f990: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x14f990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_14f994:
    // 0x14f994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14f994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14f998: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x14f998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x14f99c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x14f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_14f9a0:
    // 0x14f9a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f9a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9a4: 0x8eab0010  lw          $t3, 0x10($s5)
    ctx->pc = 0x14f9a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14f9a8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x14f9a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9ac: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x14f9acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f9b0: 0x640e0010  daddiu      $t6, $zero, 0x10
    ctx->pc = 0x14f9b0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x14f9b4: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x14f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
    // 0x14f9b8: 0x64180008  daddiu      $t8, $zero, 0x8
    ctx->pc = 0x14f9b8u;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x14f9bc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14f9c0: 0x7fa300f0  sq          $v1, 0xF0($sp)
    ctx->pc = 0x14f9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 3));
    // 0x14f9c4: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x14F9C4u;
    {
        const bool branch_taken_0x14f9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F9C4u;
            // 0x14f9c8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9c4) {
            ctx->pc = 0x14FD10u;
            goto label_14fd10;
        }
    }
    ctx->pc = 0x14F9CCu;
label_14f9cc:
    // 0x14f9cc: 0xd97804  sllv        $t7, $t9, $a2
    ctx->pc = 0x14f9ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 6) & 0x1F));
    // 0x14f9d0: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x14f9d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x14f9d4: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x14f9d4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x14f9d8: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x14f9d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x14f9dc: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x14F9DCu;
    {
        const bool branch_taken_0x14f9dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f9dc) {
            ctx->pc = 0x14FA08u;
            goto label_14fa08;
        }
    }
    ctx->pc = 0x14F9E4u;
    // 0x14f9e4: 0x0  nop
    ctx->pc = 0x14f9e4u;
    // NOP
label_14f9e8:
    // 0x14f9e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14f9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14f9ec: 0xd97804  sllv        $t7, $t9, $a2
    ctx->pc = 0x14f9ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 6) & 0x1F));
    // 0x14f9f0: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x14f9f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x14f9f4: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x14f9f4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x14f9f8: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x14f9f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x14f9fc: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14F9FCu;
    {
        const bool branch_taken_0x14f9fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f9fc) {
            ctx->pc = 0x14F9E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f9e8;
        }
    }
    ctx->pc = 0x14FA04u;
    // 0x14fa04: 0x0  nop
    ctx->pc = 0x14fa04u;
    // NOP
label_14fa08:
    // 0x14fa08: 0x10c300a3  beq         $a2, $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x14FA08u;
    {
        const bool branch_taken_0x14fa08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x14fa08) {
            ctx->pc = 0x14FC98u;
            goto label_14fc98;
        }
    }
    ctx->pc = 0x14FA10u;
    // 0x14fa10: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x14fa10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fa14: 0x10cd007a  beq         $a2, $t5, . + 4 + (0x7A << 2)
    ctx->pc = 0x14FA14u;
    {
        const bool branch_taken_0x14fa14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 13));
        if (branch_taken_0x14fa14) {
            ctx->pc = 0x14FC00u;
            goto label_14fc00;
        }
    }
    ctx->pc = 0x14FA1Cu;
    // 0x14fa1c: 0x10d90050  beq         $a2, $t9, . + 4 + (0x50 << 2)
    ctx->pc = 0x14FA1Cu;
    {
        const bool branch_taken_0x14fa1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 25));
        if (branch_taken_0x14fa1c) {
            ctx->pc = 0x14FB60u;
            goto label_14fb60;
        }
    }
    ctx->pc = 0x14FA24u;
    // 0x14fa24: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FA24u;
    {
        const bool branch_taken_0x14fa24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa24) {
            ctx->pc = 0x14FA38u;
            goto label_14fa38;
        }
    }
    ctx->pc = 0x14FA2Cu;
    // 0x14fa2c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x14FA2Cu;
    {
        const bool branch_taken_0x14fa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa2c) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FA34u;
    // 0x14fa34: 0x0  nop
    ctx->pc = 0x14fa34u;
    // NOP
label_14fa38:
    // 0x14fa38: 0x240d1003  addiu       $t5, $zero, 0x1003
    ctx->pc = 0x14fa38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x14fa3c: 0x10ad003c  beq         $a1, $t5, . + 4 + (0x3C << 2)
    ctx->pc = 0x14FA3Cu;
    {
        const bool branch_taken_0x14fa3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 13));
        if (branch_taken_0x14fa3c) {
            ctx->pc = 0x14FB30u;
            goto label_14fb30;
        }
    }
    ctx->pc = 0x14FA44u;
    // 0x14fa44: 0x240d0403  addiu       $t5, $zero, 0x403
    ctx->pc = 0x14fa44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x14fa48: 0x10ad002d  beq         $a1, $t5, . + 4 + (0x2D << 2)
    ctx->pc = 0x14FA48u;
    {
        const bool branch_taken_0x14fa48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 13));
        if (branch_taken_0x14fa48) {
            ctx->pc = 0x14FB00u;
            goto label_14fb00;
        }
    }
    ctx->pc = 0x14FA50u;
    // 0x14fa50: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x14FA50u;
    {
        const bool branch_taken_0x14fa50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x14fa50) {
            ctx->pc = 0x14FAD8u;
            goto label_14fad8;
        }
    }
    ctx->pc = 0x14FA58u;
    // 0x14fa58: 0x240d1001  addiu       $t5, $zero, 0x1001
    ctx->pc = 0x14fa58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x14fa5c: 0x10ad0016  beq         $a1, $t5, . + 4 + (0x16 << 2)
    ctx->pc = 0x14FA5Cu;
    {
        const bool branch_taken_0x14fa5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 13));
        if (branch_taken_0x14fa5c) {
            ctx->pc = 0x14FAB8u;
            goto label_14fab8;
        }
    }
    ctx->pc = 0x14FA64u;
    // 0x14fa64: 0x240d0401  addiu       $t5, $zero, 0x401
    ctx->pc = 0x14fa64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x14fa68: 0x10ad000b  beq         $a1, $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x14FA68u;
    {
        const bool branch_taken_0x14fa68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 13));
        if (branch_taken_0x14fa68) {
            ctx->pc = 0x14FA98u;
            goto label_14fa98;
        }
    }
    ctx->pc = 0x14FA70u;
    // 0x14fa70: 0x10b90003  beq         $a1, $t9, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FA70u;
    {
        const bool branch_taken_0x14fa70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 25));
        if (branch_taken_0x14fa70) {
            ctx->pc = 0x14FA80u;
            goto label_14fa80;
        }
    }
    ctx->pc = 0x14FA78u;
    // 0x14fa78: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x14FA78u;
    {
        const bool branch_taken_0x14fa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa78) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FA80u;
label_14fa80:
    // 0x14fa80: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x14fa80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14fa84: 0x640a000c  daddiu      $t2, $zero, 0xC
    ctx->pc = 0x14fa84u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x14fa88: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x14fa88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa8c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x14FA8Cu;
    {
        const bool branch_taken_0x14fa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FA8Cu;
            // 0x14fa90: 0xafad0190  sw          $t5, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa8c) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FA94u;
    // 0x14fa94: 0x0  nop
    ctx->pc = 0x14fa94u;
    // NOP
label_14fa98:
    // 0x14fa98: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x14fa98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14fa9c: 0x640a0018  daddiu      $t2, $zero, 0x18
    ctx->pc = 0x14fa9cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
    // 0x14faa0: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x14faa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14faa4: 0xafad0190  sw          $t5, 0x190($sp)
    ctx->pc = 0x14faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 13));
    // 0x14faa8: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x14faa8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x14faac: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x14FAACu;
    {
        const bool branch_taken_0x14faac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FAACu;
            // 0x14fab0: 0xafad0160  sw          $t5, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14faac) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FAB4u;
    // 0x14fab4: 0x0  nop
    ctx->pc = 0x14fab4u;
    // NOP
label_14fab8:
    // 0x14fab8: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x14fab8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14fabc: 0x640a002c  daddiu      $t2, $zero, 0x2C
    ctx->pc = 0x14fabcu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)44);
    // 0x14fac0: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x14fac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fac4: 0xafad0190  sw          $t5, 0x190($sp)
    ctx->pc = 0x14fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 13));
    // 0x14fac8: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x14fac8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x14facc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x14FACCu;
    {
        const bool branch_taken_0x14facc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FACCu;
            // 0x14fad0: 0xafad0150  sw          $t5, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14facc) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FAD4u;
    // 0x14fad4: 0x0  nop
    ctx->pc = 0x14fad4u;
    // NOP
label_14fad8:
    // 0x14fad8: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x14fad8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14fadc: 0x640a0018  daddiu      $t2, $zero, 0x18
    ctx->pc = 0x14fadcu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)24);
    // 0x14fae0: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x14fae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fae4: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x14fae4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fae8: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x14fae8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14faec: 0xafad0190  sw          $t5, 0x190($sp)
    ctx->pc = 0x14faecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 13));
    // 0x14faf0: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x14faf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x14faf4: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x14FAF4u;
    {
        const bool branch_taken_0x14faf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FAF4u;
            // 0x14faf8: 0xafad0180  sw          $t5, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14faf4) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FAFCu;
    // 0x14fafc: 0x0  nop
    ctx->pc = 0x14fafcu;
    // NOP
label_14fb00:
    // 0x14fb00: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x14fb00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14fb04: 0x640a0024  daddiu      $t2, $zero, 0x24
    ctx->pc = 0x14fb04u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)36);
    // 0x14fb08: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x14fb08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb0c: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x14fb0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb10: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x14fb10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb14: 0xafad0190  sw          $t5, 0x190($sp)
    ctx->pc = 0x14fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 13));
    // 0x14fb18: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x14fb18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x14fb1c: 0xafad0180  sw          $t5, 0x180($sp)
    ctx->pc = 0x14fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 13));
    // 0x14fb20: 0x8fad0190  lw          $t5, 0x190($sp)
    ctx->pc = 0x14fb20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14fb24: 0x25ad0018  addiu       $t5, $t5, 0x18
    ctx->pc = 0x14fb24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 24));
    // 0x14fb28: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x14FB28u;
    {
        const bool branch_taken_0x14fb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB28u;
            // 0x14fb2c: 0xafad0160  sw          $t5, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb28) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FB30u;
label_14fb30:
    // 0x14fb30: 0x8c8d000c  lw          $t5, 0xC($a0)
    ctx->pc = 0x14fb30u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14fb34: 0x640a0038  daddiu      $t2, $zero, 0x38
    ctx->pc = 0x14fb34u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)56);
    // 0x14fb38: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x14fb38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb3c: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x14fb3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb40: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x14fb40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb44: 0xafad0190  sw          $t5, 0x190($sp)
    ctx->pc = 0x14fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 13));
    // 0x14fb48: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x14fb48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x14fb4c: 0xafad0180  sw          $t5, 0x180($sp)
    ctx->pc = 0x14fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 13));
    // 0x14fb50: 0x8fad0190  lw          $t5, 0x190($sp)
    ctx->pc = 0x14fb50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14fb54: 0x25ad0018  addiu       $t5, $t5, 0x18
    ctx->pc = 0x14fb54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 24));
    // 0x14fb58: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x14FB58u;
    {
        const bool branch_taken_0x14fb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB58u;
            // 0x14fb5c: 0xafad0150  sw          $t5, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb58) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FB60u;
label_14fb60:
    // 0x14fb60: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x14fb60u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14fb64: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x14fb64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x14fb68: 0x11af001d  beq         $t5, $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x14FB68u;
    {
        const bool branch_taken_0x14fb68 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x14fb68) {
            ctx->pc = 0x14FBE0u;
            goto label_14fbe0;
        }
    }
    ctx->pc = 0x14FB70u;
    // 0x14fb70: 0x240f0020  addiu       $t7, $zero, 0x20
    ctx->pc = 0x14fb70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14fb74: 0x11af0016  beq         $t5, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x14FB74u;
    {
        const bool branch_taken_0x14fb74 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x14fb74) {
            ctx->pc = 0x14FBD0u;
            goto label_14fbd0;
        }
    }
    ctx->pc = 0x14FB7Cu;
    // 0x14fb7c: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x14fb7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14fb80: 0x11af000d  beq         $t5, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x14FB80u;
    {
        const bool branch_taken_0x14fb80 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x14fb80) {
            ctx->pc = 0x14FBB8u;
            goto label_14fbb8;
        }
    }
    ctx->pc = 0x14FB88u;
    // 0x14fb88: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x14fb88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fb8c: 0x11af0004  beq         $t5, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FB8Cu;
    {
        const bool branch_taken_0x14fb8c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x14fb8c) {
            ctx->pc = 0x14FBA0u;
            goto label_14fba0;
        }
    }
    ctx->pc = 0x14FB94u;
    // 0x14fb94: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x14FB94u;
    {
        const bool branch_taken_0x14fb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb94) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FB9Cu;
    // 0x14fb9c: 0x0  nop
    ctx->pc = 0x14fb9cu;
    // NOP
label_14fba0:
    // 0x14fba0: 0x8c8d001c  lw          $t5, 0x1C($a0)
    ctx->pc = 0x14fba0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14fba4: 0x6409000c  daddiu      $t1, $zero, 0xC
    ctx->pc = 0x14fba4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x14fba8: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x14fba8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbac: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x14FBACu;
    {
        const bool branch_taken_0x14fbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FBACu;
            // 0x14fbb0: 0xafad0180  sw          $t5, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbac) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FBB4u;
    // 0x14fbb4: 0x0  nop
    ctx->pc = 0x14fbb4u;
    // NOP
label_14fbb8:
    // 0x14fbb8: 0x8c8d001c  lw          $t5, 0x1C($a0)
    ctx->pc = 0x14fbb8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14fbbc: 0xa3ae014f  sb          $t6, 0x14F($sp)
    ctx->pc = 0x14fbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 335), (uint8_t)GPR_U32(ctx, 14));
    // 0x14fbc0: 0xafab0130  sw          $t3, 0x130($sp)
    ctx->pc = 0x14fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 11));
    // 0x14fbc4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x14FBC4u;
    {
        const bool branch_taken_0x14fbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FBC4u;
            // 0x14fbc8: 0xafad0170  sw          $t5, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbc4) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FBCCu;
    // 0x14fbcc: 0x0  nop
    ctx->pc = 0x14fbccu;
    // NOP
label_14fbd0:
    // 0x14fbd0: 0x8c96001c  lw          $s6, 0x1C($a0)
    ctx->pc = 0x14fbd0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14fbd4: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x14fbd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbd8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x14FBD8u;
    {
        const bool branch_taken_0x14fbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FBD8u;
            // 0x14fbdc: 0x160b82d  daddu       $s7, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbd8) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FBE0u;
label_14fbe0:
    // 0x14fbe0: 0x8c96001c  lw          $s6, 0x1C($a0)
    ctx->pc = 0x14fbe0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14fbe4: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x14fbe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbe8: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x14fbe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbec: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x14fbecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbf0: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x14fbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbf4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x14FBF4u;
    {
        const bool branch_taken_0x14fbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FBF4u;
            // 0x14fbf8: 0x26d40008  addiu       $s4, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbf4) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FBFCu;
    // 0x14fbfc: 0x0  nop
    ctx->pc = 0x14fbfcu;
    // NOP
label_14fc00:
    // 0x14fc00: 0x8c8d0020  lw          $t5, 0x20($a0)
    ctx->pc = 0x14fc00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14fc04: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x14fc04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x14fc08: 0x11af001b  beq         $t5, $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x14FC08u;
    {
        const bool branch_taken_0x14fc08 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x14fc08) {
            ctx->pc = 0x14FC78u;
            goto label_14fc78;
        }
    }
    ctx->pc = 0x14FC10u;
    // 0x14fc10: 0x240f0040  addiu       $t7, $zero, 0x40
    ctx->pc = 0x14fc10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14fc14: 0x11af0014  beq         $t5, $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x14FC14u;
    {
        const bool branch_taken_0x14fc14 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x14fc14) {
            ctx->pc = 0x14FC68u;
            goto label_14fc68;
        }
    }
    ctx->pc = 0x14FC1Cu;
    // 0x14fc1c: 0x240f0020  addiu       $t7, $zero, 0x20
    ctx->pc = 0x14fc1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14fc20: 0x11af000d  beq         $t5, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x14FC20u;
    {
        const bool branch_taken_0x14fc20 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x14fc20) {
            ctx->pc = 0x14FC58u;
            goto label_14fc58;
        }
    }
    ctx->pc = 0x14FC28u;
    // 0x14fc28: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x14fc28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14fc2c: 0x11af0004  beq         $t5, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FC2Cu;
    {
        const bool branch_taken_0x14fc2c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x14fc2c) {
            ctx->pc = 0x14FC40u;
            goto label_14fc40;
        }
    }
    ctx->pc = 0x14FC34u;
    // 0x14fc34: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x14FC34u;
    {
        const bool branch_taken_0x14fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc34) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FC3Cu;
    // 0x14fc3c: 0x0  nop
    ctx->pc = 0x14fc3cu;
    // NOP
label_14fc40:
    // 0x14fc40: 0x8c8d002c  lw          $t5, 0x2C($a0)
    ctx->pc = 0x14fc40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14fc44: 0xa3ae014f  sb          $t6, 0x14F($sp)
    ctx->pc = 0x14fc44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 335), (uint8_t)GPR_U32(ctx, 14));
    // 0x14fc48: 0xafab0130  sw          $t3, 0x130($sp)
    ctx->pc = 0x14fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 11));
    // 0x14fc4c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14FC4Cu;
    {
        const bool branch_taken_0x14fc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC4Cu;
            // 0x14fc50: 0xafad0170  sw          $t5, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc4c) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FC54u;
    // 0x14fc54: 0x0  nop
    ctx->pc = 0x14fc54u;
    // NOP
label_14fc58:
    // 0x14fc58: 0x8c96002c  lw          $s6, 0x2C($a0)
    ctx->pc = 0x14fc58u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14fc5c: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x14fc5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc60: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x14FC60u;
    {
        const bool branch_taken_0x14fc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC60u;
            // 0x14fc64: 0x160b82d  daddu       $s7, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc60) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FC68u;
label_14fc68:
    // 0x14fc68: 0x8c94002c  lw          $s4, 0x2C($a0)
    ctx->pc = 0x14fc68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14fc6c: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x14fc6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc70: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x14FC70u;
    {
        const bool branch_taken_0x14fc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC70u;
            // 0x14fc74: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc70) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FC78u;
label_14fc78:
    // 0x14fc78: 0x8c96002c  lw          $s6, 0x2C($a0)
    ctx->pc = 0x14fc78u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14fc7c: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x14fc7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc80: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x14fc80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc84: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x14fc84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc88: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x14fc88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc8c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14FC8Cu;
    {
        const bool branch_taken_0x14fc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC8Cu;
            // 0x14fc90: 0x26d40008  addiu       $s4, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc8c) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FC94u;
    // 0x14fc94: 0x0  nop
    ctx->pc = 0x14fc94u;
    // NOP
label_14fc98:
    // 0x14fc98: 0x8c8d0030  lw          $t5, 0x30($a0)
    ctx->pc = 0x14fc98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14fc9c: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x14fc9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x14fca0: 0x11af0011  beq         $t5, $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x14FCA0u;
    {
        const bool branch_taken_0x14fca0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x14fca0) {
            ctx->pc = 0x14FCE8u;
            goto label_14fce8;
        }
    }
    ctx->pc = 0x14FCA8u;
    // 0x14fca8: 0x240f0040  addiu       $t7, $zero, 0x40
    ctx->pc = 0x14fca8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14fcac: 0x11af000a  beq         $t5, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x14FCACu;
    {
        const bool branch_taken_0x14fcac = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x14fcac) {
            ctx->pc = 0x14FCD8u;
            goto label_14fcd8;
        }
    }
    ctx->pc = 0x14FCB4u;
    // 0x14fcb4: 0x240f0020  addiu       $t7, $zero, 0x20
    ctx->pc = 0x14fcb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14fcb8: 0x11af0003  beq         $t5, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FCB8u;
    {
        const bool branch_taken_0x14fcb8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x14fcb8) {
            ctx->pc = 0x14FCC8u;
            goto label_14fcc8;
        }
    }
    ctx->pc = 0x14FCC0u;
    // 0x14fcc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14FCC0u;
    {
        const bool branch_taken_0x14fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fcc0) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FCC8u;
label_14fcc8:
    // 0x14fcc8: 0x8c96003c  lw          $s6, 0x3C($a0)
    ctx->pc = 0x14fcc8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14fccc: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x14fcccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14FCD0u;
    {
        const bool branch_taken_0x14fcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FCD0u;
            // 0x14fcd4: 0x160b82d  daddu       $s7, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcd0) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FCD8u;
label_14fcd8:
    // 0x14fcd8: 0x8c94003c  lw          $s4, 0x3C($a0)
    ctx->pc = 0x14fcd8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14fcdc: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x14fcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fce0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14FCE0u;
    {
        const bool branch_taken_0x14fce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FCE0u;
            // 0x14fce4: 0x300382d  daddu       $a3, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fce0) {
            ctx->pc = 0x14FD00u;
            goto label_14fd00;
        }
    }
    ctx->pc = 0x14FCE8u;
label_14fce8:
    // 0x14fce8: 0x8c96003c  lw          $s6, 0x3C($a0)
    ctx->pc = 0x14fce8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14fcec: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x14fcecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcf0: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x14fcf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcf4: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x14fcf4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcf8: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x14fcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcfc: 0x26d40008  addiu       $s4, $s6, 0x8
    ctx->pc = 0x14fcfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_14fd00:
    // 0x14fd00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14fd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14fd04: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x14fd04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x14fd08: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x14fd08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x14fd0c: 0x0  nop
    ctx->pc = 0x14fd0cu;
    // NOP
label_14fd10:
    // 0x14fd10: 0x7bad00f0  lq          $t5, 0xF0($sp)
    ctx->pc = 0x14fd10u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14fd14: 0x18d682a  slt         $t5, $t4, $t5
    ctx->pc = 0x14fd14u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x14fd18: 0x55a0ff2c  bnel        $t5, $zero, . + 4 + (-0xD4 << 2)
    ctx->pc = 0x14FD18u;
    {
        const bool branch_taken_0x14fd18 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fd18) {
            ctx->pc = 0x14FD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14FD18u;
            // 0x14fd1c: 0x8ead0000  lw          $t5, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14F9CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f9cc;
        }
    }
    ctx->pc = 0x14FD20u;
    // 0x14fd20: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x14fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14fd24: 0x1860012e  blez        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x14FD24u;
    {
        const bool branch_taken_0x14fd24 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14FD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FD24u;
            // 0x14fd28: 0xafa001b0  sw          $zero, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd24) {
            ctx->pc = 0x1501E0u;
            goto label_1501e0;
        }
    }
    ctx->pc = 0x14FD2Cu;
    // 0x14fd2c: 0x314200ff  andi        $v0, $t2, 0xFF
    ctx->pc = 0x14fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x14fd30: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x14fd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x14fd34: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x14fd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x14fd38: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x14fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x14fd3c: 0x93a2014f  lbu         $v0, 0x14F($sp)
    ctx->pc = 0x14fd3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 335)));
    // 0x14fd40: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x14fd40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd44: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x14fd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x14fd48: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x14fd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x14fd4c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x14fd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x14fd50: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x14fd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x14fd54: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x14fd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x14fd58: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x14fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_14fd5c:
    // 0x14fd5c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x14fd5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fd60: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x14fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x14fd64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14fd68: 0x8c435774  lw          $v1, 0x5774($v0)
    ctx->pc = 0x14fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22388)));
    // 0x14fd6c: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x14fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x14fd70: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x14fd70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14fd74: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x14fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x14fd78: 0xc052da0  jal         func_14B680
    ctx->pc = 0x14FD78u;
    SET_GPR_U32(ctx, 31, 0x14FD80u);
    ctx->pc = 0x14FD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FD78u;
            // 0x14fd7c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FD80u; }
        if (ctx->pc != 0x14FD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B680_0x14b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FD80u; }
        if (ctx->pc != 0x14FD80u) { return; }
    }
    ctx->pc = 0x14FD80u;
label_14fd80:
    // 0x14fd80: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x14fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14fd84: 0x2841001b  slti        $at, $v0, 0x1B
    ctx->pc = 0x14fd84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x14fd88: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x14FD88u;
    {
        const bool branch_taken_0x14fd88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fd88) {
            ctx->pc = 0x14FDA8u;
            goto label_14fda8;
        }
    }
    ctx->pc = 0x14FD90u;
    // 0x14fd90: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x14fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14fd94: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x14fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x14fd98: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x14fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14fd9c: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x14fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x14fda0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14FDA0u;
    {
        const bool branch_taken_0x14fda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FDA0u;
            // 0x14fda4: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fda0) {
            ctx->pc = 0x14FDB0u;
            goto label_14fdb0;
        }
    }
    ctx->pc = 0x14FDA8u;
label_14fda8:
    // 0x14fda8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x14fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x14fdac: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x14fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_14fdb0:
    // 0x14fdb0: 0xc056b10  jal         func_15AC40
    ctx->pc = 0x14FDB0u;
    SET_GPR_U32(ctx, 31, 0x14FDB8u);
    ctx->pc = 0x15AC40u;
    if (runtime->hasFunction(0x15AC40u)) {
        auto targetFn = runtime->lookupFunction(0x15AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FDB8u; }
        if (ctx->pc != 0x14FDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC40_0x15ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FDB8u; }
        if (ctx->pc != 0x14FDB8u) { return; }
    }
    ctx->pc = 0x14FDB8u;
label_14fdb8:
    // 0x14fdb8: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x14FDB8u;
    SET_GPR_U32(ctx, 31, 0x14FDC0u);
    ctx->pc = 0x14FDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FDB8u;
            // 0x14fdbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FDC0u; }
        if (ctx->pc != 0x14FDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FDC0u; }
        if (ctx->pc != 0x14FDC0u) { return; }
    }
    ctx->pc = 0x14FDC0u;
label_14fdc0:
    // 0x14fdc0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x14fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14fdc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14fdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fdc8: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x14fdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14fdcc: 0xc056b20  jal         func_15AC80
    ctx->pc = 0x14FDCCu;
    SET_GPR_U32(ctx, 31, 0x14FDD4u);
    ctx->pc = 0x14FDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FDCCu;
            // 0x14fdd0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC80u;
    if (runtime->hasFunction(0x15AC80u)) {
        auto targetFn = runtime->lookupFunction(0x15AC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FDD4u; }
        if (ctx->pc != 0x14FDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC80_0x15ac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FDD4u; }
        if (ctx->pc != 0x14FDD4u) { return; }
    }
    ctx->pc = 0x14FDD4u;
label_14fdd4:
    // 0x14fdd4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x14fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14fdd8: 0x186000e3  blez        $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x14FDD8u;
    {
        const bool branch_taken_0x14fdd8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14FDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FDD8u;
            // 0x14fddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fdd8) {
            ctx->pc = 0x150168u;
            goto label_150168;
        }
    }
    ctx->pc = 0x14FDE0u;
    // 0x14fde0: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x14fde0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
    // 0x14fde4: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x14fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
    // 0x14fde8: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x14fde8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14fdec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14fdf0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x14fdf0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14fdf4: 0x3c074300  lui         $a3, 0x4300
    ctx->pc = 0x14fdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17152 << 16));
    // 0x14fdf8: 0x24637a80  addiu       $v1, $v1, 0x7A80
    ctx->pc = 0x14fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31360));
    // 0x14fdfc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14fdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14fe00: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x14fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x14fe04: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x14fe04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14fe08:
    // 0x14fe08: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x14fe08u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14fe0c: 0x7ba700e0  lq          $a3, 0xE0($sp)
    ctx->pc = 0x14fe0cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14fe10: 0x1074018  mult        $t0, $t0, $a3
    ctx->pc = 0x14fe10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14fe14: 0x8fa70190  lw          $a3, 0x190($sp)
    ctx->pc = 0x14fe14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14fe18: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x14fe18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x14fe1c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x14fe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe20: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14fe20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14fe24: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x14fe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe28: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x14fe28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14fe2c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x14fe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe30: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x14fe30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x14fe34: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x14FE34u;
    {
        const bool branch_taken_0x14fe34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE34u;
            // 0x14fe38: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe34) {
            ctx->pc = 0x14FE60u;
            goto label_14fe60;
        }
    }
    ctx->pc = 0x14FE3Cu;
    // 0x14fe3c: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x14fe3cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14fe40: 0x7ba700e0  lq          $a3, 0xE0($sp)
    ctx->pc = 0x14fe40u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14fe44: 0x1074018  mult        $t0, $t0, $a3
    ctx->pc = 0x14fe44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14fe48: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x14fe48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x14fe4c: 0xe89821  addu        $s3, $a3, $t0
    ctx->pc = 0x14fe4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x14fe50: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x14fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14FE54u;
    {
        const bool branch_taken_0x14fe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE54u;
            // 0x14fe58: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe54) {
            ctx->pc = 0x14FE90u;
            goto label_14fe90;
        }
    }
    ctx->pc = 0x14FE5Cu;
    // 0x14fe5c: 0x0  nop
    ctx->pc = 0x14fe5cu;
    // NOP
label_14fe60:
    // 0x14fe60: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x14fe60u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14fe64: 0x7ba700e0  lq          $a3, 0xE0($sp)
    ctx->pc = 0x14fe64u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14fe68: 0x1074018  mult        $t0, $t0, $a3
    ctx->pc = 0x14fe68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14fe6c: 0x8fa70150  lw          $a3, 0x150($sp)
    ctx->pc = 0x14fe6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x14fe70: 0xe89021  addu        $s2, $a3, $t0
    ctx->pc = 0x14fe70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x14fe74: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x14fe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe78: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x14fe78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x14fe7c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x14fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe80: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x14fe80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x14fe84: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x14fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe88: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x14fe88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x14fe8c: 0x0  nop
    ctx->pc = 0x14fe8cu;
    // NOP
label_14fe90:
    // 0x14fe90: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x14fe90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14fe94: 0x74840  sll         $t1, $a3, 1
    ctx->pc = 0x14fe94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x14fe98: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x14fe98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x14fe9c: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x14FE9Cu;
    {
        const bool branch_taken_0x14fe9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE9Cu;
            // 0x14fea0: 0x2298821  addu        $s1, $s1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe9c) {
            ctx->pc = 0x14FED8u;
            goto label_14fed8;
        }
    }
    ctx->pc = 0x14FEA4u;
    // 0x14fea4: 0x97c80000  lhu         $t0, 0x0($fp)
    ctx->pc = 0x14fea4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14fea8: 0x7ba700d0  lq          $a3, 0xD0($sp)
    ctx->pc = 0x14fea8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14feac: 0x3c9f021  addu        $fp, $fp, $t1
    ctx->pc = 0x14feacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
    // 0x14feb0: 0x1074018  mult        $t0, $t0, $a3
    ctx->pc = 0x14feb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14feb4: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x14feb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x14feb8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x14feb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x14febc: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x14febcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14fec0: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x14fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x14fec4: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x14fec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14fec8: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x14fec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x14fecc: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x14feccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x14fed0: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x14fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x14fed4: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x14fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
label_14fed8:
    // 0x14fed8: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x14fed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x14fedc: 0x10e00052  beqz        $a3, . + 4 + (0x52 << 2)
    ctx->pc = 0x14FEDCu;
    {
        const bool branch_taken_0x14fedc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fedc) {
            ctx->pc = 0x150028u;
            goto label_150028;
        }
    }
    ctx->pc = 0x14FEE4u;
    // 0x14fee4: 0x8fa70130  lw          $a3, 0x130($sp)
    ctx->pc = 0x14fee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14fee8: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x14fee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14feec: 0x94e90000  lhu         $t1, 0x0($a3)
    ctx->pc = 0x14feecu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14fef0: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x14fef0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x14fef4: 0x7ba700c0  lq          $a3, 0xC0($sp)
    ctx->pc = 0x14fef4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14fef8: 0x1274818  mult        $t1, $t1, $a3
    ctx->pc = 0x14fef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x14fefc: 0x8fa70130  lw          $a3, 0x130($sp)
    ctx->pc = 0x14fefcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14ff00: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x14ff00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x14ff04: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x14ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
    // 0x14ff08: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x14ff08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x14ff0c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x14ff0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x14ff10: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x14ff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ff14: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x14ff14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14ff18: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14ff18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ff1c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14FF1Cu;
    {
        const bool branch_taken_0x14ff1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ff1c) {
            ctx->pc = 0x14FF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF1Cu;
            // 0x14ff20: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14FF34u;
            goto label_14ff34;
        }
    }
    ctx->pc = 0x14FF24u;
    // 0x14ff24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ff24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ff28: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x14ff28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x14ff2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14FF2Cu;
    {
        const bool branch_taken_0x14ff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF2Cu;
            // 0x14ff30: 0xc5200004  lwc1        $f0, 0x4($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff2c) {
            ctx->pc = 0x14FF48u;
            goto label_14ff48;
        }
    }
    ctx->pc = 0x14FF34u;
label_14ff34:
    // 0x14ff34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ff34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ff38: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x14ff38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x14ff3c: 0x0  nop
    ctx->pc = 0x14ff3cu;
    // NOP
    // 0x14ff40: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x14ff40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x14ff44: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x14ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ff48:
    // 0x14ff48: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x14ff48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14ff4c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14ff4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ff50: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14FF50u;
    {
        const bool branch_taken_0x14ff50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ff50) {
            ctx->pc = 0x14FF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF50u;
            // 0x14ff54: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14FF68u;
            goto label_14ff68;
        }
    }
    ctx->pc = 0x14FF58u;
    // 0x14ff58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ff58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ff5c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14ff5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14ff60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14FF60u;
    {
        const bool branch_taken_0x14ff60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF60u;
            // 0x14ff64: 0xc5200008  lwc1        $f0, 0x8($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff60) {
            ctx->pc = 0x14FF7Cu;
            goto label_14ff7c;
        }
    }
    ctx->pc = 0x14FF68u;
label_14ff68:
    // 0x14ff68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ff68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ff6c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14ff6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14ff70: 0x0  nop
    ctx->pc = 0x14ff70u;
    // NOP
    // 0x14ff74: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x14ff74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x14ff78: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x14ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ff7c:
    // 0x14ff7c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x14ff7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14ff80: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14ff80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ff84: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14FF84u;
    {
        const bool branch_taken_0x14ff84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ff84) {
            ctx->pc = 0x14FF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF84u;
            // 0x14ff88: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14FF9Cu;
            goto label_14ff9c;
        }
    }
    ctx->pc = 0x14FF8Cu;
    // 0x14ff8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ff8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ff90: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x14ff90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x14ff94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14FF94u;
    {
        const bool branch_taken_0x14ff94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF94u;
            // 0x14ff98: 0xc520000c  lwc1        $f0, 0xC($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff94) {
            ctx->pc = 0x14FFB0u;
            goto label_14ffb0;
        }
    }
    ctx->pc = 0x14FF9Cu;
label_14ff9c:
    // 0x14ff9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ff9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ffa0: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x14ffa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x14ffa4: 0x0  nop
    ctx->pc = 0x14ffa4u;
    // NOP
    // 0x14ffa8: 0x1645825  or          $t3, $t3, $a0
    ctx->pc = 0x14ffa8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x14ffac: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x14ffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14ffb0:
    // 0x14ffb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14ffb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14ffb4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14ffb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ffb8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14FFB8u;
    {
        const bool branch_taken_0x14ffb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ffb8) {
            ctx->pc = 0x14FFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14FFB8u;
            // 0x14ffbc: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14FFD0u;
            goto label_14ffd0;
        }
    }
    ctx->pc = 0x14FFC0u;
    // 0x14ffc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ffc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ffc4: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x14ffc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x14ffc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14FFC8u;
    {
        const bool branch_taken_0x14ffc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ffc8) {
            ctx->pc = 0x14FFE0u;
            goto label_14ffe0;
        }
    }
    ctx->pc = 0x14FFD0u;
label_14ffd0:
    // 0x14ffd0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ffd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ffd4: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x14ffd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x14ffd8: 0x0  nop
    ctx->pc = 0x14ffd8u;
    // NOP
    // 0x14ffdc: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x14ffdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
label_14ffe0:
    // 0x14ffe0: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x14FFE0u;
    {
        const bool branch_taken_0x14ffe0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ffe0) {
            ctx->pc = 0x150018u;
            goto label_150018;
        }
    }
    ctx->pc = 0x14FFE8u;
    // 0x14ffe8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x14ffe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14ffec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14ffecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14fff0: 0x84842  srl         $t1, $t0, 1
    ctx->pc = 0x14fff0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x14fff4: 0x74042  srl         $t0, $a3, 1
    ctx->pc = 0x14fff4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x14fff8: 0xac490010  sw          $t1, 0x10($v0)
    ctx->pc = 0x14fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
    // 0x14fffc: 0x25670001  addiu       $a3, $t3, 0x1
    ctx->pc = 0x14fffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x150000: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x150000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x150004: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x150004u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x150008: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x150008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x15000c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15000Cu;
    {
        const bool branch_taken_0x15000c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15000Cu;
            // 0x150010: 0xac4a001c  sw          $t2, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15000c) {
            ctx->pc = 0x150028u;
            goto label_150028;
        }
    }
    ctx->pc = 0x150014u;
    // 0x150014: 0x0  nop
    ctx->pc = 0x150014u;
    // NOP
label_150018:
    // 0x150018: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x150018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
    // 0x15001c: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x15001cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x150020: 0xac4b0018  sw          $t3, 0x18($v0)
    ctx->pc = 0x150020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 11));
    // 0x150024: 0xac4a001c  sw          $t2, 0x1C($v0)
    ctx->pc = 0x150024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 10));
label_150028:
    // 0x150028: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x150028u;
    {
        const bool branch_taken_0x150028 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x150028) {
            ctx->pc = 0x150060u;
            goto label_150060;
        }
    }
    ctx->pc = 0x150030u;
    // 0x150030: 0x96e90000  lhu         $t1, 0x0($s7)
    ctx->pc = 0x150030u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x150034: 0x7ba700b0  lq          $a3, 0xB0($sp)
    ctx->pc = 0x150034u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x150038: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x150038u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x15003c: 0x1274818  mult        $t1, $t1, $a3
    ctx->pc = 0x15003cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x150040: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x150040u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x150044: 0x2e7b821  addu        $s7, $s7, $a3
    ctx->pc = 0x150044u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x150048: 0x2c93821  addu        $a3, $s6, $t1
    ctx->pc = 0x150048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    // 0x15004c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x15004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150050: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x150050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x150054: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x150054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150058: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x150058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x15005c: 0x0  nop
    ctx->pc = 0x15005cu;
    // NOP
label_150060:
    // 0x150060: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x150060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x150064: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x150064u;
    {
        const bool branch_taken_0x150064 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x150064) {
            ctx->pc = 0x1500D0u;
            goto label_1500d0;
        }
    }
    ctx->pc = 0x15006Cu;
    // 0x15006c: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x15006cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x150070: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x150070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x150074: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x150074u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150078: 0xac470028  sw          $a3, 0x28($v0)
    ctx->pc = 0x150078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 7));
    // 0x15007c: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x15007cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x150080: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x150080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x150084: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x150084u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150088: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x150088u;
    {
        const bool branch_taken_0x150088 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x15008Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150088u;
            // 0x15008c: 0xac47002c  sw          $a3, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150088) {
            ctx->pc = 0x1500C8u;
            goto label_1500c8;
        }
    }
    ctx->pc = 0x150090u;
    // 0x150090: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x150090u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150094: 0x7ba700a0  lq          $a3, 0xA0($sp)
    ctx->pc = 0x150094u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x150098: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x150098u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x15009c: 0x1274818  mult        $t1, $t1, $a3
    ctx->pc = 0x15009cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1500a0: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x1500a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1500a4: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x1500a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1500a8: 0x2893821  addu        $a3, $s4, $t1
    ctx->pc = 0x1500a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x1500ac: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1500acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1500b0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1500b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1500b4: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1500b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1500b8: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1500b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1500bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1500BCu;
    {
        const bool branch_taken_0x1500bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1500BCu;
            // 0x1500c0: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500bc) {
            ctx->pc = 0x150150u;
            goto label_150150;
        }
    }
    ctx->pc = 0x1500C4u;
    // 0x1500c4: 0x0  nop
    ctx->pc = 0x1500c4u;
    // NOP
label_1500c8:
    // 0x1500c8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1500C8u;
    {
        const bool branch_taken_0x1500c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1500C8u;
            // 0x1500cc: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500c8) {
            ctx->pc = 0x150150u;
            goto label_150150;
        }
    }
    ctx->pc = 0x1500D0u;
label_1500d0:
    // 0x1500d0: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1500d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1500d4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1500d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1500d8: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x1500d8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1500dc: 0xac470028  sw          $a3, 0x28($v0)
    ctx->pc = 0x1500dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 7));
    // 0x1500e0: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x1500e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1500e4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1500e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1500e8: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x1500e8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1500ec: 0xac47002c  sw          $a3, 0x2C($v0)
    ctx->pc = 0x1500ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 7));
    // 0x1500f0: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x1500f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1500f4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1500f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1500f8: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x1500f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1500fc: 0xac470038  sw          $a3, 0x38($v0)
    ctx->pc = 0x1500fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 7));
    // 0x150100: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x150100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x150104: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x150104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x150108: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x150108u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15010c: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x15010Cu;
    {
        const bool branch_taken_0x15010c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x150110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15010Cu;
            // 0x150110: 0xac47003c  sw          $a3, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15010c) {
            ctx->pc = 0x150148u;
            goto label_150148;
        }
    }
    ctx->pc = 0x150114u;
    // 0x150114: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x150114u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150118: 0x7ba700a0  lq          $a3, 0xA0($sp)
    ctx->pc = 0x150118u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15011c: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x15011cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x150120: 0x1274818  mult        $t1, $t1, $a3
    ctx->pc = 0x150120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x150124: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x150124u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x150128: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x150128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x15012c: 0x2893821  addu        $a3, $s4, $t1
    ctx->pc = 0x15012cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x150130: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x150130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150134: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x150134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x150138: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x150138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15013c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x15013cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x150140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150140u;
    {
        const bool branch_taken_0x150140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150140u;
            // 0x150144: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150140) {
            ctx->pc = 0x150150u;
            goto label_150150;
        }
    }
    ctx->pc = 0x150148u;
label_150148:
    // 0x150148: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x150148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x15014c: 0x0  nop
    ctx->pc = 0x15014cu;
    // NOP
label_150150:
    // 0x150150: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x150150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x150154: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x150154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x150158: 0xc7382a  slt         $a3, $a2, $a3
    ctx->pc = 0x150158u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x15015c: 0x14e0ff2a  bnez        $a3, . + 4 + (-0xD6 << 2)
    ctx->pc = 0x15015Cu;
    {
        const bool branch_taken_0x15015c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x15015c) {
            ctx->pc = 0x14FE08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14fe08;
        }
    }
    ctx->pc = 0x150164u;
    // 0x150164: 0x0  nop
    ctx->pc = 0x150164u;
    // NOP
label_150168:
    // 0x150168: 0xc056b28  jal         func_15ACA0
    ctx->pc = 0x150168u;
    SET_GPR_U32(ctx, 31, 0x150170u);
    ctx->pc = 0x15016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150168u;
            // 0x15016c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ACA0u;
    if (runtime->hasFunction(0x15ACA0u)) {
        auto targetFn = runtime->lookupFunction(0x15ACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150170u; }
        if (ctx->pc != 0x150170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ACA0_0x15aca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150170u; }
        if (ctx->pc != 0x150170u) { return; }
    }
    ctx->pc = 0x150170u;
label_150170:
    // 0x150170: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x150170u;
    SET_GPR_U32(ctx, 31, 0x150178u);
    ctx->pc = 0x150174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150170u;
            // 0x150174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150178u; }
        if (ctx->pc != 0x150178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150178u; }
        if (ctx->pc != 0x150178u) { return; }
    }
    ctx->pc = 0x150178u;
label_150178:
    // 0x150178: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x150178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15017c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15017Cu;
    {
        const bool branch_taken_0x15017c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x15017c) {
            ctx->pc = 0x1501A8u;
            goto label_1501a8;
        }
    }
    ctx->pc = 0x150184u;
    // 0x150184: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x150184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x150188: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x150188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15018c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x15018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x150190: 0x2248823  subu        $s1, $s1, $a0
    ctx->pc = 0x150190u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x150194: 0x3c4f023  subu        $fp, $fp, $a0
    ctx->pc = 0x150194u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x150198: 0x2e4b823  subu        $s7, $s7, $a0
    ctx->pc = 0x150198u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x15019c: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x15019cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1501a0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1501a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1501a4: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x1501a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
label_1501a8:
    // 0x1501a8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1501a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1501ac: 0x1c60fef4  bgtz        $v1, . + 4 + (-0x10C << 2)
    ctx->pc = 0x1501ACu;
    {
        const bool branch_taken_0x1501ac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1501ac) {
            ctx->pc = 0x14FD80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14fd80;
        }
    }
    ctx->pc = 0x1501B4u;
    // 0x1501b4: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1501b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1501b8: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x1501b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1501bc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1501bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1501c0: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x1501c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
    // 0x1501c4: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1501c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1501c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1501c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1501cc: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x1501ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x1501d0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1501d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1501d4: 0x5460fee1  bnel        $v1, $zero, . + 4 + (-0x11F << 2)
    ctx->pc = 0x1501D4u;
    {
        const bool branch_taken_0x1501d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1501d4) {
            ctx->pc = 0x1501D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1501D4u;
            // 0x1501d8: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14FD5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14fd5c;
        }
    }
    ctx->pc = 0x1501DCu;
    // 0x1501dc: 0x0  nop
    ctx->pc = 0x1501dcu;
    // NOP
label_1501e0:
    // 0x1501e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1501e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1501e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1501e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1501e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1501e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1501ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1501ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1501f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1501f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1501f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1501f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1501f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1501f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1501fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1501fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x150200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150208: 0x3e00008  jr          $ra
    ctx->pc = 0x150208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15020Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150208u;
            // 0x15020c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150210u;
}
