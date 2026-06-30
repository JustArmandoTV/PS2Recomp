#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A5000
// Address: 0x3a5000 - 0x3a5940
void sub_003A5000_0x3a5000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5000_0x3a5000");
#endif

    switch (ctx->pc) {
        case 0x3a502cu: goto label_3a502c;
        case 0x3a5040u: goto label_3a5040;
        case 0x3a50d4u: goto label_3a50d4;
        case 0x3a5138u: goto label_3a5138;
        case 0x3a5214u: goto label_3a5214;
        case 0x3a5330u: goto label_3a5330;
        case 0x3a5398u: goto label_3a5398;
        case 0x3a53acu: goto label_3a53ac;
        case 0x3a53b8u: goto label_3a53b8;
        case 0x3a53ccu: goto label_3a53cc;
        case 0x3a53d8u: goto label_3a53d8;
        case 0x3a53ecu: goto label_3a53ec;
        case 0x3a5404u: goto label_3a5404;
        case 0x3a5418u: goto label_3a5418;
        case 0x3a5430u: goto label_3a5430;
        case 0x3a5444u: goto label_3a5444;
        case 0x3a5450u: goto label_3a5450;
        case 0x3a5464u: goto label_3a5464;
        case 0x3a5470u: goto label_3a5470;
        case 0x3a5484u: goto label_3a5484;
        case 0x3a5490u: goto label_3a5490;
        case 0x3a54a4u: goto label_3a54a4;
        case 0x3a54b8u: goto label_3a54b8;
        case 0x3a54ccu: goto label_3a54cc;
        case 0x3a54d8u: goto label_3a54d8;
        case 0x3a54ecu: goto label_3a54ec;
        case 0x3a54f8u: goto label_3a54f8;
        case 0x3a550cu: goto label_3a550c;
        case 0x3a5524u: goto label_3a5524;
        case 0x3a5538u: goto label_3a5538;
        case 0x3a5544u: goto label_3a5544;
        case 0x3a5558u: goto label_3a5558;
        case 0x3a5564u: goto label_3a5564;
        case 0x3a5578u: goto label_3a5578;
        case 0x3a5584u: goto label_3a5584;
        case 0x3a5598u: goto label_3a5598;
        case 0x3a55a4u: goto label_3a55a4;
        case 0x3a55b8u: goto label_3a55b8;
        case 0x3a55ccu: goto label_3a55cc;
        case 0x3a55e0u: goto label_3a55e0;
        case 0x3a55ecu: goto label_3a55ec;
        case 0x3a5600u: goto label_3a5600;
        case 0x3a560cu: goto label_3a560c;
        case 0x3a5620u: goto label_3a5620;
        case 0x3a562cu: goto label_3a562c;
        case 0x3a5640u: goto label_3a5640;
        case 0x3a564cu: goto label_3a564c;
        case 0x3a5660u: goto label_3a5660;
        case 0x3a566cu: goto label_3a566c;
        case 0x3a5680u: goto label_3a5680;
        case 0x3a568cu: goto label_3a568c;
        case 0x3a56a0u: goto label_3a56a0;
        case 0x3a56acu: goto label_3a56ac;
        case 0x3a56c0u: goto label_3a56c0;
        case 0x3a56d4u: goto label_3a56d4;
        case 0x3a56e8u: goto label_3a56e8;
        case 0x3a56f4u: goto label_3a56f4;
        case 0x3a5708u: goto label_3a5708;
        case 0x3a5714u: goto label_3a5714;
        case 0x3a5728u: goto label_3a5728;
        case 0x3a5740u: goto label_3a5740;
        case 0x3a5754u: goto label_3a5754;
        case 0x3a576cu: goto label_3a576c;
        case 0x3a5780u: goto label_3a5780;
        case 0x3a578cu: goto label_3a578c;
        case 0x3a57a0u: goto label_3a57a0;
        case 0x3a57acu: goto label_3a57ac;
        case 0x3a57c0u: goto label_3a57c0;
        case 0x3a57ccu: goto label_3a57cc;
        case 0x3a57e0u: goto label_3a57e0;
        case 0x3a57ecu: goto label_3a57ec;
        case 0x3a5800u: goto label_3a5800;
        case 0x3a581cu: goto label_3a581c;
        case 0x3a5830u: goto label_3a5830;
        case 0x3a583cu: goto label_3a583c;
        case 0x3a5850u: goto label_3a5850;
        case 0x3a585cu: goto label_3a585c;
        case 0x3a5870u: goto label_3a5870;
        case 0x3a587cu: goto label_3a587c;
        case 0x3a5890u: goto label_3a5890;
        case 0x3a589cu: goto label_3a589c;
        case 0x3a58b0u: goto label_3a58b0;
        case 0x3a58bcu: goto label_3a58bc;
        case 0x3a58d0u: goto label_3a58d0;
        case 0x3a58dcu: goto label_3a58dc;
        case 0x3a58f0u: goto label_3a58f0;
        case 0x3a58fcu: goto label_3a58fc;
        case 0x3a5910u: goto label_3a5910;
        default: break;
    }

    ctx->pc = 0x3a5000u;

    // 0x3a5000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a5004: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3a5004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x3a5008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a5008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a500c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3a500cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3a5010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a5010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a5014: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3a5014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a5018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a5018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a501c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a501cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a5020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5024: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x3A5024u;
    SET_GPR_U32(ctx, 31, 0x3A502Cu);
    ctx->pc = 0x3A5028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5024u;
            // 0x3a5028: 0x3445aec4  ori         $a1, $v0, 0xAEC4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44740);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A502Cu; }
        if (ctx->pc != 0x3A502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A502Cu; }
        if (ctx->pc != 0x3A502Cu) { return; }
    }
    ctx->pc = 0x3A502Cu;
label_3a502c:
    // 0x3a502c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a502cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3a5030: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x3a5030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x3a5034: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3a5034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x3a5038: 0xc148880  jal         func_522200
    ctx->pc = 0x3A5038u;
    SET_GPR_U32(ctx, 31, 0x3A5040u);
    ctx->pc = 0x3A503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5038u;
            // 0x3a503c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5040u; }
        if (ctx->pc != 0x3A5040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5040u; }
        if (ctx->pc != 0x3A5040u) { return; }
    }
    ctx->pc = 0x3A5040u;
label_3a5040:
    // 0x3a5040: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3a5040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3a5044: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a5044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3a5048: 0x24638870  addiu       $v1, $v1, -0x7790
    ctx->pc = 0x3a5048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936688));
    // 0x3a504c: 0x244288a0  addiu       $v0, $v0, -0x7760
    ctx->pc = 0x3a504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936736));
    // 0x3a5050: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3a5050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3a5054: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3a5054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x3a5058: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3a5058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3a505c: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x3a505cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x3a5060: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a5060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a5064: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x3a5064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x3a5068: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x3a5068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x3a506c: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x3a506cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x3a5070: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x3a5070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x3a5074: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x3a5074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x3a5078: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x3a5078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x3a507c: 0xae110110  sw          $s1, 0x110($s0)
    ctx->pc = 0x3a507cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 17));
    // 0x3a5080: 0xa2030116  sb          $v1, 0x116($s0)
    ctx->pc = 0x3a5080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 278), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a5084: 0xa2000117  sb          $zero, 0x117($s0)
    ctx->pc = 0x3a5084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 279), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5088: 0xa2000118  sb          $zero, 0x118($s0)
    ctx->pc = 0x3a5088u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a508c: 0xa200011b  sb          $zero, 0x11B($s0)
    ctx->pc = 0x3a508cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5090: 0x12220057  beq         $s1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3A5090u;
    {
        const bool branch_taken_0x3a5090 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A5094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5090u;
            // 0x3a5094: 0xa6000114  sh          $zero, 0x114($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5090) {
            ctx->pc = 0x3A51F0u;
            goto label_3a51f0;
        }
    }
    ctx->pc = 0x3A5098u;
    // 0x3a5098: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a5098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a509c: 0x52220055  beql        $s1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3A509Cu;
    {
        const bool branch_taken_0x3a509c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a509c) {
            ctx->pc = 0x3A50A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A509Cu;
            // 0x3a50a0: 0x92020090  lbu         $v0, 0x90($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A51F4u;
            goto label_3a51f4;
        }
    }
    ctx->pc = 0x3A50A4u;
    // 0x3a50a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a50a8: 0x5222001d  beql        $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A50A8u;
    {
        const bool branch_taken_0x3a50a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a50a8) {
            ctx->pc = 0x3A50ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A50A8u;
            // 0x3a50ac: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5120u;
            goto label_3a5120;
        }
    }
    ctx->pc = 0x3A50B0u;
    // 0x3a50b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a50b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a50b4: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A50B4u;
    {
        const bool branch_taken_0x3a50b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a50b4) {
            ctx->pc = 0x3A50B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A50B4u;
            // 0x3a50b8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A50C4u;
            goto label_3a50c4;
        }
    }
    ctx->pc = 0x3A50BCu;
    // 0x3a50bc: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x3A50BCu;
    {
        const bool branch_taken_0x3a50bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A50C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A50BCu;
            // 0x3a50c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50bc) {
            ctx->pc = 0x3A5330u;
            goto label_3a5330;
        }
    }
    ctx->pc = 0x3A50C4u;
label_3a50c4:
    // 0x3a50c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a50c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a50c8: 0xa2020119  sb          $v0, 0x119($s0)
    ctx->pc = 0x3a50c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a50cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a50ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a50d0: 0xa202011a  sb          $v0, 0x11A($s0)
    ctx->pc = 0x3a50d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 282), (uint8_t)GPR_U32(ctx, 2));
label_3a50d4:
    // 0x3a50d4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3a50d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3a50d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a50d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a50dc: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x3a50dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3a50e0: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x3a50e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
    // 0x3a50e4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3a50e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3a50e8: 0xac830098  sw          $v1, 0x98($a0)
    ctx->pc = 0x3a50e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 3));
    // 0x3a50ec: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x3a50ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3a50f0: 0xac83009c  sw          $v1, 0x9C($a0)
    ctx->pc = 0x3a50f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
    // 0x3a50f4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x3a50f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3a50f8: 0xac8300a0  sw          $v1, 0xA0($a0)
    ctx->pc = 0x3a50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
    // 0x3a50fc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3A50FCu;
    {
        const bool branch_taken_0x3a50fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A50FCu;
            // 0x3a5100: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50fc) {
            ctx->pc = 0x3A50D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a50d4;
        }
    }
    ctx->pc = 0x3A5104u;
    // 0x3a5104: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3a5104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3a5108: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3a5108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3a510c: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x3a510cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a5110: 0xa202011d  sb          $v0, 0x11D($s0)
    ctx->pc = 0x3a5110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 285), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5114: 0xa200011e  sb          $zero, 0x11E($s0)
    ctx->pc = 0x3a5114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 286), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5118: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x3A5118u;
    {
        const bool branch_taken_0x3a5118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A511Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5118u;
            // 0x3a511c: 0xa200011f  sb          $zero, 0x11F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 287), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5118) {
            ctx->pc = 0x3A532Cu;
            goto label_3a532c;
        }
    }
    ctx->pc = 0x3A5120u;
label_3a5120:
    // 0x3a5120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a5120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5124: 0xa2020119  sb          $v0, 0x119($s0)
    ctx->pc = 0x3a5124u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5128: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a5128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a512c: 0x92020090  lbu         $v0, 0x90($s0)
    ctx->pc = 0x3a512cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x3a5130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a5130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5134: 0xa202011a  sb          $v0, 0x11A($s0)
    ctx->pc = 0x3a5134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 282), (uint8_t)GPR_U32(ctx, 2));
label_3a5138:
    // 0x3a5138: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3A5138u;
    {
        const bool branch_taken_0x3a5138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a5138) {
            ctx->pc = 0x3A5178u;
            goto label_3a5178;
        }
    }
    ctx->pc = 0x3A5140u;
    // 0x3a5140: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5140u;
    {
        const bool branch_taken_0x3a5140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5140) {
            ctx->pc = 0x3A5150u;
            goto label_3a5150;
        }
    }
    ctx->pc = 0x3A5148u;
    // 0x3a5148: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3A5148u;
    {
        const bool branch_taken_0x3a5148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5148) {
            ctx->pc = 0x3A51A0u;
            goto label_3a51a0;
        }
    }
    ctx->pc = 0x3A5150u;
label_3a5150:
    // 0x3a5150: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x3a5150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3a5154: 0xaca20094  sw          $v0, 0x94($a1)
    ctx->pc = 0x3a5154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 2));
    // 0x3a5158: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3a5158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3a515c: 0xaca20098  sw          $v0, 0x98($a1)
    ctx->pc = 0x3a515cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 2));
    // 0x3a5160: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3a5160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3a5164: 0xaca2009c  sw          $v0, 0x9C($a1)
    ctx->pc = 0x3a5164u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 2));
    // 0x3a5168: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x3a5168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x3a516c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3A516Cu;
    {
        const bool branch_taken_0x3a516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A516Cu;
            // 0x3a5170: 0xaca200a0  sw          $v0, 0xA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a516c) {
            ctx->pc = 0x3A51C0u;
            goto label_3a51c0;
        }
    }
    ctx->pc = 0x3A5174u;
    // 0x3a5174: 0x0  nop
    ctx->pc = 0x3a5174u;
    // NOP
label_3a5178:
    // 0x3a5178: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x3a5178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3a517c: 0xaca20094  sw          $v0, 0x94($a1)
    ctx->pc = 0x3a517cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 2));
    // 0x3a5180: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x3a5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x3a5184: 0xaca20098  sw          $v0, 0x98($a1)
    ctx->pc = 0x3a5184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 2));
    // 0x3a5188: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3a5188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3a518c: 0xaca2009c  sw          $v0, 0x9C($a1)
    ctx->pc = 0x3a518cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 2));
    // 0x3a5190: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3a5190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3a5194: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A5194u;
    {
        const bool branch_taken_0x3a5194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5194u;
            // 0x3a5198: 0xaca200a0  sw          $v0, 0xA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5194) {
            ctx->pc = 0x3A51C0u;
            goto label_3a51c0;
        }
    }
    ctx->pc = 0x3A519Cu;
    // 0x3a519c: 0x0  nop
    ctx->pc = 0x3a519cu;
    // NOP
label_3a51a0:
    // 0x3a51a0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x3a51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3a51a4: 0xaca20094  sw          $v0, 0x94($a1)
    ctx->pc = 0x3a51a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 2));
    // 0x3a51a8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3a51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3a51ac: 0xaca20098  sw          $v0, 0x98($a1)
    ctx->pc = 0x3a51acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 2));
    // 0x3a51b0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3a51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3a51b4: 0xaca2009c  sw          $v0, 0x9C($a1)
    ctx->pc = 0x3a51b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 2));
    // 0x3a51b8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3a51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3a51bc: 0xaca200a0  sw          $v0, 0xA0($a1)
    ctx->pc = 0x3a51bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 2));
label_3a51c0:
    // 0x3a51c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a51c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a51c4: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x3a51c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3a51c8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3A51C8u;
    {
        const bool branch_taken_0x3a51c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A51CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A51C8u;
            // 0x3a51cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51c8) {
            ctx->pc = 0x3A5138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a5138;
        }
    }
    ctx->pc = 0x3A51D0u;
    // 0x3a51d0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3a51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3a51d4: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x3a51d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3a51d8: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x3a51d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a51dc: 0xa203011d  sb          $v1, 0x11D($s0)
    ctx->pc = 0x3a51dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a51e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3a51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3a51e4: 0xa200011e  sb          $zero, 0x11E($s0)
    ctx->pc = 0x3a51e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 286), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a51e8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x3A51E8u;
    {
        const bool branch_taken_0x3a51e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A51ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A51E8u;
            // 0x3a51ec: 0xa202011f  sb          $v0, 0x11F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 287), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51e8) {
            ctx->pc = 0x3A532Cu;
            goto label_3a532c;
        }
    }
    ctx->pc = 0x3A51F0u;
label_3a51f0:
    // 0x3a51f0: 0x92020090  lbu         $v0, 0x90($s0)
    ctx->pc = 0x3a51f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
label_3a51f4:
    // 0x3a51f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a51f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a51f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a51f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a51fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a5200: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a5200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a5204: 0xa2020119  sb          $v0, 0x119($s0)
    ctx->pc = 0x3a5204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5208: 0x92020090  lbu         $v0, 0x90($s0)
    ctx->pc = 0x3a5208u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x3a520c: 0xa202011a  sb          $v0, 0x11A($s0)
    ctx->pc = 0x3a520cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 282), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a5210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a5214:
    // 0x3a5214: 0x10a40028  beq         $a1, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A5214u;
    {
        const bool branch_taken_0x3a5214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3a5214) {
            ctx->pc = 0x3A52B8u;
            goto label_3a52b8;
        }
    }
    ctx->pc = 0x3A521Cu;
    // 0x3a521c: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A521Cu;
    {
        const bool branch_taken_0x3a521c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a521c) {
            ctx->pc = 0x3A5290u;
            goto label_3a5290;
        }
    }
    ctx->pc = 0x3A5224u;
    // 0x3a5224: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A5224u;
    {
        const bool branch_taken_0x3a5224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a5224) {
            ctx->pc = 0x3A5268u;
            goto label_3a5268;
        }
    }
    ctx->pc = 0x3A522Cu;
    // 0x3a522c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A522Cu;
    {
        const bool branch_taken_0x3a522c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a522c) {
            ctx->pc = 0x3A5240u;
            goto label_3a5240;
        }
    }
    ctx->pc = 0x3A5234u;
    // 0x3a5234: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3A5234u;
    {
        const bool branch_taken_0x3a5234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5234) {
            ctx->pc = 0x3A52E0u;
            goto label_3a52e0;
        }
    }
    ctx->pc = 0x3A523Cu;
    // 0x3a523c: 0x0  nop
    ctx->pc = 0x3a523cu;
    // NOP
label_3a5240:
    // 0x3a5240: 0x8e070058  lw          $a3, 0x58($s0)
    ctx->pc = 0x3a5240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3a5244: 0xacc70094  sw          $a3, 0x94($a2)
    ctx->pc = 0x3a5244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 7));
    // 0x3a5248: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x3a5248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3a524c: 0xacc70098  sw          $a3, 0x98($a2)
    ctx->pc = 0x3a524cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 7));
    // 0x3a5250: 0x8e070088  lw          $a3, 0x88($s0)
    ctx->pc = 0x3a5250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x3a5254: 0xacc7009c  sw          $a3, 0x9C($a2)
    ctx->pc = 0x3a5254u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 7));
    // 0x3a5258: 0x8e07008c  lw          $a3, 0x8C($s0)
    ctx->pc = 0x3a5258u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x3a525c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3A525Cu;
    {
        const bool branch_taken_0x3a525c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A525Cu;
            // 0x3a5260: 0xacc700a0  sw          $a3, 0xA0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a525c) {
            ctx->pc = 0x3A5300u;
            goto label_3a5300;
        }
    }
    ctx->pc = 0x3A5264u;
    // 0x3a5264: 0x0  nop
    ctx->pc = 0x3a5264u;
    // NOP
label_3a5268:
    // 0x3a5268: 0x8e070088  lw          $a3, 0x88($s0)
    ctx->pc = 0x3a5268u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x3a526c: 0xacc70094  sw          $a3, 0x94($a2)
    ctx->pc = 0x3a526cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 7));
    // 0x3a5270: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x3a5270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3a5274: 0xacc70098  sw          $a3, 0x98($a2)
    ctx->pc = 0x3a5274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 7));
    // 0x3a5278: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x3a5278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3a527c: 0xacc7009c  sw          $a3, 0x9C($a2)
    ctx->pc = 0x3a527cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 7));
    // 0x3a5280: 0x8e07008c  lw          $a3, 0x8C($s0)
    ctx->pc = 0x3a5280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x3a5284: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3A5284u;
    {
        const bool branch_taken_0x3a5284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5284u;
            // 0x3a5288: 0xacc700a0  sw          $a3, 0xA0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5284) {
            ctx->pc = 0x3A5300u;
            goto label_3a5300;
        }
    }
    ctx->pc = 0x3A528Cu;
    // 0x3a528c: 0x0  nop
    ctx->pc = 0x3a528cu;
    // NOP
label_3a5290:
    // 0x3a5290: 0x8e070058  lw          $a3, 0x58($s0)
    ctx->pc = 0x3a5290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3a5294: 0xacc70094  sw          $a3, 0x94($a2)
    ctx->pc = 0x3a5294u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 7));
    // 0x3a5298: 0x8e07008c  lw          $a3, 0x8C($s0)
    ctx->pc = 0x3a5298u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x3a529c: 0xacc70098  sw          $a3, 0x98($a2)
    ctx->pc = 0x3a529cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 7));
    // 0x3a52a0: 0x8e070088  lw          $a3, 0x88($s0)
    ctx->pc = 0x3a52a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x3a52a4: 0xacc7009c  sw          $a3, 0x9C($a2)
    ctx->pc = 0x3a52a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 7));
    // 0x3a52a8: 0x8e070064  lw          $a3, 0x64($s0)
    ctx->pc = 0x3a52a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3a52ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3A52ACu;
    {
        const bool branch_taken_0x3a52ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A52B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A52ACu;
            // 0x3a52b0: 0xacc700a0  sw          $a3, 0xA0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52ac) {
            ctx->pc = 0x3A5300u;
            goto label_3a5300;
        }
    }
    ctx->pc = 0x3A52B4u;
    // 0x3a52b4: 0x0  nop
    ctx->pc = 0x3a52b4u;
    // NOP
label_3a52b8:
    // 0x3a52b8: 0x8e070088  lw          $a3, 0x88($s0)
    ctx->pc = 0x3a52b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x3a52bc: 0xacc70094  sw          $a3, 0x94($a2)
    ctx->pc = 0x3a52bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 7));
    // 0x3a52c0: 0x8e07008c  lw          $a3, 0x8C($s0)
    ctx->pc = 0x3a52c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x3a52c4: 0xacc70098  sw          $a3, 0x98($a2)
    ctx->pc = 0x3a52c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 7));
    // 0x3a52c8: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x3a52c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3a52cc: 0xacc7009c  sw          $a3, 0x9C($a2)
    ctx->pc = 0x3a52ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 7));
    // 0x3a52d0: 0x8e070064  lw          $a3, 0x64($s0)
    ctx->pc = 0x3a52d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3a52d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A52D4u;
    {
        const bool branch_taken_0x3a52d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A52D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A52D4u;
            // 0x3a52d8: 0xacc700a0  sw          $a3, 0xA0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52d4) {
            ctx->pc = 0x3A5300u;
            goto label_3a5300;
        }
    }
    ctx->pc = 0x3A52DCu;
    // 0x3a52dc: 0x0  nop
    ctx->pc = 0x3a52dcu;
    // NOP
label_3a52e0:
    // 0x3a52e0: 0x8e070058  lw          $a3, 0x58($s0)
    ctx->pc = 0x3a52e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3a52e4: 0xacc70094  sw          $a3, 0x94($a2)
    ctx->pc = 0x3a52e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 7));
    // 0x3a52e8: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x3a52e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3a52ec: 0xacc70098  sw          $a3, 0x98($a2)
    ctx->pc = 0x3a52ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 7));
    // 0x3a52f0: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x3a52f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3a52f4: 0xacc7009c  sw          $a3, 0x9C($a2)
    ctx->pc = 0x3a52f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 7));
    // 0x3a52f8: 0x8e070064  lw          $a3, 0x64($s0)
    ctx->pc = 0x3a52f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3a52fc: 0xacc700a0  sw          $a3, 0xA0($a2)
    ctx->pc = 0x3a52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 7));
label_3a5300:
    // 0x3a5300: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a5300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a5304: 0x28a70005  slti        $a3, $a1, 0x5
    ctx->pc = 0x3a5304u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3a5308: 0x14e0ffc2  bnez        $a3, . + 4 + (-0x3E << 2)
    ctx->pc = 0x3A5308u;
    {
        const bool branch_taken_0x3a5308 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A530Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5308u;
            // 0x3a530c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5308) {
            ctx->pc = 0x3A5214u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a5214;
        }
    }
    ctx->pc = 0x3A5310u;
    // 0x3a5310: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3a5310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a5314: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3a5314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a5318: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x3a5318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a531c: 0xa203011d  sb          $v1, 0x11D($s0)
    ctx->pc = 0x3a531cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a5320: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3a5320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3a5324: 0xa200011e  sb          $zero, 0x11E($s0)
    ctx->pc = 0x3a5324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 286), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5328: 0xa202011f  sb          $v0, 0x11F($s0)
    ctx->pc = 0x3a5328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 287), (uint8_t)GPR_U32(ctx, 2));
label_3a532c:
    // 0x3a532c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3a532cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a5330:
    // 0x3a5330: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x3a5330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3a5334: 0xa04000e4  sb          $zero, 0xE4($v0)
    ctx->pc = 0x3a5334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 228), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5338: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a5338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a533c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x3a533cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3a5340: 0x0  nop
    ctx->pc = 0x3a5340u;
    // NOP
    // 0x3a5344: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A5344u;
    {
        const bool branch_taken_0x3a5344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5344) {
            ctx->pc = 0x3A5330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a5330;
        }
    }
    ctx->pc = 0x3A534Cu;
    // 0x3a534c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a534cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a5350: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3a5350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3a5354: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3a5354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x3a5358: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x3a5358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x3a535c: 0x508300db  beql        $a0, $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x3A535Cu;
    {
        const bool branch_taken_0x3a535c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a535c) {
            ctx->pc = 0x3A5360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A535Cu;
            // 0x3a5360: 0x2404012c  addiu       $a0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A56CCu;
            goto label_3a56cc;
        }
    }
    ctx->pc = 0x3A5364u;
    // 0x3a5364: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3a5364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a5368: 0x50820096  beql        $a0, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x3A5368u;
    {
        const bool branch_taken_0x3a5368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a5368) {
            ctx->pc = 0x3A536Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5368u;
            // 0x3a536c: 0x2404012c  addiu       $a0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A55C4u;
            goto label_3a55c4;
        }
    }
    ctx->pc = 0x3A5370u;
    // 0x3a5370: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3a5370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a5374: 0x5082004e  beql        $a0, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x3A5374u;
    {
        const bool branch_taken_0x3a5374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a5374) {
            ctx->pc = 0x3A5378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5374u;
            // 0x3a5378: 0x2404012c  addiu       $a0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A54B0u;
            goto label_3a54b0;
        }
    }
    ctx->pc = 0x3A537Cu;
    // 0x3a537c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3a537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3a5380: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5380u;
    {
        const bool branch_taken_0x3a5380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a5380) {
            ctx->pc = 0x3A5384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5380u;
            // 0x3a5384: 0x2404012c  addiu       $a0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5390u;
            goto label_3a5390;
        }
    }
    ctx->pc = 0x3A5388u;
    // 0x3a5388: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x3A5388u;
    {
        const bool branch_taken_0x3a5388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A538Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5388u;
            // 0x3a538c: 0x2404012c  addiu       $a0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5388) {
            ctx->pc = 0x3A5814u;
            goto label_3a5814;
        }
    }
    ctx->pc = 0x3A5390u;
label_3a5390:
    // 0x3a5390: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5390u;
    SET_GPR_U32(ctx, 31, 0x3A5398u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5398u; }
        if (ctx->pc != 0x3A5398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5398u; }
        if (ctx->pc != 0x3A5398u) { return; }
    }
    ctx->pc = 0x3A5398u;
label_3a5398:
    // 0x3a5398: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5398u;
    {
        const bool branch_taken_0x3a5398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5398) {
            ctx->pc = 0x3A539Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5398u;
            // 0x3a539c: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A53B0u;
            goto label_3a53b0;
        }
    }
    ctx->pc = 0x3A53A0u;
    // 0x3a53a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a53a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a53a4: 0xc0eb104  jal         func_3AC410
    ctx->pc = 0x3A53A4u;
    SET_GPR_U32(ctx, 31, 0x3A53ACu);
    ctx->pc = 0x3A53A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A53A4u;
            // 0x3a53a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AC410u;
    if (runtime->hasFunction(0x3AC410u)) {
        auto targetFn = runtime->lookupFunction(0x3AC410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A53ACu; }
        if (ctx->pc != 0x3A53ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AC410_0x3ac410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A53ACu; }
        if (ctx->pc != 0x3A53ACu) { return; }
    }
    ctx->pc = 0x3A53ACu;
label_3a53ac:
    // 0x3a53ac: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x3a53acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
label_3a53b0:
    // 0x3a53b0: 0xc040180  jal         func_100600
    ctx->pc = 0x3A53B0u;
    SET_GPR_U32(ctx, 31, 0x3A53B8u);
    ctx->pc = 0x3A53B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A53B0u;
            // 0x3a53b4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A53B8u; }
        if (ctx->pc != 0x3A53B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A53B8u; }
        if (ctx->pc != 0x3A53B8u) { return; }
    }
    ctx->pc = 0x3A53B8u;
label_3a53b8:
    // 0x3a53b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A53B8u;
    {
        const bool branch_taken_0x3a53b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a53b8) {
            ctx->pc = 0x3A53BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A53B8u;
            // 0x3a53bc: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A53D0u;
            goto label_3a53d0;
        }
    }
    ctx->pc = 0x3A53C0u;
    // 0x3a53c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a53c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a53c4: 0xc0e9be0  jal         func_3A6F80
    ctx->pc = 0x3A53C4u;
    SET_GPR_U32(ctx, 31, 0x3A53CCu);
    ctx->pc = 0x3A53C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A53C4u;
            // 0x3a53c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A6F80u;
    if (runtime->hasFunction(0x3A6F80u)) {
        auto targetFn = runtime->lookupFunction(0x3A6F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A53CCu; }
        if (ctx->pc != 0x3A53CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A6F80_0x3a6f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A53CCu; }
        if (ctx->pc != 0x3A53CCu) { return; }
    }
    ctx->pc = 0x3A53CCu;
label_3a53cc:
    // 0x3a53cc: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x3a53ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_3a53d0:
    // 0x3a53d0: 0xc040180  jal         func_100600
    ctx->pc = 0x3A53D0u;
    SET_GPR_U32(ctx, 31, 0x3A53D8u);
    ctx->pc = 0x3A53D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A53D0u;
            // 0x3a53d4: 0x24040380  addiu       $a0, $zero, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A53D8u; }
        if (ctx->pc != 0x3A53D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A53D8u; }
        if (ctx->pc != 0x3A53D8u) { return; }
    }
    ctx->pc = 0x3A53D8u;
label_3a53d8:
    // 0x3a53d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A53D8u;
    {
        const bool branch_taken_0x3a53d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A53DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A53D8u;
            // 0x3a53dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a53d8) {
            ctx->pc = 0x3A53F8u;
            goto label_3a53f8;
        }
    }
    ctx->pc = 0x3A53E0u;
    // 0x3a53e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a53e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a53e4: 0xc0ec518  jal         func_3B1460
    ctx->pc = 0x3A53E4u;
    SET_GPR_U32(ctx, 31, 0x3A53ECu);
    ctx->pc = 0x3A53E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A53E4u;
            // 0x3a53e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B1460u;
    if (runtime->hasFunction(0x3B1460u)) {
        auto targetFn = runtime->lookupFunction(0x3B1460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A53ECu; }
        if (ctx->pc != 0x3A53ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B1460_0x3b1460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A53ECu; }
        if (ctx->pc != 0x3A53ECu) { return; }
    }
    ctx->pc = 0x3A53ECu;
label_3a53ec:
    // 0x3a53ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3a53f0: 0x244205c0  addiu       $v0, $v0, 0x5C0
    ctx->pc = 0x3a53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
    // 0x3a53f4: 0xae220374  sw          $v0, 0x374($s1)
    ctx->pc = 0x3a53f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
label_3a53f8:
    // 0x3a53f8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3a53f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3a53fc: 0xc040180  jal         func_100600
    ctx->pc = 0x3A53FCu;
    SET_GPR_U32(ctx, 31, 0x3A5404u);
    ctx->pc = 0x3A5400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A53FCu;
            // 0x3a5400: 0xae1100f0  sw          $s1, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5404u; }
        if (ctx->pc != 0x3A5404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5404u; }
        if (ctx->pc != 0x3A5404u) { return; }
    }
    ctx->pc = 0x3A5404u;
label_3a5404:
    // 0x3a5404: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5404u;
    {
        const bool branch_taken_0x3a5404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5404u;
            // 0x3a5408: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5404) {
            ctx->pc = 0x3A5424u;
            goto label_3a5424;
        }
    }
    ctx->pc = 0x3A540Cu;
    // 0x3a540c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5410: 0xc0e9fdc  jal         func_3A7F70
    ctx->pc = 0x3A5410u;
    SET_GPR_U32(ctx, 31, 0x3A5418u);
    ctx->pc = 0x3A5414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5410u;
            // 0x3a5414: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F70u;
    if (runtime->hasFunction(0x3A7F70u)) {
        auto targetFn = runtime->lookupFunction(0x3A7F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5418u; }
        if (ctx->pc != 0x3A5418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7F70_0x3a7f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5418u; }
        if (ctx->pc != 0x3A5418u) { return; }
    }
    ctx->pc = 0x3A5418u;
label_3a5418:
    // 0x3a5418: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a5418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3a541c: 0x24420410  addiu       $v0, $v0, 0x410
    ctx->pc = 0x3a541cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
    // 0x3a5420: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a5420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a5424:
    // 0x3a5424: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x3a5424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3a5428: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5428u;
    SET_GPR_U32(ctx, 31, 0x3A5430u);
    ctx->pc = 0x3A542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5428u;
            // 0x3a542c: 0xae1100f8  sw          $s1, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5430u; }
        if (ctx->pc != 0x3A5430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5430u; }
        if (ctx->pc != 0x3A5430u) { return; }
    }
    ctx->pc = 0x3A5430u;
label_3a5430:
    // 0x3a5430: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5430u;
    {
        const bool branch_taken_0x3a5430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5430) {
            ctx->pc = 0x3A5434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5430u;
            // 0x3a5434: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5448u;
            goto label_3a5448;
        }
    }
    ctx->pc = 0x3A5438u;
    // 0x3a5438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a543c: 0xc0ecf78  jal         func_3B3DE0
    ctx->pc = 0x3A543Cu;
    SET_GPR_U32(ctx, 31, 0x3A5444u);
    ctx->pc = 0x3A5440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A543Cu;
            // 0x3a5440: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B3DE0u;
    if (runtime->hasFunction(0x3B3DE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B3DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5444u; }
        if (ctx->pc != 0x3A5444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B3DE0_0x3b3de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5444u; }
        if (ctx->pc != 0x3A5444u) { return; }
    }
    ctx->pc = 0x3A5444u;
label_3a5444:
    // 0x3a5444: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x3a5444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_3a5448:
    // 0x3a5448: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5448u;
    SET_GPR_U32(ctx, 31, 0x3A5450u);
    ctx->pc = 0x3A544Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5448u;
            // 0x3a544c: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5450u; }
        if (ctx->pc != 0x3A5450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5450u; }
        if (ctx->pc != 0x3A5450u) { return; }
    }
    ctx->pc = 0x3A5450u;
label_3a5450:
    // 0x3a5450: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5450u;
    {
        const bool branch_taken_0x3a5450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5450) {
            ctx->pc = 0x3A5454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5450u;
            // 0x3a5454: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5468u;
            goto label_3a5468;
        }
    }
    ctx->pc = 0x3A5458u;
    // 0x3a5458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a545c: 0xc0ecadc  jal         func_3B2B70
    ctx->pc = 0x3A545Cu;
    SET_GPR_U32(ctx, 31, 0x3A5464u);
    ctx->pc = 0x3A5460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A545Cu;
            // 0x3a5460: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B70u;
    if (runtime->hasFunction(0x3B2B70u)) {
        auto targetFn = runtime->lookupFunction(0x3B2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5464u; }
        if (ctx->pc != 0x3A5464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B2B70_0x3b2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5464u; }
        if (ctx->pc != 0x3A5464u) { return; }
    }
    ctx->pc = 0x3A5464u;
label_3a5464:
    // 0x3a5464: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x3a5464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_3a5468:
    // 0x3a5468: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5468u;
    SET_GPR_U32(ctx, 31, 0x3A5470u);
    ctx->pc = 0x3A546Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5468u;
            // 0x3a546c: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5470u; }
        if (ctx->pc != 0x3A5470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5470u; }
        if (ctx->pc != 0x3A5470u) { return; }
    }
    ctx->pc = 0x3A5470u;
label_3a5470:
    // 0x3a5470: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5470u;
    {
        const bool branch_taken_0x3a5470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5470) {
            ctx->pc = 0x3A5474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5470u;
            // 0x3a5474: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5488u;
            goto label_3a5488;
        }
    }
    ctx->pc = 0x3A5478u;
    // 0x3a5478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a547c: 0xc131a24  jal         func_4C6890
    ctx->pc = 0x3A547Cu;
    SET_GPR_U32(ctx, 31, 0x3A5484u);
    ctx->pc = 0x3A5480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A547Cu;
            // 0x3a5480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C6890u;
    if (runtime->hasFunction(0x4C6890u)) {
        auto targetFn = runtime->lookupFunction(0x4C6890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5484u; }
        if (ctx->pc != 0x3A5484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C6890_0x4c6890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5484u; }
        if (ctx->pc != 0x3A5484u) { return; }
    }
    ctx->pc = 0x3A5484u;
label_3a5484:
    // 0x3a5484: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x3a5484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
label_3a5488:
    // 0x3a5488: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5488u;
    SET_GPR_U32(ctx, 31, 0x3A5490u);
    ctx->pc = 0x3A548Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5488u;
            // 0x3a548c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5490u; }
        if (ctx->pc != 0x3A5490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5490u; }
        if (ctx->pc != 0x3A5490u) { return; }
    }
    ctx->pc = 0x3A5490u;
label_3a5490:
    // 0x3a5490: 0x50400120  beql        $v0, $zero, . + 4 + (0x120 << 2)
    ctx->pc = 0x3A5490u;
    {
        const bool branch_taken_0x3a5490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5490) {
            ctx->pc = 0x3A5494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5490u;
            // 0x3a5494: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5914u;
            goto label_3a5914;
        }
    }
    ctx->pc = 0x3A5498u;
    // 0x3a5498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a549c: 0xc13ac80  jal         func_4EB200
    ctx->pc = 0x3A549Cu;
    SET_GPR_U32(ctx, 31, 0x3A54A4u);
    ctx->pc = 0x3A54A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A549Cu;
            // 0x3a54a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EB200u;
    if (runtime->hasFunction(0x4EB200u)) {
        auto targetFn = runtime->lookupFunction(0x4EB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A54A4u; }
        if (ctx->pc != 0x3A54A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EB200_0x4eb200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A54A4u; }
        if (ctx->pc != 0x3A54A4u) { return; }
    }
    ctx->pc = 0x3A54A4u;
label_3a54a4:
    // 0x3a54a4: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x3a54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x3a54a8: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x3A54A8u;
    {
        const bool branch_taken_0x3a54a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a54a8) {
            ctx->pc = 0x3A5914u;
            goto label_3a5914;
        }
    }
    ctx->pc = 0x3A54B0u;
label_3a54b0:
    // 0x3a54b0: 0xc040180  jal         func_100600
    ctx->pc = 0x3A54B0u;
    SET_GPR_U32(ctx, 31, 0x3A54B8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A54B8u; }
        if (ctx->pc != 0x3A54B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A54B8u; }
        if (ctx->pc != 0x3A54B8u) { return; }
    }
    ctx->pc = 0x3A54B8u;
label_3a54b8:
    // 0x3a54b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A54B8u;
    {
        const bool branch_taken_0x3a54b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a54b8) {
            ctx->pc = 0x3A54BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A54B8u;
            // 0x3a54bc: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A54D0u;
            goto label_3a54d0;
        }
    }
    ctx->pc = 0x3A54C0u;
    // 0x3a54c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a54c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a54c4: 0xc0eb104  jal         func_3AC410
    ctx->pc = 0x3A54C4u;
    SET_GPR_U32(ctx, 31, 0x3A54CCu);
    ctx->pc = 0x3A54C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A54C4u;
            // 0x3a54c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AC410u;
    if (runtime->hasFunction(0x3AC410u)) {
        auto targetFn = runtime->lookupFunction(0x3AC410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A54CCu; }
        if (ctx->pc != 0x3A54CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AC410_0x3ac410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A54CCu; }
        if (ctx->pc != 0x3A54CCu) { return; }
    }
    ctx->pc = 0x3A54CCu;
label_3a54cc:
    // 0x3a54cc: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x3a54ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
label_3a54d0:
    // 0x3a54d0: 0xc040180  jal         func_100600
    ctx->pc = 0x3A54D0u;
    SET_GPR_U32(ctx, 31, 0x3A54D8u);
    ctx->pc = 0x3A54D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A54D0u;
            // 0x3a54d4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A54D8u; }
        if (ctx->pc != 0x3A54D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A54D8u; }
        if (ctx->pc != 0x3A54D8u) { return; }
    }
    ctx->pc = 0x3A54D8u;
label_3a54d8:
    // 0x3a54d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A54D8u;
    {
        const bool branch_taken_0x3a54d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a54d8) {
            ctx->pc = 0x3A54DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A54D8u;
            // 0x3a54dc: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A54F0u;
            goto label_3a54f0;
        }
    }
    ctx->pc = 0x3A54E0u;
    // 0x3a54e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a54e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a54e4: 0xc0e9be0  jal         func_3A6F80
    ctx->pc = 0x3A54E4u;
    SET_GPR_U32(ctx, 31, 0x3A54ECu);
    ctx->pc = 0x3A54E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A54E4u;
            // 0x3a54e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A6F80u;
    if (runtime->hasFunction(0x3A6F80u)) {
        auto targetFn = runtime->lookupFunction(0x3A6F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A54ECu; }
        if (ctx->pc != 0x3A54ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A6F80_0x3a6f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A54ECu; }
        if (ctx->pc != 0x3A54ECu) { return; }
    }
    ctx->pc = 0x3A54ECu;
label_3a54ec:
    // 0x3a54ec: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x3a54ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_3a54f0:
    // 0x3a54f0: 0xc040180  jal         func_100600
    ctx->pc = 0x3A54F0u;
    SET_GPR_U32(ctx, 31, 0x3A54F8u);
    ctx->pc = 0x3A54F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A54F0u;
            // 0x3a54f4: 0x24040380  addiu       $a0, $zero, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A54F8u; }
        if (ctx->pc != 0x3A54F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A54F8u; }
        if (ctx->pc != 0x3A54F8u) { return; }
    }
    ctx->pc = 0x3A54F8u;
label_3a54f8:
    // 0x3a54f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A54F8u;
    {
        const bool branch_taken_0x3a54f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A54FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A54F8u;
            // 0x3a54fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a54f8) {
            ctx->pc = 0x3A5518u;
            goto label_3a5518;
        }
    }
    ctx->pc = 0x3A5500u;
    // 0x3a5500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a5500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5504: 0xc0ec518  jal         func_3B1460
    ctx->pc = 0x3A5504u;
    SET_GPR_U32(ctx, 31, 0x3A550Cu);
    ctx->pc = 0x3A5508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5504u;
            // 0x3a5508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B1460u;
    if (runtime->hasFunction(0x3B1460u)) {
        auto targetFn = runtime->lookupFunction(0x3B1460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A550Cu; }
        if (ctx->pc != 0x3A550Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B1460_0x3b1460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A550Cu; }
        if (ctx->pc != 0x3A550Cu) { return; }
    }
    ctx->pc = 0x3A550Cu;
label_3a550c:
    // 0x3a550c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3a5510: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x3a5510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x3a5514: 0xae220374  sw          $v0, 0x374($s1)
    ctx->pc = 0x3a5514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
label_3a5518:
    // 0x3a5518: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3a5518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3a551c: 0xc040180  jal         func_100600
    ctx->pc = 0x3A551Cu;
    SET_GPR_U32(ctx, 31, 0x3A5524u);
    ctx->pc = 0x3A5520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A551Cu;
            // 0x3a5520: 0xae1100f0  sw          $s1, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5524u; }
        if (ctx->pc != 0x3A5524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5524u; }
        if (ctx->pc != 0x3A5524u) { return; }
    }
    ctx->pc = 0x3A5524u;
label_3a5524:
    // 0x3a5524: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5524u;
    {
        const bool branch_taken_0x3a5524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5524) {
            ctx->pc = 0x3A5528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5524u;
            // 0x3a5528: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A553Cu;
            goto label_3a553c;
        }
    }
    ctx->pc = 0x3A552Cu;
    // 0x3a552c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a552cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5530: 0xc12e914  jal         func_4BA450
    ctx->pc = 0x3A5530u;
    SET_GPR_U32(ctx, 31, 0x3A5538u);
    ctx->pc = 0x3A5534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5530u;
            // 0x3a5534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BA450u;
    if (runtime->hasFunction(0x4BA450u)) {
        auto targetFn = runtime->lookupFunction(0x4BA450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5538u; }
        if (ctx->pc != 0x3A5538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BA450_0x4ba450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5538u; }
        if (ctx->pc != 0x3A5538u) { return; }
    }
    ctx->pc = 0x3A5538u;
label_3a5538:
    // 0x3a5538: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x3a5538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_3a553c:
    // 0x3a553c: 0xc040180  jal         func_100600
    ctx->pc = 0x3A553Cu;
    SET_GPR_U32(ctx, 31, 0x3A5544u);
    ctx->pc = 0x3A5540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A553Cu;
            // 0x3a5540: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5544u; }
        if (ctx->pc != 0x3A5544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5544u; }
        if (ctx->pc != 0x3A5544u) { return; }
    }
    ctx->pc = 0x3A5544u;
label_3a5544:
    // 0x3a5544: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5544u;
    {
        const bool branch_taken_0x3a5544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5544) {
            ctx->pc = 0x3A5548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5544u;
            // 0x3a5548: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A555Cu;
            goto label_3a555c;
        }
    }
    ctx->pc = 0x3A554Cu;
    // 0x3a554c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a554cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5550: 0xc0ecf78  jal         func_3B3DE0
    ctx->pc = 0x3A5550u;
    SET_GPR_U32(ctx, 31, 0x3A5558u);
    ctx->pc = 0x3A5554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5550u;
            // 0x3a5554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B3DE0u;
    if (runtime->hasFunction(0x3B3DE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B3DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5558u; }
        if (ctx->pc != 0x3A5558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B3DE0_0x3b3de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5558u; }
        if (ctx->pc != 0x3A5558u) { return; }
    }
    ctx->pc = 0x3A5558u;
label_3a5558:
    // 0x3a5558: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x3a5558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_3a555c:
    // 0x3a555c: 0xc040180  jal         func_100600
    ctx->pc = 0x3A555Cu;
    SET_GPR_U32(ctx, 31, 0x3A5564u);
    ctx->pc = 0x3A5560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A555Cu;
            // 0x3a5560: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5564u; }
        if (ctx->pc != 0x3A5564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5564u; }
        if (ctx->pc != 0x3A5564u) { return; }
    }
    ctx->pc = 0x3A5564u;
label_3a5564:
    // 0x3a5564: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5564u;
    {
        const bool branch_taken_0x3a5564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5564) {
            ctx->pc = 0x3A5568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5564u;
            // 0x3a5568: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A557Cu;
            goto label_3a557c;
        }
    }
    ctx->pc = 0x3A556Cu;
    // 0x3a556c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5570: 0xc0ecadc  jal         func_3B2B70
    ctx->pc = 0x3A5570u;
    SET_GPR_U32(ctx, 31, 0x3A5578u);
    ctx->pc = 0x3A5574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5570u;
            // 0x3a5574: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B70u;
    if (runtime->hasFunction(0x3B2B70u)) {
        auto targetFn = runtime->lookupFunction(0x3B2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5578u; }
        if (ctx->pc != 0x3A5578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B2B70_0x3b2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5578u; }
        if (ctx->pc != 0x3A5578u) { return; }
    }
    ctx->pc = 0x3A5578u;
label_3a5578:
    // 0x3a5578: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x3a5578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_3a557c:
    // 0x3a557c: 0xc040180  jal         func_100600
    ctx->pc = 0x3A557Cu;
    SET_GPR_U32(ctx, 31, 0x3A5584u);
    ctx->pc = 0x3A5580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A557Cu;
            // 0x3a5580: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5584u; }
        if (ctx->pc != 0x3A5584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5584u; }
        if (ctx->pc != 0x3A5584u) { return; }
    }
    ctx->pc = 0x3A5584u;
label_3a5584:
    // 0x3a5584: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5584u;
    {
        const bool branch_taken_0x3a5584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5584) {
            ctx->pc = 0x3A5588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5584u;
            // 0x3a5588: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A559Cu;
            goto label_3a559c;
        }
    }
    ctx->pc = 0x3A558Cu;
    // 0x3a558c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a558cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5590: 0xc131a24  jal         func_4C6890
    ctx->pc = 0x3A5590u;
    SET_GPR_U32(ctx, 31, 0x3A5598u);
    ctx->pc = 0x3A5594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5590u;
            // 0x3a5594: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C6890u;
    if (runtime->hasFunction(0x4C6890u)) {
        auto targetFn = runtime->lookupFunction(0x4C6890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5598u; }
        if (ctx->pc != 0x3A5598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C6890_0x4c6890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5598u; }
        if (ctx->pc != 0x3A5598u) { return; }
    }
    ctx->pc = 0x3A5598u;
label_3a5598:
    // 0x3a5598: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x3a5598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
label_3a559c:
    // 0x3a559c: 0xc040180  jal         func_100600
    ctx->pc = 0x3A559Cu;
    SET_GPR_U32(ctx, 31, 0x3A55A4u);
    ctx->pc = 0x3A55A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A559Cu;
            // 0x3a55a0: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A55A4u; }
        if (ctx->pc != 0x3A55A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A55A4u; }
        if (ctx->pc != 0x3A55A4u) { return; }
    }
    ctx->pc = 0x3A55A4u;
label_3a55a4:
    // 0x3a55a4: 0x504000db  beql        $v0, $zero, . + 4 + (0xDB << 2)
    ctx->pc = 0x3A55A4u;
    {
        const bool branch_taken_0x3a55a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a55a4) {
            ctx->pc = 0x3A55A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A55A4u;
            // 0x3a55a8: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5914u;
            goto label_3a5914;
        }
    }
    ctx->pc = 0x3A55ACu;
    // 0x3a55ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a55acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a55b0: 0xc13ac80  jal         func_4EB200
    ctx->pc = 0x3A55B0u;
    SET_GPR_U32(ctx, 31, 0x3A55B8u);
    ctx->pc = 0x3A55B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A55B0u;
            // 0x3a55b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EB200u;
    if (runtime->hasFunction(0x4EB200u)) {
        auto targetFn = runtime->lookupFunction(0x4EB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A55B8u; }
        if (ctx->pc != 0x3A55B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EB200_0x4eb200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A55B8u; }
        if (ctx->pc != 0x3A55B8u) { return; }
    }
    ctx->pc = 0x3A55B8u;
label_3a55b8:
    // 0x3a55b8: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x3a55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x3a55bc: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x3A55BCu;
    {
        const bool branch_taken_0x3a55bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a55bc) {
            ctx->pc = 0x3A5914u;
            goto label_3a5914;
        }
    }
    ctx->pc = 0x3A55C4u;
label_3a55c4:
    // 0x3a55c4: 0xc040180  jal         func_100600
    ctx->pc = 0x3A55C4u;
    SET_GPR_U32(ctx, 31, 0x3A55CCu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A55CCu; }
        if (ctx->pc != 0x3A55CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A55CCu; }
        if (ctx->pc != 0x3A55CCu) { return; }
    }
    ctx->pc = 0x3A55CCu;
label_3a55cc:
    // 0x3a55cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A55CCu;
    {
        const bool branch_taken_0x3a55cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a55cc) {
            ctx->pc = 0x3A55D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A55CCu;
            // 0x3a55d0: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A55E4u;
            goto label_3a55e4;
        }
    }
    ctx->pc = 0x3A55D4u;
    // 0x3a55d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a55d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a55d8: 0xc149ccc  jal         func_527330
    ctx->pc = 0x3A55D8u;
    SET_GPR_U32(ctx, 31, 0x3A55E0u);
    ctx->pc = 0x3A55DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A55D8u;
            // 0x3a55dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x527330u;
    if (runtime->hasFunction(0x527330u)) {
        auto targetFn = runtime->lookupFunction(0x527330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A55E0u; }
        if (ctx->pc != 0x3A55E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00527330_0x527330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A55E0u; }
        if (ctx->pc != 0x3A55E0u) { return; }
    }
    ctx->pc = 0x3A55E0u;
label_3a55e0:
    // 0x3a55e0: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x3a55e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
label_3a55e4:
    // 0x3a55e4: 0xc040180  jal         func_100600
    ctx->pc = 0x3A55E4u;
    SET_GPR_U32(ctx, 31, 0x3A55ECu);
    ctx->pc = 0x3A55E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A55E4u;
            // 0x3a55e8: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A55ECu; }
        if (ctx->pc != 0x3A55ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A55ECu; }
        if (ctx->pc != 0x3A55ECu) { return; }
    }
    ctx->pc = 0x3A55ECu;
label_3a55ec:
    // 0x3a55ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A55ECu;
    {
        const bool branch_taken_0x3a55ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a55ec) {
            ctx->pc = 0x3A55F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A55ECu;
            // 0x3a55f0: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5604u;
            goto label_3a5604;
        }
    }
    ctx->pc = 0x3A55F4u;
    // 0x3a55f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a55f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a55f8: 0xc149ac0  jal         func_526B00
    ctx->pc = 0x3A55F8u;
    SET_GPR_U32(ctx, 31, 0x3A5600u);
    ctx->pc = 0x3A55FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A55F8u;
            // 0x3a55fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x526B00u;
    if (runtime->hasFunction(0x526B00u)) {
        auto targetFn = runtime->lookupFunction(0x526B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5600u; }
        if (ctx->pc != 0x3A5600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00526B00_0x526b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5600u; }
        if (ctx->pc != 0x3A5600u) { return; }
    }
    ctx->pc = 0x3A5600u;
label_3a5600:
    // 0x3a5600: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x3a5600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_3a5604:
    // 0x3a5604: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5604u;
    SET_GPR_U32(ctx, 31, 0x3A560Cu);
    ctx->pc = 0x3A5608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5604u;
            // 0x3a5608: 0x24040380  addiu       $a0, $zero, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A560Cu; }
        if (ctx->pc != 0x3A560Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A560Cu; }
        if (ctx->pc != 0x3A560Cu) { return; }
    }
    ctx->pc = 0x3A560Cu;
label_3a560c:
    // 0x3a560c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A560Cu;
    {
        const bool branch_taken_0x3a560c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a560c) {
            ctx->pc = 0x3A5610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A560Cu;
            // 0x3a5610: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5624u;
            goto label_3a5624;
        }
    }
    ctx->pc = 0x3A5614u;
    // 0x3a5614: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5618: 0xc149d20  jal         func_527480
    ctx->pc = 0x3A5618u;
    SET_GPR_U32(ctx, 31, 0x3A5620u);
    ctx->pc = 0x3A561Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5618u;
            // 0x3a561c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x527480u;
    if (runtime->hasFunction(0x527480u)) {
        auto targetFn = runtime->lookupFunction(0x527480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5620u; }
        if (ctx->pc != 0x3A5620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00527480_0x527480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5620u; }
        if (ctx->pc != 0x3A5620u) { return; }
    }
    ctx->pc = 0x3A5620u;
label_3a5620:
    // 0x3a5620: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x3a5620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_3a5624:
    // 0x3a5624: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5624u;
    SET_GPR_U32(ctx, 31, 0x3A562Cu);
    ctx->pc = 0x3A5628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5624u;
            // 0x3a5628: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A562Cu; }
        if (ctx->pc != 0x3A562Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A562Cu; }
        if (ctx->pc != 0x3A562Cu) { return; }
    }
    ctx->pc = 0x3A562Cu;
label_3a562c:
    // 0x3a562c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A562Cu;
    {
        const bool branch_taken_0x3a562c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a562c) {
            ctx->pc = 0x3A5630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A562Cu;
            // 0x3a5630: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5644u;
            goto label_3a5644;
        }
    }
    ctx->pc = 0x3A5634u;
    // 0x3a5634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5638: 0xc149c38  jal         func_5270E0
    ctx->pc = 0x3A5638u;
    SET_GPR_U32(ctx, 31, 0x3A5640u);
    ctx->pc = 0x3A563Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5638u;
            // 0x3a563c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5270E0u;
    if (runtime->hasFunction(0x5270E0u)) {
        auto targetFn = runtime->lookupFunction(0x5270E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5640u; }
        if (ctx->pc != 0x3A5640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005270E0_0x5270e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5640u; }
        if (ctx->pc != 0x3A5640u) { return; }
    }
    ctx->pc = 0x3A5640u;
label_3a5640:
    // 0x3a5640: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x3a5640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_3a5644:
    // 0x3a5644: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5644u;
    SET_GPR_U32(ctx, 31, 0x3A564Cu);
    ctx->pc = 0x3A5648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5644u;
            // 0x3a5648: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A564Cu; }
        if (ctx->pc != 0x3A564Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A564Cu; }
        if (ctx->pc != 0x3A564Cu) { return; }
    }
    ctx->pc = 0x3A564Cu;
label_3a564c:
    // 0x3a564c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A564Cu;
    {
        const bool branch_taken_0x3a564c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a564c) {
            ctx->pc = 0x3A5650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A564Cu;
            // 0x3a5650: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5664u;
            goto label_3a5664;
        }
    }
    ctx->pc = 0x3A5654u;
    // 0x3a5654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5658: 0xc0ecf78  jal         func_3B3DE0
    ctx->pc = 0x3A5658u;
    SET_GPR_U32(ctx, 31, 0x3A5660u);
    ctx->pc = 0x3A565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5658u;
            // 0x3a565c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B3DE0u;
    if (runtime->hasFunction(0x3B3DE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B3DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5660u; }
        if (ctx->pc != 0x3A5660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B3DE0_0x3b3de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5660u; }
        if (ctx->pc != 0x3A5660u) { return; }
    }
    ctx->pc = 0x3A5660u;
label_3a5660:
    // 0x3a5660: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x3a5660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_3a5664:
    // 0x3a5664: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5664u;
    SET_GPR_U32(ctx, 31, 0x3A566Cu);
    ctx->pc = 0x3A5668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5664u;
            // 0x3a5668: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A566Cu; }
        if (ctx->pc != 0x3A566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A566Cu; }
        if (ctx->pc != 0x3A566Cu) { return; }
    }
    ctx->pc = 0x3A566Cu;
label_3a566c:
    // 0x3a566c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A566Cu;
    {
        const bool branch_taken_0x3a566c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a566c) {
            ctx->pc = 0x3A5670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A566Cu;
            // 0x3a5670: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5684u;
            goto label_3a5684;
        }
    }
    ctx->pc = 0x3A5674u;
    // 0x3a5674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5678: 0xc149d68  jal         func_5275A0
    ctx->pc = 0x3A5678u;
    SET_GPR_U32(ctx, 31, 0x3A5680u);
    ctx->pc = 0x3A567Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5678u;
            // 0x3a567c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5275A0u;
    if (runtime->hasFunction(0x5275A0u)) {
        auto targetFn = runtime->lookupFunction(0x5275A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5680u; }
        if (ctx->pc != 0x3A5680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005275A0_0x5275a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5680u; }
        if (ctx->pc != 0x3A5680u) { return; }
    }
    ctx->pc = 0x3A5680u;
label_3a5680:
    // 0x3a5680: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x3a5680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_3a5684:
    // 0x3a5684: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5684u;
    SET_GPR_U32(ctx, 31, 0x3A568Cu);
    ctx->pc = 0x3A5688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5684u;
            // 0x3a5688: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A568Cu; }
        if (ctx->pc != 0x3A568Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A568Cu; }
        if (ctx->pc != 0x3A568Cu) { return; }
    }
    ctx->pc = 0x3A568Cu;
label_3a568c:
    // 0x3a568c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A568Cu;
    {
        const bool branch_taken_0x3a568c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a568c) {
            ctx->pc = 0x3A5690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A568Cu;
            // 0x3a5690: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A56A4u;
            goto label_3a56a4;
        }
    }
    ctx->pc = 0x3A5694u;
    // 0x3a5694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5698: 0xc149a14  jal         func_526850
    ctx->pc = 0x3A5698u;
    SET_GPR_U32(ctx, 31, 0x3A56A0u);
    ctx->pc = 0x3A569Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5698u;
            // 0x3a569c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x526850u;
    if (runtime->hasFunction(0x526850u)) {
        auto targetFn = runtime->lookupFunction(0x526850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A56A0u; }
        if (ctx->pc != 0x3A56A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00526850_0x526850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A56A0u; }
        if (ctx->pc != 0x3A56A0u) { return; }
    }
    ctx->pc = 0x3A56A0u;
label_3a56a0:
    // 0x3a56a0: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x3a56a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
label_3a56a4:
    // 0x3a56a4: 0xc040180  jal         func_100600
    ctx->pc = 0x3A56A4u;
    SET_GPR_U32(ctx, 31, 0x3A56ACu);
    ctx->pc = 0x3A56A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A56A4u;
            // 0x3a56a8: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A56ACu; }
        if (ctx->pc != 0x3A56ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A56ACu; }
        if (ctx->pc != 0x3A56ACu) { return; }
    }
    ctx->pc = 0x3A56ACu;
label_3a56ac:
    // 0x3a56ac: 0x50400099  beql        $v0, $zero, . + 4 + (0x99 << 2)
    ctx->pc = 0x3A56ACu;
    {
        const bool branch_taken_0x3a56ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a56ac) {
            ctx->pc = 0x3A56B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A56ACu;
            // 0x3a56b0: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5914u;
            goto label_3a5914;
        }
    }
    ctx->pc = 0x3A56B4u;
    // 0x3a56b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a56b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a56b8: 0xc149998  jal         func_526660
    ctx->pc = 0x3A56B8u;
    SET_GPR_U32(ctx, 31, 0x3A56C0u);
    ctx->pc = 0x3A56BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A56B8u;
            // 0x3a56bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x526660u;
    if (runtime->hasFunction(0x526660u)) {
        auto targetFn = runtime->lookupFunction(0x526660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A56C0u; }
        if (ctx->pc != 0x3A56C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00526660_0x526660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A56C0u; }
        if (ctx->pc != 0x3A56C0u) { return; }
    }
    ctx->pc = 0x3A56C0u;
label_3a56c0:
    // 0x3a56c0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x3a56c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x3a56c4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3A56C4u;
    {
        const bool branch_taken_0x3a56c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a56c4) {
            ctx->pc = 0x3A5914u;
            goto label_3a5914;
        }
    }
    ctx->pc = 0x3A56CCu;
label_3a56cc:
    // 0x3a56cc: 0xc040180  jal         func_100600
    ctx->pc = 0x3A56CCu;
    SET_GPR_U32(ctx, 31, 0x3A56D4u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A56D4u; }
        if (ctx->pc != 0x3A56D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A56D4u; }
        if (ctx->pc != 0x3A56D4u) { return; }
    }
    ctx->pc = 0x3A56D4u;
label_3a56d4:
    // 0x3a56d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A56D4u;
    {
        const bool branch_taken_0x3a56d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a56d4) {
            ctx->pc = 0x3A56D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A56D4u;
            // 0x3a56d8: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A56ECu;
            goto label_3a56ec;
        }
    }
    ctx->pc = 0x3A56DCu;
    // 0x3a56dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a56dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a56e0: 0xc0eb104  jal         func_3AC410
    ctx->pc = 0x3A56E0u;
    SET_GPR_U32(ctx, 31, 0x3A56E8u);
    ctx->pc = 0x3A56E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A56E0u;
            // 0x3a56e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AC410u;
    if (runtime->hasFunction(0x3AC410u)) {
        auto targetFn = runtime->lookupFunction(0x3AC410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A56E8u; }
        if (ctx->pc != 0x3A56E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AC410_0x3ac410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A56E8u; }
        if (ctx->pc != 0x3A56E8u) { return; }
    }
    ctx->pc = 0x3A56E8u;
label_3a56e8:
    // 0x3a56e8: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x3a56e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
label_3a56ec:
    // 0x3a56ec: 0xc040180  jal         func_100600
    ctx->pc = 0x3A56ECu;
    SET_GPR_U32(ctx, 31, 0x3A56F4u);
    ctx->pc = 0x3A56F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A56ECu;
            // 0x3a56f0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A56F4u; }
        if (ctx->pc != 0x3A56F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A56F4u; }
        if (ctx->pc != 0x3A56F4u) { return; }
    }
    ctx->pc = 0x3A56F4u;
label_3a56f4:
    // 0x3a56f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A56F4u;
    {
        const bool branch_taken_0x3a56f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a56f4) {
            ctx->pc = 0x3A56F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A56F4u;
            // 0x3a56f8: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A570Cu;
            goto label_3a570c;
        }
    }
    ctx->pc = 0x3A56FCu;
    // 0x3a56fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a56fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5700: 0xc0e9be0  jal         func_3A6F80
    ctx->pc = 0x3A5700u;
    SET_GPR_U32(ctx, 31, 0x3A5708u);
    ctx->pc = 0x3A5704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5700u;
            // 0x3a5704: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A6F80u;
    if (runtime->hasFunction(0x3A6F80u)) {
        auto targetFn = runtime->lookupFunction(0x3A6F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5708u; }
        if (ctx->pc != 0x3A5708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A6F80_0x3a6f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5708u; }
        if (ctx->pc != 0x3A5708u) { return; }
    }
    ctx->pc = 0x3A5708u;
label_3a5708:
    // 0x3a5708: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x3a5708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_3a570c:
    // 0x3a570c: 0xc040180  jal         func_100600
    ctx->pc = 0x3A570Cu;
    SET_GPR_U32(ctx, 31, 0x3A5714u);
    ctx->pc = 0x3A5710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A570Cu;
            // 0x3a5710: 0x24040380  addiu       $a0, $zero, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5714u; }
        if (ctx->pc != 0x3A5714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5714u; }
        if (ctx->pc != 0x3A5714u) { return; }
    }
    ctx->pc = 0x3A5714u;
label_3a5714:
    // 0x3a5714: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5714u;
    {
        const bool branch_taken_0x3a5714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5714u;
            // 0x3a5718: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5714) {
            ctx->pc = 0x3A5734u;
            goto label_3a5734;
        }
    }
    ctx->pc = 0x3A571Cu;
    // 0x3a571c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a571cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5720: 0xc0ec518  jal         func_3B1460
    ctx->pc = 0x3A5720u;
    SET_GPR_U32(ctx, 31, 0x3A5728u);
    ctx->pc = 0x3A5724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5720u;
            // 0x3a5724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B1460u;
    if (runtime->hasFunction(0x3B1460u)) {
        auto targetFn = runtime->lookupFunction(0x3B1460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5728u; }
        if (ctx->pc != 0x3A5728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B1460_0x3b1460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5728u; }
        if (ctx->pc != 0x3A5728u) { return; }
    }
    ctx->pc = 0x3A5728u;
label_3a5728:
    // 0x3a5728: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a5728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3a572c: 0x24427f50  addiu       $v0, $v0, 0x7F50
    ctx->pc = 0x3a572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32592));
    // 0x3a5730: 0xae220374  sw          $v0, 0x374($s1)
    ctx->pc = 0x3a5730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 2));
label_3a5734:
    // 0x3a5734: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3a5734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3a5738: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5738u;
    SET_GPR_U32(ctx, 31, 0x3A5740u);
    ctx->pc = 0x3A573Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5738u;
            // 0x3a573c: 0xae1100f0  sw          $s1, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5740u; }
        if (ctx->pc != 0x3A5740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5740u; }
        if (ctx->pc != 0x3A5740u) { return; }
    }
    ctx->pc = 0x3A5740u;
label_3a5740:
    // 0x3a5740: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5740u;
    {
        const bool branch_taken_0x3a5740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5740u;
            // 0x3a5744: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5740) {
            ctx->pc = 0x3A5760u;
            goto label_3a5760;
        }
    }
    ctx->pc = 0x3A5748u;
    // 0x3a5748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a5748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a574c: 0xc0e9fdc  jal         func_3A7F70
    ctx->pc = 0x3A574Cu;
    SET_GPR_U32(ctx, 31, 0x3A5754u);
    ctx->pc = 0x3A5750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A574Cu;
            // 0x3a5750: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F70u;
    if (runtime->hasFunction(0x3A7F70u)) {
        auto targetFn = runtime->lookupFunction(0x3A7F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5754u; }
        if (ctx->pc != 0x3A5754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7F70_0x3a7f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5754u; }
        if (ctx->pc != 0x3A5754u) { return; }
    }
    ctx->pc = 0x3A5754u;
label_3a5754:
    // 0x3a5754: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a5754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3a5758: 0x24426f70  addiu       $v0, $v0, 0x6F70
    ctx->pc = 0x3a5758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28528));
    // 0x3a575c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a575cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a5760:
    // 0x3a5760: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x3a5760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3a5764: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5764u;
    SET_GPR_U32(ctx, 31, 0x3A576Cu);
    ctx->pc = 0x3A5768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5764u;
            // 0x3a5768: 0xae1100f8  sw          $s1, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A576Cu; }
        if (ctx->pc != 0x3A576Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A576Cu; }
        if (ctx->pc != 0x3A576Cu) { return; }
    }
    ctx->pc = 0x3A576Cu;
label_3a576c:
    // 0x3a576c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A576Cu;
    {
        const bool branch_taken_0x3a576c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a576c) {
            ctx->pc = 0x3A5770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A576Cu;
            // 0x3a5770: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5784u;
            goto label_3a5784;
        }
    }
    ctx->pc = 0x3A5774u;
    // 0x3a5774: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5778: 0xc0ecf78  jal         func_3B3DE0
    ctx->pc = 0x3A5778u;
    SET_GPR_U32(ctx, 31, 0x3A5780u);
    ctx->pc = 0x3A577Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5778u;
            // 0x3a577c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B3DE0u;
    if (runtime->hasFunction(0x3B3DE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B3DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5780u; }
        if (ctx->pc != 0x3A5780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B3DE0_0x3b3de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5780u; }
        if (ctx->pc != 0x3A5780u) { return; }
    }
    ctx->pc = 0x3A5780u;
label_3a5780:
    // 0x3a5780: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x3a5780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_3a5784:
    // 0x3a5784: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5784u;
    SET_GPR_U32(ctx, 31, 0x3A578Cu);
    ctx->pc = 0x3A5788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5784u;
            // 0x3a5788: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A578Cu; }
        if (ctx->pc != 0x3A578Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A578Cu; }
        if (ctx->pc != 0x3A578Cu) { return; }
    }
    ctx->pc = 0x3A578Cu;
label_3a578c:
    // 0x3a578c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A578Cu;
    {
        const bool branch_taken_0x3a578c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a578c) {
            ctx->pc = 0x3A5790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A578Cu;
            // 0x3a5790: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A57A4u;
            goto label_3a57a4;
        }
    }
    ctx->pc = 0x3A5794u;
    // 0x3a5794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5798: 0xc0ecadc  jal         func_3B2B70
    ctx->pc = 0x3A5798u;
    SET_GPR_U32(ctx, 31, 0x3A57A0u);
    ctx->pc = 0x3A579Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5798u;
            // 0x3a579c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B70u;
    if (runtime->hasFunction(0x3B2B70u)) {
        auto targetFn = runtime->lookupFunction(0x3B2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A57A0u; }
        if (ctx->pc != 0x3A57A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B2B70_0x3b2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A57A0u; }
        if (ctx->pc != 0x3A57A0u) { return; }
    }
    ctx->pc = 0x3A57A0u;
label_3a57a0:
    // 0x3a57a0: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x3a57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_3a57a4:
    // 0x3a57a4: 0xc040180  jal         func_100600
    ctx->pc = 0x3A57A4u;
    SET_GPR_U32(ctx, 31, 0x3A57ACu);
    ctx->pc = 0x3A57A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A57A4u;
            // 0x3a57a8: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A57ACu; }
        if (ctx->pc != 0x3A57ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A57ACu; }
        if (ctx->pc != 0x3A57ACu) { return; }
    }
    ctx->pc = 0x3A57ACu;
label_3a57ac:
    // 0x3a57ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A57ACu;
    {
        const bool branch_taken_0x3a57ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a57ac) {
            ctx->pc = 0x3A57B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A57ACu;
            // 0x3a57b0: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A57C4u;
            goto label_3a57c4;
        }
    }
    ctx->pc = 0x3A57B4u;
    // 0x3a57b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a57b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a57b8: 0xc131a24  jal         func_4C6890
    ctx->pc = 0x3A57B8u;
    SET_GPR_U32(ctx, 31, 0x3A57C0u);
    ctx->pc = 0x3A57BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A57B8u;
            // 0x3a57bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C6890u;
    if (runtime->hasFunction(0x4C6890u)) {
        auto targetFn = runtime->lookupFunction(0x4C6890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A57C0u; }
        if (ctx->pc != 0x3A57C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C6890_0x4c6890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A57C0u; }
        if (ctx->pc != 0x3A57C0u) { return; }
    }
    ctx->pc = 0x3A57C0u;
label_3a57c0:
    // 0x3a57c0: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x3a57c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
label_3a57c4:
    // 0x3a57c4: 0xc040180  jal         func_100600
    ctx->pc = 0x3A57C4u;
    SET_GPR_U32(ctx, 31, 0x3A57CCu);
    ctx->pc = 0x3A57C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A57C4u;
            // 0x3a57c8: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A57CCu; }
        if (ctx->pc != 0x3A57CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A57CCu; }
        if (ctx->pc != 0x3A57CCu) { return; }
    }
    ctx->pc = 0x3A57CCu;
label_3a57cc:
    // 0x3a57cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A57CCu;
    {
        const bool branch_taken_0x3a57cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a57cc) {
            ctx->pc = 0x3A57D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A57CCu;
            // 0x3a57d0: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A57E4u;
            goto label_3a57e4;
        }
    }
    ctx->pc = 0x3A57D4u;
    // 0x3a57d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a57d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a57d8: 0xc13ac80  jal         func_4EB200
    ctx->pc = 0x3A57D8u;
    SET_GPR_U32(ctx, 31, 0x3A57E0u);
    ctx->pc = 0x3A57DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A57D8u;
            // 0x3a57dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EB200u;
    if (runtime->hasFunction(0x4EB200u)) {
        auto targetFn = runtime->lookupFunction(0x4EB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A57E0u; }
        if (ctx->pc != 0x3A57E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EB200_0x4eb200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A57E0u; }
        if (ctx->pc != 0x3A57E0u) { return; }
    }
    ctx->pc = 0x3A57E0u;
label_3a57e0:
    // 0x3a57e0: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x3a57e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_3a57e4:
    // 0x3a57e4: 0xc040180  jal         func_100600
    ctx->pc = 0x3A57E4u;
    SET_GPR_U32(ctx, 31, 0x3A57ECu);
    ctx->pc = 0x3A57E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A57E4u;
            // 0x3a57e8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A57ECu; }
        if (ctx->pc != 0x3A57ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A57ECu; }
        if (ctx->pc != 0x3A57ECu) { return; }
    }
    ctx->pc = 0x3A57ECu;
label_3a57ec:
    // 0x3a57ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A57ECu;
    {
        const bool branch_taken_0x3a57ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A57F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A57ECu;
            // 0x3a57f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a57ec) {
            ctx->pc = 0x3A580Cu;
            goto label_3a580c;
        }
    }
    ctx->pc = 0x3A57F4u;
    // 0x3a57f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a57f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a57f8: 0xc159950  jal         func_566540
    ctx->pc = 0x3A57F8u;
    SET_GPR_U32(ctx, 31, 0x3A5800u);
    ctx->pc = 0x3A57FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A57F8u;
            // 0x3a57fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x566540u;
    if (runtime->hasFunction(0x566540u)) {
        auto targetFn = runtime->lookupFunction(0x566540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5800u; }
        if (ctx->pc != 0x3A5800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00566540_0x566540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5800u; }
        if (ctx->pc != 0x3A5800u) { return; }
    }
    ctx->pc = 0x3A5800u;
label_3a5800:
    // 0x3a5800: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a5800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3a5804: 0x24427f40  addiu       $v0, $v0, 0x7F40
    ctx->pc = 0x3a5804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32576));
    // 0x3a5808: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a5808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a580c:
    // 0x3a580c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3A580Cu;
    {
        const bool branch_taken_0x3a580c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A580Cu;
            // 0x3a5810: 0xae11010c  sw          $s1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a580c) {
            ctx->pc = 0x3A5914u;
            goto label_3a5914;
        }
    }
    ctx->pc = 0x3A5814u;
label_3a5814:
    // 0x3a5814: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5814u;
    SET_GPR_U32(ctx, 31, 0x3A581Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A581Cu; }
        if (ctx->pc != 0x3A581Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A581Cu; }
        if (ctx->pc != 0x3A581Cu) { return; }
    }
    ctx->pc = 0x3A581Cu;
label_3a581c:
    // 0x3a581c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A581Cu;
    {
        const bool branch_taken_0x3a581c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a581c) {
            ctx->pc = 0x3A5820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A581Cu;
            // 0x3a5820: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5834u;
            goto label_3a5834;
        }
    }
    ctx->pc = 0x3A5824u;
    // 0x3a5824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5828: 0xc0eb104  jal         func_3AC410
    ctx->pc = 0x3A5828u;
    SET_GPR_U32(ctx, 31, 0x3A5830u);
    ctx->pc = 0x3A582Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5828u;
            // 0x3a582c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AC410u;
    if (runtime->hasFunction(0x3AC410u)) {
        auto targetFn = runtime->lookupFunction(0x3AC410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5830u; }
        if (ctx->pc != 0x3A5830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AC410_0x3ac410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5830u; }
        if (ctx->pc != 0x3A5830u) { return; }
    }
    ctx->pc = 0x3A5830u;
label_3a5830:
    // 0x3a5830: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x3a5830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
label_3a5834:
    // 0x3a5834: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5834u;
    SET_GPR_U32(ctx, 31, 0x3A583Cu);
    ctx->pc = 0x3A5838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5834u;
            // 0x3a5838: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A583Cu; }
        if (ctx->pc != 0x3A583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A583Cu; }
        if (ctx->pc != 0x3A583Cu) { return; }
    }
    ctx->pc = 0x3A583Cu;
label_3a583c:
    // 0x3a583c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A583Cu;
    {
        const bool branch_taken_0x3a583c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a583c) {
            ctx->pc = 0x3A5840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A583Cu;
            // 0x3a5840: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5854u;
            goto label_3a5854;
        }
    }
    ctx->pc = 0x3A5844u;
    // 0x3a5844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5848: 0xc0e9be0  jal         func_3A6F80
    ctx->pc = 0x3A5848u;
    SET_GPR_U32(ctx, 31, 0x3A5850u);
    ctx->pc = 0x3A584Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5848u;
            // 0x3a584c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A6F80u;
    if (runtime->hasFunction(0x3A6F80u)) {
        auto targetFn = runtime->lookupFunction(0x3A6F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5850u; }
        if (ctx->pc != 0x3A5850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A6F80_0x3a6f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5850u; }
        if (ctx->pc != 0x3A5850u) { return; }
    }
    ctx->pc = 0x3A5850u;
label_3a5850:
    // 0x3a5850: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x3a5850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_3a5854:
    // 0x3a5854: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5854u;
    SET_GPR_U32(ctx, 31, 0x3A585Cu);
    ctx->pc = 0x3A5858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5854u;
            // 0x3a5858: 0x24040380  addiu       $a0, $zero, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A585Cu; }
        if (ctx->pc != 0x3A585Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A585Cu; }
        if (ctx->pc != 0x3A585Cu) { return; }
    }
    ctx->pc = 0x3A585Cu;
label_3a585c:
    // 0x3a585c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A585Cu;
    {
        const bool branch_taken_0x3a585c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a585c) {
            ctx->pc = 0x3A5860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A585Cu;
            // 0x3a5860: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5874u;
            goto label_3a5874;
        }
    }
    ctx->pc = 0x3A5864u;
    // 0x3a5864: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5868: 0xc0ec518  jal         func_3B1460
    ctx->pc = 0x3A5868u;
    SET_GPR_U32(ctx, 31, 0x3A5870u);
    ctx->pc = 0x3A586Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5868u;
            // 0x3a586c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B1460u;
    if (runtime->hasFunction(0x3B1460u)) {
        auto targetFn = runtime->lookupFunction(0x3B1460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5870u; }
        if (ctx->pc != 0x3A5870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B1460_0x3b1460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5870u; }
        if (ctx->pc != 0x3A5870u) { return; }
    }
    ctx->pc = 0x3A5870u;
label_3a5870:
    // 0x3a5870: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x3a5870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_3a5874:
    // 0x3a5874: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5874u;
    SET_GPR_U32(ctx, 31, 0x3A587Cu);
    ctx->pc = 0x3A5878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5874u;
            // 0x3a5878: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A587Cu; }
        if (ctx->pc != 0x3A587Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A587Cu; }
        if (ctx->pc != 0x3A587Cu) { return; }
    }
    ctx->pc = 0x3A587Cu;
label_3a587c:
    // 0x3a587c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A587Cu;
    {
        const bool branch_taken_0x3a587c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a587c) {
            ctx->pc = 0x3A5880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A587Cu;
            // 0x3a5880: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5894u;
            goto label_3a5894;
        }
    }
    ctx->pc = 0x3A5884u;
    // 0x3a5884: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5888: 0xc0e9fdc  jal         func_3A7F70
    ctx->pc = 0x3A5888u;
    SET_GPR_U32(ctx, 31, 0x3A5890u);
    ctx->pc = 0x3A588Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5888u;
            // 0x3a588c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F70u;
    if (runtime->hasFunction(0x3A7F70u)) {
        auto targetFn = runtime->lookupFunction(0x3A7F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5890u; }
        if (ctx->pc != 0x3A5890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7F70_0x3a7f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5890u; }
        if (ctx->pc != 0x3A5890u) { return; }
    }
    ctx->pc = 0x3A5890u;
label_3a5890:
    // 0x3a5890: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x3a5890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_3a5894:
    // 0x3a5894: 0xc040180  jal         func_100600
    ctx->pc = 0x3A5894u;
    SET_GPR_U32(ctx, 31, 0x3A589Cu);
    ctx->pc = 0x3A5898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5894u;
            // 0x3a5898: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A589Cu; }
        if (ctx->pc != 0x3A589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A589Cu; }
        if (ctx->pc != 0x3A589Cu) { return; }
    }
    ctx->pc = 0x3A589Cu;
label_3a589c:
    // 0x3a589c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A589Cu;
    {
        const bool branch_taken_0x3a589c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a589c) {
            ctx->pc = 0x3A58A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A589Cu;
            // 0x3a58a0: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A58B4u;
            goto label_3a58b4;
        }
    }
    ctx->pc = 0x3A58A4u;
    // 0x3a58a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a58a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a58a8: 0xc0ecf78  jal         func_3B3DE0
    ctx->pc = 0x3A58A8u;
    SET_GPR_U32(ctx, 31, 0x3A58B0u);
    ctx->pc = 0x3A58ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A58A8u;
            // 0x3a58ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B3DE0u;
    if (runtime->hasFunction(0x3B3DE0u)) {
        auto targetFn = runtime->lookupFunction(0x3B3DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A58B0u; }
        if (ctx->pc != 0x3A58B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B3DE0_0x3b3de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A58B0u; }
        if (ctx->pc != 0x3A58B0u) { return; }
    }
    ctx->pc = 0x3A58B0u;
label_3a58b0:
    // 0x3a58b0: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x3a58b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_3a58b4:
    // 0x3a58b4: 0xc040180  jal         func_100600
    ctx->pc = 0x3A58B4u;
    SET_GPR_U32(ctx, 31, 0x3A58BCu);
    ctx->pc = 0x3A58B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A58B4u;
            // 0x3a58b8: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A58BCu; }
        if (ctx->pc != 0x3A58BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A58BCu; }
        if (ctx->pc != 0x3A58BCu) { return; }
    }
    ctx->pc = 0x3A58BCu;
label_3a58bc:
    // 0x3a58bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A58BCu;
    {
        const bool branch_taken_0x3a58bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a58bc) {
            ctx->pc = 0x3A58C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A58BCu;
            // 0x3a58c0: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A58D4u;
            goto label_3a58d4;
        }
    }
    ctx->pc = 0x3A58C4u;
    // 0x3a58c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a58c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a58c8: 0xc0ecadc  jal         func_3B2B70
    ctx->pc = 0x3A58C8u;
    SET_GPR_U32(ctx, 31, 0x3A58D0u);
    ctx->pc = 0x3A58CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A58C8u;
            // 0x3a58cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B70u;
    if (runtime->hasFunction(0x3B2B70u)) {
        auto targetFn = runtime->lookupFunction(0x3B2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A58D0u; }
        if (ctx->pc != 0x3A58D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B2B70_0x3b2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A58D0u; }
        if (ctx->pc != 0x3A58D0u) { return; }
    }
    ctx->pc = 0x3A58D0u;
label_3a58d0:
    // 0x3a58d0: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x3a58d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_3a58d4:
    // 0x3a58d4: 0xc040180  jal         func_100600
    ctx->pc = 0x3A58D4u;
    SET_GPR_U32(ctx, 31, 0x3A58DCu);
    ctx->pc = 0x3A58D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A58D4u;
            // 0x3a58d8: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A58DCu; }
        if (ctx->pc != 0x3A58DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A58DCu; }
        if (ctx->pc != 0x3A58DCu) { return; }
    }
    ctx->pc = 0x3A58DCu;
label_3a58dc:
    // 0x3a58dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A58DCu;
    {
        const bool branch_taken_0x3a58dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a58dc) {
            ctx->pc = 0x3A58E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A58DCu;
            // 0x3a58e0: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A58F4u;
            goto label_3a58f4;
        }
    }
    ctx->pc = 0x3A58E4u;
    // 0x3a58e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a58e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a58e8: 0xc131a24  jal         func_4C6890
    ctx->pc = 0x3A58E8u;
    SET_GPR_U32(ctx, 31, 0x3A58F0u);
    ctx->pc = 0x3A58ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A58E8u;
            // 0x3a58ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C6890u;
    if (runtime->hasFunction(0x4C6890u)) {
        auto targetFn = runtime->lookupFunction(0x4C6890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A58F0u; }
        if (ctx->pc != 0x3A58F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C6890_0x4c6890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A58F0u; }
        if (ctx->pc != 0x3A58F0u) { return; }
    }
    ctx->pc = 0x3A58F0u;
label_3a58f0:
    // 0x3a58f0: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x3a58f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
label_3a58f4:
    // 0x3a58f4: 0xc040180  jal         func_100600
    ctx->pc = 0x3A58F4u;
    SET_GPR_U32(ctx, 31, 0x3A58FCu);
    ctx->pc = 0x3A58F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A58F4u;
            // 0x3a58f8: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A58FCu; }
        if (ctx->pc != 0x3A58FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A58FCu; }
        if (ctx->pc != 0x3A58FCu) { return; }
    }
    ctx->pc = 0x3A58FCu;
label_3a58fc:
    // 0x3a58fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A58FCu;
    {
        const bool branch_taken_0x3a58fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a58fc) {
            ctx->pc = 0x3A5900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A58FCu;
            // 0x3a5900: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A5914u;
            goto label_3a5914;
        }
    }
    ctx->pc = 0x3A5904u;
    // 0x3a5904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5908: 0xc13ac80  jal         func_4EB200
    ctx->pc = 0x3A5908u;
    SET_GPR_U32(ctx, 31, 0x3A5910u);
    ctx->pc = 0x3A590Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5908u;
            // 0x3a590c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EB200u;
    if (runtime->hasFunction(0x4EB200u)) {
        auto targetFn = runtime->lookupFunction(0x4EB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5910u; }
        if (ctx->pc != 0x3A5910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EB200_0x4eb200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A5910u; }
        if (ctx->pc != 0x3A5910u) { return; }
    }
    ctx->pc = 0x3A5910u;
label_3a5910:
    // 0x3a5910: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x3a5910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_3a5914:
    // 0x3a5914: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a5914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5918: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a5918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a591c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a591cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a5920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5924: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5924u;
            // 0x3a5928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A592Cu;
    // 0x3a592c: 0x0  nop
    ctx->pc = 0x3a592cu;
    // NOP
    // 0x3a5930: 0x80e9398  j           func_3A4E60
    ctx->pc = 0x3A5930u;
    ctx->pc = 0x3A5934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A5930u;
            // 0x3a5934: 0x2484ffac  addiu       $a0, $a0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E60u;
    {
        auto targetFn = runtime->lookupFunction(0x3A4E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3A5938u;
    // 0x3a5938: 0x0  nop
    ctx->pc = 0x3a5938u;
    // NOP
    // 0x3a593c: 0x0  nop
    ctx->pc = 0x3a593cu;
    // NOP
}
