#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EE040
// Address: 0x2ee040 - 0x2efb20
void sub_002EE040_0x2ee040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE040_0x2ee040");
#endif

    switch (ctx->pc) {
        case 0x2ee104u: goto label_2ee104;
        case 0x2ee124u: goto label_2ee124;
        case 0x2ee248u: goto label_2ee248;
        case 0x2ee26cu: goto label_2ee26c;
        case 0x2ee38cu: goto label_2ee38c;
        case 0x2ee3b0u: goto label_2ee3b0;
        case 0x2ee58cu: goto label_2ee58c;
        case 0x2ee5b8u: goto label_2ee5b8;
        case 0x2ee76cu: goto label_2ee76c;
        case 0x2ee794u: goto label_2ee794;
        case 0x2ee8ecu: goto label_2ee8ec;
        case 0x2ee918u: goto label_2ee918;
        case 0x2eeaf8u: goto label_2eeaf8;
        case 0x2eeb24u: goto label_2eeb24;
        case 0x2eece0u: goto label_2eece0;
        case 0x2eed08u: goto label_2eed08;
        case 0x2eee60u: goto label_2eee60;
        case 0x2eee8cu: goto label_2eee8c;
        case 0x2ef03cu: goto label_2ef03c;
        case 0x2ef068u: goto label_2ef068;
        case 0x2ef248u: goto label_2ef248;
        case 0x2ef274u: goto label_2ef274;
        case 0x2ef438u: goto label_2ef438;
        case 0x2ef460u: goto label_2ef460;
        case 0x2ef5e0u: goto label_2ef5e0;
        case 0x2ef5f8u: goto label_2ef5f8;
        case 0x2ef650u: goto label_2ef650;
        case 0x2ef668u: goto label_2ef668;
        case 0x2ef6d4u: goto label_2ef6d4;
        case 0x2ef6e8u: goto label_2ef6e8;
        case 0x2ef710u: goto label_2ef710;
        case 0x2ef734u: goto label_2ef734;
        case 0x2ef74cu: goto label_2ef74c;
        case 0x2ef75cu: goto label_2ef75c;
        case 0x2ef770u: goto label_2ef770;
        case 0x2ef7c4u: goto label_2ef7c4;
        case 0x2ef7d0u: goto label_2ef7d0;
        case 0x2ef900u: goto label_2ef900;
        case 0x2ef918u: goto label_2ef918;
        case 0x2ef984u: goto label_2ef984;
        case 0x2ef998u: goto label_2ef998;
        case 0x2ef9c0u: goto label_2ef9c0;
        case 0x2ef9e4u: goto label_2ef9e4;
        case 0x2ef9fcu: goto label_2ef9fc;
        case 0x2efa0cu: goto label_2efa0c;
        case 0x2efa20u: goto label_2efa20;
        case 0x2efa78u: goto label_2efa78;
        case 0x2efa80u: goto label_2efa80;
        case 0x2efa8cu: goto label_2efa8c;
        default: break;
    }

    ctx->pc = 0x2ee040u;

    // 0x2ee040: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2ee040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2ee044: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2ee044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2ee048: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ee048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2ee04c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2ee04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2ee050: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ee050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ee054: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ee054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ee058: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ee058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ee05c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ee05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ee060: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ee060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ee064: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ee064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ee068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ee068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ee06c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ee06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ee070: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ee070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee074: 0x90a60004  lbu         $a2, 0x4($a1)
    ctx->pc = 0x2ee074u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ee078: 0x3470d090  ori         $s0, $v1, 0xD090
    ctx->pc = 0x2ee078u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53392);
    // 0x2ee07c: 0x94a70000  lhu         $a3, 0x0($a1)
    ctx->pc = 0x2ee07cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ee080: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2ee080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2ee084: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2ee084u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2ee088: 0x24841eb0  addiu       $a0, $a0, 0x1EB0
    ctx->pc = 0x2ee088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7856));
    // 0x2ee08c: 0xc09826  xor         $s3, $a2, $zero
    ctx->pc = 0x2ee08cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 0));
    // 0x2ee090: 0x90b60005  lbu         $s6, 0x5($a1)
    ctx->pc = 0x2ee090u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2ee094: 0x30e60004  andi        $a2, $a3, 0x4
    ctx->pc = 0x2ee094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x2ee098: 0x2e730001  sltiu       $s3, $s3, 0x1
    ctx->pc = 0x2ee098u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ee09c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ee09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ee0a0: 0x38c40004  xori        $a0, $a2, 0x4
    ctx->pc = 0x2ee0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
    // 0x2ee0a4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2ee0a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ee0a8: 0x30e50002  andi        $a1, $a3, 0x2
    ctx->pc = 0x2ee0a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x2ee0ac: 0x2c860001  sltiu       $a2, $a0, 0x1
    ctx->pc = 0x2ee0acu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ee0b0: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x2ee0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x2ee0b4: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2ee0b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ee0b8: 0x7fa30190  sq          $v1, 0x190($sp)
    ctx->pc = 0x2ee0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 3));
    // 0x2ee0bc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2ee0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ee0c0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ee0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ee0c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ee0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ee0c8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE0C8u;
    {
        const bool branch_taken_0x2ee0c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE0C8u;
            // 0x2ee0cc: 0x7fa301a0  sq          $v1, 0x1A0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0c8) {
            ctx->pc = 0x2EE0D8u;
            goto label_2ee0d8;
        }
    }
    ctx->pc = 0x2EE0D0u;
    // 0x2ee0d0: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x2ee0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x2ee0d4: 0x34707df8  ori         $s0, $v1, 0x7DF8
    ctx->pc = 0x2ee0d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32248);
label_2ee0d8:
    // 0x2ee0d8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ee0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ee0dc: 0x323700ff  andi        $s7, $s1, 0xFF
    ctx->pc = 0x2ee0dcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2ee0e0: 0x246314e0  addiu       $v1, $v1, 0x14E0
    ctx->pc = 0x2ee0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5344));
    // 0x2ee0e4: 0x772821  addu        $a1, $v1, $s7
    ctx->pc = 0x2ee0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2ee0e8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2ee0e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ee0ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee0f0: 0x508300f6  beql        $a0, $v1, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2EE0F0u;
    {
        const bool branch_taken_0x2ee0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee0f0) {
            ctx->pc = 0x2EE0F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE0F0u;
            // 0x2ee0f4: 0x7ba30190  lq          $v1, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE4CCu;
            goto label_2ee4cc;
        }
    }
    ctx->pc = 0x2EE0F8u;
    // 0x2ee0f8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2ee0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee0fc: 0xc040180  jal         func_100600
    ctx->pc = 0x2EE0FCu;
    SET_GPR_U32(ctx, 31, 0x2EE104u);
    ctx->pc = 0x2EE100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE0FCu;
            // 0x2ee100: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE104u; }
        if (ctx->pc != 0x2EE104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE104u; }
        if (ctx->pc != 0x2EE104u) { return; }
    }
    ctx->pc = 0x2EE104u;
label_2ee104:
    // 0x2ee104: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2EE104u;
    {
        const bool branch_taken_0x2ee104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE104u;
            // 0x2ee108: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee104) {
            ctx->pc = 0x2EE23Cu;
            goto label_2ee23c;
        }
    }
    ctx->pc = 0x2EE10Cu;
    // 0x2ee10c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ee10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ee110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee118: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ee118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee11c: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2EE11Cu;
    SET_GPR_U32(ctx, 31, 0x2EE124u);
    ctx->pc = 0x2EE120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE11Cu;
            // 0x2ee120: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE124u; }
        if (ctx->pc != 0x2EE124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE124u; }
        if (ctx->pc != 0x2EE124u) { return; }
    }
    ctx->pc = 0x2EE124u;
label_2ee124:
    // 0x2ee124: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ee124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ee128: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ee128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ee12c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2ee12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2ee130: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x2ee130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
    // 0x2ee134: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2ee134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2ee138: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2ee138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2ee13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee140: 0xa2510054  sb          $s1, 0x54($s2)
    ctx->pc = 0x2ee140u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ee144: 0xa2400056  sb          $zero, 0x56($s2)
    ctx->pc = 0x2ee144u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee148: 0xa2420057  sb          $v0, 0x57($s2)
    ctx->pc = 0x2ee148u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ee14c: 0xa2400058  sb          $zero, 0x58($s2)
    ctx->pc = 0x2ee14cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee150: 0xa640005a  sh          $zero, 0x5A($s2)
    ctx->pc = 0x2ee150u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ee154: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE154u;
    {
        const bool branch_taken_0x2ee154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE154u;
            // 0x2ee158: 0xae40005c  sw          $zero, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee154) {
            ctx->pc = 0x2EE16Cu;
            goto label_2ee16c;
        }
    }
    ctx->pc = 0x2EE15Cu;
    // 0x2ee15c: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x2ee15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x2ee160: 0x34428208  ori         $v0, $v0, 0x8208
    ctx->pc = 0x2ee160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33288);
    // 0x2ee164: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE164u;
    {
        const bool branch_taken_0x2ee164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE164u;
            // 0x2ee168: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee164) {
            ctx->pc = 0x2EE178u;
            goto label_2ee178;
        }
    }
    ctx->pc = 0x2EE16Cu;
label_2ee16c:
    // 0x2ee16c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x2ee16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x2ee170: 0x34422f70  ori         $v0, $v0, 0x2F70
    ctx->pc = 0x2ee170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12144);
    // 0x2ee174: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x2ee174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ee178:
    // 0x2ee178: 0x28a203e8  slti        $v0, $a1, 0x3E8
    ctx->pc = 0x2ee178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2ee17c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE17Cu;
    {
        const bool branch_taken_0x2ee17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee17c) {
            ctx->pc = 0x2EE180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE17Cu;
            // 0x2ee180: 0x3c040007  lui         $a0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE18Cu;
            goto label_2ee18c;
        }
    }
    ctx->pc = 0x2EE184u;
    // 0x2ee184: 0x24a5fc18  addiu       $a1, $a1, -0x3E8
    ctx->pc = 0x2ee184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966296));
    // 0x2ee188: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x2ee188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
label_2ee18c:
    // 0x2ee18c: 0x348281e0  ori         $v0, $a0, 0x81E0
    ctx->pc = 0x2ee18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33248);
    // 0x2ee190: 0x5202002a  beql        $s0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2EE190u;
    {
        const bool branch_taken_0x2ee190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee190) {
            ctx->pc = 0x2EE194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE190u;
            // 0x2ee194: 0xa2400055  sb          $zero, 0x55($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE23Cu;
            goto label_2ee23c;
        }
    }
    ctx->pc = 0x2EE198u;
    // 0x2ee198: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2ee198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2ee19c: 0x3462d478  ori         $v0, $v1, 0xD478
    ctx->pc = 0x2ee19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54392);
    // 0x2ee1a0: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE1A0u;
    {
        const bool branch_taken_0x2ee1a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee1a0) {
            ctx->pc = 0x2EE1F8u;
            goto label_2ee1f8;
        }
    }
    ctx->pc = 0x2EE1A8u;
    // 0x2ee1a8: 0x348289b0  ori         $v0, $a0, 0x89B0
    ctx->pc = 0x2ee1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)35248);
    // 0x2ee1ac: 0x52020010  beql        $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE1ACu;
    {
        const bool branch_taken_0x2ee1ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee1ac) {
            ctx->pc = 0x2EE1B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE1ACu;
            // 0x2ee1b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE1F0u;
            goto label_2ee1f0;
        }
    }
    ctx->pc = 0x2EE1B4u;
    // 0x2ee1b4: 0x3462dc48  ori         $v0, $v1, 0xDC48
    ctx->pc = 0x2ee1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56392);
    // 0x2ee1b8: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE1B8u;
    {
        const bool branch_taken_0x2ee1b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee1b8) {
            ctx->pc = 0x2EE1ECu;
            goto label_2ee1ec;
        }
    }
    ctx->pc = 0x2EE1C0u;
    // 0x2ee1c0: 0x34827df8  ori         $v0, $a0, 0x7DF8
    ctx->pc = 0x2ee1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32248);
    // 0x2ee1c4: 0x52020007  beql        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE1C4u;
    {
        const bool branch_taken_0x2ee1c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee1c4) {
            ctx->pc = 0x2EE1C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE1C4u;
            // 0x2ee1c8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE1E4u;
            goto label_2ee1e4;
        }
    }
    ctx->pc = 0x2EE1CCu;
    // 0x2ee1cc: 0x3462d090  ori         $v0, $v1, 0xD090
    ctx->pc = 0x2ee1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53392);
    // 0x2ee1d0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE1D0u;
    {
        const bool branch_taken_0x2ee1d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee1d0) {
            ctx->pc = 0x2EE1E0u;
            goto label_2ee1e0;
        }
    }
    ctx->pc = 0x2EE1D8u;
    // 0x2ee1d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EE1D8u;
    {
        const bool branch_taken_0x2ee1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee1d8) {
            ctx->pc = 0x2EE204u;
            goto label_2ee204;
        }
    }
    ctx->pc = 0x2EE1E0u;
label_2ee1e0:
    // 0x2ee1e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ee1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ee1e4:
    // 0x2ee1e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE1E4u;
    {
        const bool branch_taken_0x2ee1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE1E4u;
            // 0x2ee1e8: 0xa2420055  sb          $v0, 0x55($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1e4) {
            ctx->pc = 0x2EE23Cu;
            goto label_2ee23c;
        }
    }
    ctx->pc = 0x2EE1ECu;
label_2ee1ec:
    // 0x2ee1ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee1f0:
    // 0x2ee1f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EE1F0u;
    {
        const bool branch_taken_0x2ee1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE1F0u;
            // 0x2ee1f4: 0xa2420055  sb          $v0, 0x55($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1f0) {
            ctx->pc = 0x2EE23Cu;
            goto label_2ee23c;
        }
    }
    ctx->pc = 0x2EE1F8u;
label_2ee1f8:
    // 0x2ee1f8: 0xa2400055  sb          $zero, 0x55($s2)
    ctx->pc = 0x2ee1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee1fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EE1FCu;
    {
        const bool branch_taken_0x2ee1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee1fc) {
            ctx->pc = 0x2EE23Cu;
            goto label_2ee23c;
        }
    }
    ctx->pc = 0x2EE204u;
label_2ee204:
    // 0x2ee204: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2EE204u;
    {
        const bool branch_taken_0x2ee204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee204) {
            ctx->pc = 0x2EE23Cu;
            goto label_2ee23c;
        }
    }
    ctx->pc = 0x2EE20Cu;
    // 0x2ee20c: 0x92430058  lbu         $v1, 0x58($s2)
    ctx->pc = 0x2ee20cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2ee210: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ee210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee214: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE214u;
    {
        const bool branch_taken_0x2ee214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee214) {
            ctx->pc = 0x2EE218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE214u;
            // 0x2ee218: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE238u;
            goto label_2ee238;
        }
    }
    ctx->pc = 0x2EE21Cu;
    // 0x2ee21c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee220: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE220u;
    {
        const bool branch_taken_0x2ee220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee220) {
            ctx->pc = 0x2EE224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE220u;
            // 0x2ee224: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE230u;
            goto label_2ee230;
        }
    }
    ctx->pc = 0x2EE228u;
    // 0x2ee228: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE228u;
    {
        const bool branch_taken_0x2ee228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee228) {
            ctx->pc = 0x2EE23Cu;
            goto label_2ee23c;
        }
    }
    ctx->pc = 0x2EE230u;
label_2ee230:
    // 0x2ee230: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE230u;
    {
        const bool branch_taken_0x2ee230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE230u;
            // 0x2ee234: 0xa2420055  sb          $v0, 0x55($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee230) {
            ctx->pc = 0x2EE23Cu;
            goto label_2ee23c;
        }
    }
    ctx->pc = 0x2EE238u;
label_2ee238:
    // 0x2ee238: 0xa2420055  sb          $v0, 0x55($s2)
    ctx->pc = 0x2ee238u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 2));
label_2ee23c:
    // 0x2ee23c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2ee23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ee240: 0xc040180  jal         func_100600
    ctx->pc = 0x2EE240u;
    SET_GPR_U32(ctx, 31, 0x2EE248u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE248u; }
        if (ctx->pc != 0x2EE248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE248u; }
        if (ctx->pc != 0x2EE248u) { return; }
    }
    ctx->pc = 0x2EE248u;
label_2ee248:
    // 0x2ee248: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2EE248u;
    {
        const bool branch_taken_0x2ee248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE248u;
            // 0x2ee24c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee248) {
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2EE250u;
    // 0x2ee250: 0x261203e8  addiu       $s2, $s0, 0x3E8
    ctx->pc = 0x2ee250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1000));
    // 0x2ee254: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ee254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee258: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ee258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee25c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee260: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ee260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee264: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2EE264u;
    SET_GPR_U32(ctx, 31, 0x2EE26Cu);
    ctx->pc = 0x2EE268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE264u;
            // 0x2ee268: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE26Cu; }
        if (ctx->pc != 0x2EE26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE26Cu; }
        if (ctx->pc != 0x2EE26Cu) { return; }
    }
    ctx->pc = 0x2EE26Cu;
label_2ee26c:
    // 0x2ee26c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ee26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ee270: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ee270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ee274: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2ee274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2ee278: 0x24423110  addiu       $v0, $v0, 0x3110
    ctx->pc = 0x2ee278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
    // 0x2ee27c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2ee27cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2ee280: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2ee280u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2ee284: 0xa2910054  sb          $s1, 0x54($s4)
    ctx->pc = 0x2ee284u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 84), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ee288: 0xa2800056  sb          $zero, 0x56($s4)
    ctx->pc = 0x2ee288u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee28c: 0xa2800057  sb          $zero, 0x57($s4)
    ctx->pc = 0x2ee28cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee290: 0xa2800058  sb          $zero, 0x58($s4)
    ctx->pc = 0x2ee290u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee294: 0xa680005a  sh          $zero, 0x5A($s4)
    ctx->pc = 0x2ee294u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ee298: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE298u;
    {
        const bool branch_taken_0x2ee298 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE298u;
            // 0x2ee29c: 0xae80005c  sw          $zero, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee298) {
            ctx->pc = 0x2EE2B0u;
            goto label_2ee2b0;
        }
    }
    ctx->pc = 0x2EE2A0u;
    // 0x2ee2a0: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x2ee2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x2ee2a4: 0x34428208  ori         $v0, $v0, 0x8208
    ctx->pc = 0x2ee2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33288);
    // 0x2ee2a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE2A8u;
    {
        const bool branch_taken_0x2ee2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE2A8u;
            // 0x2ee2ac: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee2a8) {
            ctx->pc = 0x2EE2BCu;
            goto label_2ee2bc;
        }
    }
    ctx->pc = 0x2EE2B0u;
label_2ee2b0:
    // 0x2ee2b0: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x2ee2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x2ee2b4: 0x34422f70  ori         $v0, $v0, 0x2F70
    ctx->pc = 0x2ee2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12144);
    // 0x2ee2b8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x2ee2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2ee2bc:
    // 0x2ee2bc: 0x28a203e8  slti        $v0, $a1, 0x3E8
    ctx->pc = 0x2ee2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2ee2c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE2C0u;
    {
        const bool branch_taken_0x2ee2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee2c0) {
            ctx->pc = 0x2EE2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE2C0u;
            // 0x2ee2c4: 0x3c040007  lui         $a0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE2D0u;
            goto label_2ee2d0;
        }
    }
    ctx->pc = 0x2EE2C8u;
    // 0x2ee2c8: 0x24a5fc18  addiu       $a1, $a1, -0x3E8
    ctx->pc = 0x2ee2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966296));
    // 0x2ee2cc: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x2ee2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
label_2ee2d0:
    // 0x2ee2d0: 0x348281e0  ori         $v0, $a0, 0x81E0
    ctx->pc = 0x2ee2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33248);
    // 0x2ee2d4: 0x5242002a  beql        $s2, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2EE2D4u;
    {
        const bool branch_taken_0x2ee2d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee2d4) {
            ctx->pc = 0x2EE2D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE2D4u;
            // 0x2ee2d8: 0xa2800055  sb          $zero, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2EE2DCu;
    // 0x2ee2dc: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2ee2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2ee2e0: 0x3462d478  ori         $v0, $v1, 0xD478
    ctx->pc = 0x2ee2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54392);
    // 0x2ee2e4: 0x12420015  beq         $s2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE2E4u;
    {
        const bool branch_taken_0x2ee2e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee2e4) {
            ctx->pc = 0x2EE33Cu;
            goto label_2ee33c;
        }
    }
    ctx->pc = 0x2EE2ECu;
    // 0x2ee2ec: 0x348289b0  ori         $v0, $a0, 0x89B0
    ctx->pc = 0x2ee2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)35248);
    // 0x2ee2f0: 0x52420010  beql        $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE2F0u;
    {
        const bool branch_taken_0x2ee2f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee2f0) {
            ctx->pc = 0x2EE2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE2F0u;
            // 0x2ee2f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE334u;
            goto label_2ee334;
        }
    }
    ctx->pc = 0x2EE2F8u;
    // 0x2ee2f8: 0x3462dc48  ori         $v0, $v1, 0xDC48
    ctx->pc = 0x2ee2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56392);
    // 0x2ee2fc: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE2FCu;
    {
        const bool branch_taken_0x2ee2fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee2fc) {
            ctx->pc = 0x2EE330u;
            goto label_2ee330;
        }
    }
    ctx->pc = 0x2EE304u;
    // 0x2ee304: 0x34827df8  ori         $v0, $a0, 0x7DF8
    ctx->pc = 0x2ee304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32248);
    // 0x2ee308: 0x52420007  beql        $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE308u;
    {
        const bool branch_taken_0x2ee308 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee308) {
            ctx->pc = 0x2EE30Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE308u;
            // 0x2ee30c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE328u;
            goto label_2ee328;
        }
    }
    ctx->pc = 0x2EE310u;
    // 0x2ee310: 0x3462d090  ori         $v0, $v1, 0xD090
    ctx->pc = 0x2ee310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53392);
    // 0x2ee314: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE314u;
    {
        const bool branch_taken_0x2ee314 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee314) {
            ctx->pc = 0x2EE324u;
            goto label_2ee324;
        }
    }
    ctx->pc = 0x2EE31Cu;
    // 0x2ee31c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EE31Cu;
    {
        const bool branch_taken_0x2ee31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee31c) {
            ctx->pc = 0x2EE348u;
            goto label_2ee348;
        }
    }
    ctx->pc = 0x2EE324u;
label_2ee324:
    // 0x2ee324: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ee324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ee328:
    // 0x2ee328: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE328u;
    {
        const bool branch_taken_0x2ee328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE328u;
            // 0x2ee32c: 0xa2820055  sb          $v0, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee328) {
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2EE330u;
label_2ee330:
    // 0x2ee330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee334:
    // 0x2ee334: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EE334u;
    {
        const bool branch_taken_0x2ee334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE334u;
            // 0x2ee338: 0xa2820055  sb          $v0, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee334) {
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2EE33Cu;
label_2ee33c:
    // 0x2ee33c: 0xa2800055  sb          $zero, 0x55($s4)
    ctx->pc = 0x2ee33cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee340: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EE340u;
    {
        const bool branch_taken_0x2ee340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee340) {
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2EE348u;
label_2ee348:
    // 0x2ee348: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2EE348u;
    {
        const bool branch_taken_0x2ee348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee348) {
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2EE350u;
    // 0x2ee350: 0x92830058  lbu         $v1, 0x58($s4)
    ctx->pc = 0x2ee350u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x2ee354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ee354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee358: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE358u;
    {
        const bool branch_taken_0x2ee358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee358) {
            ctx->pc = 0x2EE35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE358u;
            // 0x2ee35c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE37Cu;
            goto label_2ee37c;
        }
    }
    ctx->pc = 0x2EE360u;
    // 0x2ee360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee364: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE364u;
    {
        const bool branch_taken_0x2ee364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee364) {
            ctx->pc = 0x2EE368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE364u;
            // 0x2ee368: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE374u;
            goto label_2ee374;
        }
    }
    ctx->pc = 0x2EE36Cu;
    // 0x2ee36c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE36Cu;
    {
        const bool branch_taken_0x2ee36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee36c) {
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2EE374u;
label_2ee374:
    // 0x2ee374: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE374u;
    {
        const bool branch_taken_0x2ee374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE374u;
            // 0x2ee378: 0xa2820055  sb          $v0, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee374) {
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2EE37Cu;
label_2ee37c:
    // 0x2ee37c: 0xa2820055  sb          $v0, 0x55($s4)
    ctx->pc = 0x2ee37cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 2));
label_2ee380:
    // 0x2ee380: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2ee380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ee384: 0xc040180  jal         func_100600
    ctx->pc = 0x2EE384u;
    SET_GPR_U32(ctx, 31, 0x2EE38Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE38Cu; }
        if (ctx->pc != 0x2EE38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE38Cu; }
        if (ctx->pc != 0x2EE38Cu) { return; }
    }
    ctx->pc = 0x2EE38Cu;
label_2ee38c:
    // 0x2ee38c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2EE38Cu;
    {
        const bool branch_taken_0x2ee38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE38Cu;
            // 0x2ee390: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee38c) {
            ctx->pc = 0x2EE4C8u;
            goto label_2ee4c8;
        }
    }
    ctx->pc = 0x2EE394u;
    // 0x2ee394: 0x26120bb8  addiu       $s2, $s0, 0xBB8
    ctx->pc = 0x2ee394u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3000));
    // 0x2ee398: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ee398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee39c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ee39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ee3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee3a8: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2EE3A8u;
    SET_GPR_U32(ctx, 31, 0x2EE3B0u);
    ctx->pc = 0x2EE3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE3A8u;
            // 0x2ee3ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE3B0u; }
        if (ctx->pc != 0x2EE3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE3B0u; }
        if (ctx->pc != 0x2EE3B0u) { return; }
    }
    ctx->pc = 0x2EE3B0u;
label_2ee3b0:
    // 0x2ee3b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ee3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ee3b4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2ee3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2ee3b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2ee3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2ee3bc: 0x24843110  addiu       $a0, $a0, 0x3110
    ctx->pc = 0x2ee3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12560));
    // 0x2ee3c0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2ee3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2ee3c4: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x2ee3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x2ee3c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee3cc: 0xa2910054  sb          $s1, 0x54($s4)
    ctx->pc = 0x2ee3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 84), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ee3d0: 0xa2800056  sb          $zero, 0x56($s4)
    ctx->pc = 0x2ee3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee3d4: 0xa2830057  sb          $v1, 0x57($s4)
    ctx->pc = 0x2ee3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 87), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee3d8: 0xa2800058  sb          $zero, 0x58($s4)
    ctx->pc = 0x2ee3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee3dc: 0xa680005a  sh          $zero, 0x5A($s4)
    ctx->pc = 0x2ee3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ee3e0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE3E0u;
    {
        const bool branch_taken_0x2ee3e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE3E0u;
            // 0x2ee3e4: 0xae80005c  sw          $zero, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee3e0) {
            ctx->pc = 0x2EE3F8u;
            goto label_2ee3f8;
        }
    }
    ctx->pc = 0x2EE3E8u;
    // 0x2ee3e8: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x2ee3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x2ee3ec: 0x34638208  ori         $v1, $v1, 0x8208
    ctx->pc = 0x2ee3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33288);
    // 0x2ee3f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE3F0u;
    {
        const bool branch_taken_0x2ee3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE3F0u;
            // 0x2ee3f4: 0x2433021  addu        $a2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee3f0) {
            ctx->pc = 0x2EE404u;
            goto label_2ee404;
        }
    }
    ctx->pc = 0x2EE3F8u;
label_2ee3f8:
    // 0x2ee3f8: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x2ee3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x2ee3fc: 0x34632f70  ori         $v1, $v1, 0x2F70
    ctx->pc = 0x2ee3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12144);
    // 0x2ee400: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x2ee400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2ee404:
    // 0x2ee404: 0x28c303e8  slti        $v1, $a2, 0x3E8
    ctx->pc = 0x2ee404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2ee408: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE408u;
    {
        const bool branch_taken_0x2ee408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee408) {
            ctx->pc = 0x2EE40Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE408u;
            // 0x2ee40c: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE418u;
            goto label_2ee418;
        }
    }
    ctx->pc = 0x2EE410u;
    // 0x2ee410: 0x24c6fc18  addiu       $a2, $a2, -0x3E8
    ctx->pc = 0x2ee410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966296));
    // 0x2ee414: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ee414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ee418:
    // 0x2ee418: 0x34a381e0  ori         $v1, $a1, 0x81E0
    ctx->pc = 0x2ee418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33248);
    // 0x2ee41c: 0x5243002a  beql        $s2, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2EE41Cu;
    {
        const bool branch_taken_0x2ee41c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee41c) {
            ctx->pc = 0x2EE420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE41Cu;
            // 0x2ee420: 0xa2800055  sb          $zero, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE4C8u;
            goto label_2ee4c8;
        }
    }
    ctx->pc = 0x2EE424u;
    // 0x2ee424: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2ee424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2ee428: 0x3483d478  ori         $v1, $a0, 0xD478
    ctx->pc = 0x2ee428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54392);
    // 0x2ee42c: 0x12430015  beq         $s2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE42Cu;
    {
        const bool branch_taken_0x2ee42c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee42c) {
            ctx->pc = 0x2EE484u;
            goto label_2ee484;
        }
    }
    ctx->pc = 0x2EE434u;
    // 0x2ee434: 0x34a389b0  ori         $v1, $a1, 0x89B0
    ctx->pc = 0x2ee434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35248);
    // 0x2ee438: 0x52430010  beql        $s2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE438u;
    {
        const bool branch_taken_0x2ee438 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee438) {
            ctx->pc = 0x2EE43Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE438u;
            // 0x2ee43c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE47Cu;
            goto label_2ee47c;
        }
    }
    ctx->pc = 0x2EE440u;
    // 0x2ee440: 0x3483dc48  ori         $v1, $a0, 0xDC48
    ctx->pc = 0x2ee440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56392);
    // 0x2ee444: 0x1243000c  beq         $s2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE444u;
    {
        const bool branch_taken_0x2ee444 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee444) {
            ctx->pc = 0x2EE478u;
            goto label_2ee478;
        }
    }
    ctx->pc = 0x2EE44Cu;
    // 0x2ee44c: 0x34a37df8  ori         $v1, $a1, 0x7DF8
    ctx->pc = 0x2ee44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32248);
    // 0x2ee450: 0x52430007  beql        $s2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE450u;
    {
        const bool branch_taken_0x2ee450 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee450) {
            ctx->pc = 0x2EE454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE450u;
            // 0x2ee454: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE470u;
            goto label_2ee470;
        }
    }
    ctx->pc = 0x2EE458u;
    // 0x2ee458: 0x3483d090  ori         $v1, $a0, 0xD090
    ctx->pc = 0x2ee458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53392);
    // 0x2ee45c: 0x12430003  beq         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE45Cu;
    {
        const bool branch_taken_0x2ee45c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee45c) {
            ctx->pc = 0x2EE46Cu;
            goto label_2ee46c;
        }
    }
    ctx->pc = 0x2EE464u;
    // 0x2ee464: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EE464u;
    {
        const bool branch_taken_0x2ee464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee464) {
            ctx->pc = 0x2EE490u;
            goto label_2ee490;
        }
    }
    ctx->pc = 0x2EE46Cu;
label_2ee46c:
    // 0x2ee46c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ee46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ee470:
    // 0x2ee470: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE470u;
    {
        const bool branch_taken_0x2ee470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE470u;
            // 0x2ee474: 0xa2830055  sb          $v1, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee470) {
            ctx->pc = 0x2EE4C8u;
            goto label_2ee4c8;
        }
    }
    ctx->pc = 0x2EE478u;
label_2ee478:
    // 0x2ee478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee47c:
    // 0x2ee47c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EE47Cu;
    {
        const bool branch_taken_0x2ee47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE47Cu;
            // 0x2ee480: 0xa2830055  sb          $v1, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee47c) {
            ctx->pc = 0x2EE4C8u;
            goto label_2ee4c8;
        }
    }
    ctx->pc = 0x2EE484u;
label_2ee484:
    // 0x2ee484: 0xa2800055  sb          $zero, 0x55($s4)
    ctx->pc = 0x2ee484u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee488: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EE488u;
    {
        const bool branch_taken_0x2ee488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee488) {
            ctx->pc = 0x2EE4C8u;
            goto label_2ee4c8;
        }
    }
    ctx->pc = 0x2EE490u;
label_2ee490:
    // 0x2ee490: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2EE490u;
    {
        const bool branch_taken_0x2ee490 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee490) {
            ctx->pc = 0x2EE4C8u;
            goto label_2ee4c8;
        }
    }
    ctx->pc = 0x2EE498u;
    // 0x2ee498: 0x92840058  lbu         $a0, 0x58($s4)
    ctx->pc = 0x2ee498u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x2ee49c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ee49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee4a0: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE4A0u;
    {
        const bool branch_taken_0x2ee4a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee4a0) {
            ctx->pc = 0x2EE4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE4A0u;
            // 0x2ee4a4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE4C4u;
            goto label_2ee4c4;
        }
    }
    ctx->pc = 0x2EE4A8u;
    // 0x2ee4a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee4ac: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE4ACu;
    {
        const bool branch_taken_0x2ee4ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee4ac) {
            ctx->pc = 0x2EE4B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE4ACu;
            // 0x2ee4b0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE4BCu;
            goto label_2ee4bc;
        }
    }
    ctx->pc = 0x2EE4B4u;
    // 0x2ee4b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE4B4u;
    {
        const bool branch_taken_0x2ee4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee4b4) {
            ctx->pc = 0x2EE4C8u;
            goto label_2ee4c8;
        }
    }
    ctx->pc = 0x2EE4BCu;
label_2ee4bc:
    // 0x2ee4bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE4BCu;
    {
        const bool branch_taken_0x2ee4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE4BCu;
            // 0x2ee4c0: 0xa2830055  sb          $v1, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4bc) {
            ctx->pc = 0x2EE4C8u;
            goto label_2ee4c8;
        }
    }
    ctx->pc = 0x2EE4C4u;
label_2ee4c4:
    // 0x2ee4c4: 0xa2830055  sb          $v1, 0x55($s4)
    ctx->pc = 0x2ee4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 3));
label_2ee4c8:
    // 0x2ee4c8: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x2ee4c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2ee4cc:
    // 0x2ee4cc: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x2ee4ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ee4d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ee4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee4d4: 0x1243024e  beq         $s2, $v1, . + 4 + (0x24E << 2)
    ctx->pc = 0x2EE4D4u;
    {
        const bool branch_taken_0x2ee4d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee4d4) {
            ctx->pc = 0x2EEE10u;
            goto label_2eee10;
        }
    }
    ctx->pc = 0x2EE4DCu;
    // 0x2ee4dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee4e0: 0x124300ee  beq         $s2, $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x2EE4E0u;
    {
        const bool branch_taken_0x2ee4e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee4e0) {
            ctx->pc = 0x2EE89Cu;
            goto label_2ee89c;
        }
    }
    ctx->pc = 0x2EE4E8u;
    // 0x2ee4e8: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE4E8u;
    {
        const bool branch_taken_0x2ee4e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee4e8) {
            ctx->pc = 0x2EE4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE4E8u;
            // 0x2ee4ec: 0x7ba301a0  lq          $v1, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE4F8u;
            goto label_2ee4f8;
        }
    }
    ctx->pc = 0x2EE4F0u;
    // 0x2ee4f0: 0x1000041d  b           . + 4 + (0x41D << 2)
    ctx->pc = 0x2EE4F0u;
    {
        const bool branch_taken_0x2ee4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE4F0u;
            // 0x2ee4f4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4f0) {
            ctx->pc = 0x2EF568u;
            goto label_2ef568;
        }
    }
    ctx->pc = 0x2EE4F8u;
label_2ee4f8:
    // 0x2ee4f8: 0x307e00ff  andi        $fp, $v1, 0xFF
    ctx->pc = 0x2ee4f8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ee4fc: 0x1bc00419  blez        $fp, . + 4 + (0x419 << 2)
    ctx->pc = 0x2EE4FCu;
    {
        const bool branch_taken_0x2ee4fc = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x2ee4fc) {
            ctx->pc = 0x2EF564u;
            goto label_2ef564;
        }
    }
    ctx->pc = 0x2EE504u;
    // 0x2ee504: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2ee504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ee508: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x2ee508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2ee50c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2ee50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2ee510: 0x240601ae  addiu       $a2, $zero, 0x1AE
    ctx->pc = 0x2ee510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2ee514: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ee514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ee518: 0x2404035c  addiu       $a0, $zero, 0x35C
    ctx->pc = 0x2ee518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2ee51c: 0x7fa30180  sq          $v1, 0x180($sp)
    ctx->pc = 0x2ee51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 3));
    // 0x2ee520: 0xa61818  mult        $v1, $a1, $a2
    ctx->pc = 0x2ee520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ee524: 0x72e43018  mult1       $a2, $s7, $a0
    ctx->pc = 0x2ee524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2ee528: 0x7fa30170  sq          $v1, 0x170($sp)
    ctx->pc = 0x2ee528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 3));
    // 0x2ee52c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ee52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ee530: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x2ee530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x2ee534: 0x24841630  addiu       $a0, $a0, 0x1630
    ctx->pc = 0x2ee534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5680));
    // 0x2ee538: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x2ee538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2ee53c: 0x7ba40170  lq          $a0, 0x170($sp)
    ctx->pc = 0x2ee53cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2ee540: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x2ee540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2ee544: 0x7ba40180  lq          $a0, 0x180($sp)
    ctx->pc = 0x2ee544u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2ee548: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2ee548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2ee54c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ee54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee550: 0x7fa40160  sq          $a0, 0x160($sp)
    ctx->pc = 0x2ee550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 4));
    // 0x2ee554: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2ee554u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee558: 0x54800066  bnel        $a0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x2EE558u;
    {
        const bool branch_taken_0x2ee558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee558) {
            ctx->pc = 0x2EE55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE558u;
            // 0x2ee55c: 0x7ba30160  lq          $v1, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE6F4u;
            goto label_2ee6f4;
        }
    }
    ctx->pc = 0x2EE560u;
    // 0x2ee560: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2ee560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2ee564: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2ee564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ee568: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2ee568u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ee56c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ee56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ee570: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ee570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ee574: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ee574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ee578: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x2ee578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ee57c: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x2ee57cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2ee580: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2ee580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ee584: 0xc040180  jal         func_100600
    ctx->pc = 0x2EE584u;
    SET_GPR_U32(ctx, 31, 0x2EE58Cu);
    ctx->pc = 0x2EE588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE584u;
            // 0x2ee588: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE58Cu; }
        if (ctx->pc != 0x2EE58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE58Cu; }
        if (ctx->pc != 0x2EE58Cu) { return; }
    }
    ctx->pc = 0x2EE58Cu;
label_2ee58c:
    // 0x2ee58c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2EE58Cu;
    {
        const bool branch_taken_0x2ee58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE58Cu;
            // 0x2ee590: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee58c) {
            ctx->pc = 0x2EE6F0u;
            goto label_2ee6f0;
        }
    }
    ctx->pc = 0x2EE594u;
    // 0x2ee594: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ee594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ee598: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ee598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee59c: 0x8c4214d8  lw          $v0, 0x14D8($v0)
    ctx->pc = 0x2ee59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ee5a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ee5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ee5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee5ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ee5acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5b0: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2EE5B0u;
    SET_GPR_U32(ctx, 31, 0x2EE5B8u);
    ctx->pc = 0x2EE5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE5B0u;
            // 0x2ee5b4: 0x7fa20150  sq          $v0, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE5B8u; }
        if (ctx->pc != 0x2EE5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE5B8u; }
        if (ctx->pc != 0x2EE5B8u) { return; }
    }
    ctx->pc = 0x2EE5B8u;
label_2ee5b8:
    // 0x2ee5b8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2ee5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2ee5bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ee5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ee5c0: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x2ee5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
    // 0x2ee5c4: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x2ee5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
    // 0x2ee5c8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x2ee5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x2ee5cc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2ee5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2ee5d0: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x2ee5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2ee5d4: 0x7ba301a0  lq          $v1, 0x1A0($sp)
    ctx->pc = 0x2ee5d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2ee5d8: 0xa2910054  sb          $s1, 0x54($s4)
    ctx->pc = 0x2ee5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 84), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ee5dc: 0xa2830056  sb          $v1, 0x56($s4)
    ctx->pc = 0x2ee5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee5e0: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x2ee5e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2ee5e4: 0xa2930057  sb          $s3, 0x57($s4)
    ctx->pc = 0x2ee5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 87), (uint8_t)GPR_U32(ctx, 19));
    // 0x2ee5e8: 0xa2830058  sb          $v1, 0x58($s4)
    ctx->pc = 0x2ee5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee5ec: 0x7ba30150  lq          $v1, 0x150($sp)
    ctx->pc = 0x2ee5ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2ee5f0: 0xa684005a  sh          $a0, 0x5A($s4)
    ctx->pc = 0x2ee5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 90), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ee5f4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE5F4u;
    {
        const bool branch_taken_0x2ee5f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE5F4u;
            // 0x2ee5f8: 0xae83005c  sw          $v1, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5f4) {
            ctx->pc = 0x2EE60Cu;
            goto label_2ee60c;
        }
    }
    ctx->pc = 0x2EE5FCu;
    // 0x2ee5fc: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x2ee5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x2ee600: 0x34638208  ori         $v1, $v1, 0x8208
    ctx->pc = 0x2ee600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33288);
    // 0x2ee604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE604u;
    {
        const bool branch_taken_0x2ee604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE604u;
            // 0x2ee608: 0x2a33021  addu        $a2, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee604) {
            ctx->pc = 0x2EE618u;
            goto label_2ee618;
        }
    }
    ctx->pc = 0x2EE60Cu;
label_2ee60c:
    // 0x2ee60c: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x2ee60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x2ee610: 0x34632f70  ori         $v1, $v1, 0x2F70
    ctx->pc = 0x2ee610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12144);
    // 0x2ee614: 0x2a33021  addu        $a2, $s5, $v1
    ctx->pc = 0x2ee614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2ee618:
    // 0x2ee618: 0x28c303e8  slti        $v1, $a2, 0x3E8
    ctx->pc = 0x2ee618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2ee61c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE61Cu;
    {
        const bool branch_taken_0x2ee61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee61c) {
            ctx->pc = 0x2EE620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE61Cu;
            // 0x2ee620: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE62Cu;
            goto label_2ee62c;
        }
    }
    ctx->pc = 0x2EE624u;
    // 0x2ee624: 0x24c6fc18  addiu       $a2, $a2, -0x3E8
    ctx->pc = 0x2ee624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966296));
    // 0x2ee628: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ee628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ee62c:
    // 0x2ee62c: 0x34a381e0  ori         $v1, $a1, 0x81E0
    ctx->pc = 0x2ee62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33248);
    // 0x2ee630: 0x52a3002f  beql        $s5, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2EE630u;
    {
        const bool branch_taken_0x2ee630 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee630) {
            ctx->pc = 0x2EE634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE630u;
            // 0x2ee634: 0xa2800055  sb          $zero, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE6F0u;
            goto label_2ee6f0;
        }
    }
    ctx->pc = 0x2EE638u;
    // 0x2ee638: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2ee638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2ee63c: 0x3483d478  ori         $v1, $a0, 0xD478
    ctx->pc = 0x2ee63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54392);
    // 0x2ee640: 0x12a30015  beq         $s5, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE640u;
    {
        const bool branch_taken_0x2ee640 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee640) {
            ctx->pc = 0x2EE698u;
            goto label_2ee698;
        }
    }
    ctx->pc = 0x2EE648u;
    // 0x2ee648: 0x34a389b0  ori         $v1, $a1, 0x89B0
    ctx->pc = 0x2ee648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35248);
    // 0x2ee64c: 0x52a30010  beql        $s5, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE64Cu;
    {
        const bool branch_taken_0x2ee64c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee64c) {
            ctx->pc = 0x2EE650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE64Cu;
            // 0x2ee650: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE690u;
            goto label_2ee690;
        }
    }
    ctx->pc = 0x2EE654u;
    // 0x2ee654: 0x3483dc48  ori         $v1, $a0, 0xDC48
    ctx->pc = 0x2ee654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56392);
    // 0x2ee658: 0x12a3000c  beq         $s5, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE658u;
    {
        const bool branch_taken_0x2ee658 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee658) {
            ctx->pc = 0x2EE68Cu;
            goto label_2ee68c;
        }
    }
    ctx->pc = 0x2EE660u;
    // 0x2ee660: 0x34a37df8  ori         $v1, $a1, 0x7DF8
    ctx->pc = 0x2ee660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32248);
    // 0x2ee664: 0x52a30007  beql        $s5, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE664u;
    {
        const bool branch_taken_0x2ee664 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee664) {
            ctx->pc = 0x2EE668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE664u;
            // 0x2ee668: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE684u;
            goto label_2ee684;
        }
    }
    ctx->pc = 0x2EE66Cu;
    // 0x2ee66c: 0x3483d090  ori         $v1, $a0, 0xD090
    ctx->pc = 0x2ee66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53392);
    // 0x2ee670: 0x12a30003  beq         $s5, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE670u;
    {
        const bool branch_taken_0x2ee670 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee670) {
            ctx->pc = 0x2EE680u;
            goto label_2ee680;
        }
    }
    ctx->pc = 0x2EE678u;
    // 0x2ee678: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EE678u;
    {
        const bool branch_taken_0x2ee678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee678) {
            ctx->pc = 0x2EE6A4u;
            goto label_2ee6a4;
        }
    }
    ctx->pc = 0x2EE680u;
label_2ee680:
    // 0x2ee680: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ee680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ee684:
    // 0x2ee684: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2EE684u;
    {
        const bool branch_taken_0x2ee684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE684u;
            // 0x2ee688: 0xa2830055  sb          $v1, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee684) {
            ctx->pc = 0x2EE6F0u;
            goto label_2ee6f0;
        }
    }
    ctx->pc = 0x2EE68Cu;
label_2ee68c:
    // 0x2ee68c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee690:
    // 0x2ee690: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2EE690u;
    {
        const bool branch_taken_0x2ee690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE690u;
            // 0x2ee694: 0xa2830055  sb          $v1, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee690) {
            ctx->pc = 0x2EE6F0u;
            goto label_2ee6f0;
        }
    }
    ctx->pc = 0x2EE698u;
label_2ee698:
    // 0x2ee698: 0xa2800055  sb          $zero, 0x55($s4)
    ctx->pc = 0x2ee698u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee69c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2EE69Cu;
    {
        const bool branch_taken_0x2ee69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee69c) {
            ctx->pc = 0x2EE6F0u;
            goto label_2ee6f0;
        }
    }
    ctx->pc = 0x2EE6A4u;
label_2ee6a4:
    // 0x2ee6a4: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EE6A4u;
    {
        const bool branch_taken_0x2ee6a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee6a4) {
            ctx->pc = 0x2EE6F0u;
            goto label_2ee6f0;
        }
    }
    ctx->pc = 0x2EE6ACu;
    // 0x2ee6ac: 0x53c00003  beql        $fp, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE6ACu;
    {
        const bool branch_taken_0x2ee6ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee6ac) {
            ctx->pc = 0x2EE6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE6ACu;
            // 0x2ee6b0: 0x92840058  lbu         $a0, 0x58($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE6BCu;
            goto label_2ee6bc;
        }
    }
    ctx->pc = 0x2EE6B4u;
    // 0x2ee6b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EE6B4u;
    {
        const bool branch_taken_0x2ee6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE6B4u;
            // 0x2ee6b8: 0x27c30001  addiu       $v1, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6b4) {
            ctx->pc = 0x2EE6ECu;
            goto label_2ee6ec;
        }
    }
    ctx->pc = 0x2EE6BCu;
label_2ee6bc:
    // 0x2ee6bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ee6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee6c0: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE6C0u;
    {
        const bool branch_taken_0x2ee6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee6c0) {
            ctx->pc = 0x2EE6C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE6C0u;
            // 0x2ee6c4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE6E4u;
            goto label_2ee6e4;
        }
    }
    ctx->pc = 0x2EE6C8u;
    // 0x2ee6c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee6cc: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE6CCu;
    {
        const bool branch_taken_0x2ee6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee6cc) {
            ctx->pc = 0x2EE6D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE6CCu;
            // 0x2ee6d0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE6DCu;
            goto label_2ee6dc;
        }
    }
    ctx->pc = 0x2EE6D4u;
    // 0x2ee6d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE6D4u;
    {
        const bool branch_taken_0x2ee6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee6d4) {
            ctx->pc = 0x2EE6F0u;
            goto label_2ee6f0;
        }
    }
    ctx->pc = 0x2EE6DCu;
label_2ee6dc:
    // 0x2ee6dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE6DCu;
    {
        const bool branch_taken_0x2ee6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE6DCu;
            // 0x2ee6e0: 0xa2830055  sb          $v1, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6dc) {
            ctx->pc = 0x2EE6F0u;
            goto label_2ee6f0;
        }
    }
    ctx->pc = 0x2EE6E4u;
label_2ee6e4:
    // 0x2ee6e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE6E4u;
    {
        const bool branch_taken_0x2ee6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE6E4u;
            // 0x2ee6e8: 0xa2830055  sb          $v1, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6e4) {
            ctx->pc = 0x2EE6F0u;
            goto label_2ee6f0;
        }
    }
    ctx->pc = 0x2EE6ECu;
label_2ee6ec:
    // 0x2ee6ec: 0xa2830055  sb          $v1, 0x55($s4)
    ctx->pc = 0x2ee6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 3));
label_2ee6f0:
    // 0x2ee6f0: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x2ee6f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_2ee6f4:
    // 0x2ee6f4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ee6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ee6f8: 0x24841638  addiu       $a0, $a0, 0x1638
    ctx->pc = 0x2ee6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5688));
    // 0x2ee6fc: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x2ee6fcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ee700: 0x2403035c  addiu       $v1, $zero, 0x35C
    ctx->pc = 0x2ee700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2ee704: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ee704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ee708: 0x2e32818  mult        $a1, $s7, $v1
    ctx->pc = 0x2ee708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ee70c: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x2ee70cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2ee710: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ee710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ee714: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x2ee714u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ee718: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x2ee718u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2ee71c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ee71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee720: 0x7ba30180  lq          $v1, 0x180($sp)
    ctx->pc = 0x2ee720u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2ee724: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x2ee724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee728: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2ee728u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ee72c: 0x1460038d  bnez        $v1, . + 4 + (0x38D << 2)
    ctx->pc = 0x2EE72Cu;
    {
        const bool branch_taken_0x2ee72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee72c) {
            ctx->pc = 0x2EF564u;
            goto label_2ef564;
        }
    }
    ctx->pc = 0x2EE734u;
    // 0x2ee734: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x2ee734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2ee738: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2ee738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ee73c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2ee73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2ee740: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2ee740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ee744: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ee744u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ee748: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ee748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ee74c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ee74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ee750: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2ee750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ee754: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ee754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ee758: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ee758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ee75c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2ee75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ee760: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ee760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ee764: 0xc040180  jal         func_100600
    ctx->pc = 0x2EE764u;
    SET_GPR_U32(ctx, 31, 0x2EE76Cu);
    ctx->pc = 0x2EE768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE764u;
            // 0x2ee768: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE76Cu; }
        if (ctx->pc != 0x2EE76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE76Cu; }
        if (ctx->pc != 0x2EE76Cu) { return; }
    }
    ctx->pc = 0x2EE76Cu;
label_2ee76c:
    // 0x2ee76c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2EE76Cu;
    {
        const bool branch_taken_0x2ee76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE76Cu;
            // 0x2ee770: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee76c) {
            ctx->pc = 0x2EE88Cu;
            goto label_2ee88c;
        }
    }
    ctx->pc = 0x2EE774u;
    // 0x2ee774: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ee774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ee778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ee778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee77c: 0x8c5514d8  lw          $s5, 0x14D8($v0)
    ctx->pc = 0x2ee77cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ee780: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ee780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee788: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ee788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee78c: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2EE78Cu;
    SET_GPR_U32(ctx, 31, 0x2EE794u);
    ctx->pc = 0x2EE790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE78Cu;
            // 0x2ee790: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE794u; }
        if (ctx->pc != 0x2EE794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE794u; }
        if (ctx->pc != 0x2EE794u) { return; }
    }
    ctx->pc = 0x2EE794u;
label_2ee794:
    // 0x2ee794: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ee794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ee798: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x2ee798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2ee79c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2ee79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2ee7a0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2ee7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2ee7a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ee7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ee7a8: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x2ee7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
    // 0x2ee7ac: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2ee7acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2ee7b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ee7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ee7b4: 0xa2510054  sb          $s1, 0x54($s2)
    ctx->pc = 0x2ee7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ee7b8: 0xa2430056  sb          $v1, 0x56($s2)
    ctx->pc = 0x2ee7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee7bc: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x2ee7bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2ee7c0: 0xa2530057  sb          $s3, 0x57($s2)
    ctx->pc = 0x2ee7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 87), (uint8_t)GPR_U32(ctx, 19));
    // 0x2ee7c4: 0xa2430058  sb          $v1, 0x58($s2)
    ctx->pc = 0x2ee7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee7c8: 0xa644005a  sh          $a0, 0x5A($s2)
    ctx->pc = 0x2ee7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 90), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ee7cc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE7CCu;
    {
        const bool branch_taken_0x2ee7cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE7CCu;
            // 0x2ee7d0: 0xae55005c  sw          $s5, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7cc) {
            ctx->pc = 0x2EE7E4u;
            goto label_2ee7e4;
        }
    }
    ctx->pc = 0x2EE7D4u;
    // 0x2ee7d4: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x2ee7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x2ee7d8: 0x34638208  ori         $v1, $v1, 0x8208
    ctx->pc = 0x2ee7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33288);
    // 0x2ee7dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE7DCu;
    {
        const bool branch_taken_0x2ee7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE7DCu;
            // 0x2ee7e0: 0x2033021  addu        $a2, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7dc) {
            ctx->pc = 0x2EE7F0u;
            goto label_2ee7f0;
        }
    }
    ctx->pc = 0x2EE7E4u;
label_2ee7e4:
    // 0x2ee7e4: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x2ee7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x2ee7e8: 0x34632f70  ori         $v1, $v1, 0x2F70
    ctx->pc = 0x2ee7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12144);
    // 0x2ee7ec: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x2ee7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2ee7f0:
    // 0x2ee7f0: 0x28c303e8  slti        $v1, $a2, 0x3E8
    ctx->pc = 0x2ee7f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2ee7f4: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE7F4u;
    {
        const bool branch_taken_0x2ee7f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee7f4) {
            ctx->pc = 0x2EE7F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE7F4u;
            // 0x2ee7f8: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE804u;
            goto label_2ee804;
        }
    }
    ctx->pc = 0x2EE7FCu;
    // 0x2ee7fc: 0x24c6fc18  addiu       $a2, $a2, -0x3E8
    ctx->pc = 0x2ee7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966296));
    // 0x2ee800: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ee800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ee804:
    // 0x2ee804: 0x34a381e0  ori         $v1, $a1, 0x81E0
    ctx->pc = 0x2ee804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33248);
    // 0x2ee808: 0x52030020  beql        $s0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EE808u;
    {
        const bool branch_taken_0x2ee808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee808) {
            ctx->pc = 0x2EE80Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE808u;
            // 0x2ee80c: 0xa2400055  sb          $zero, 0x55($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE88Cu;
            goto label_2ee88c;
        }
    }
    ctx->pc = 0x2EE810u;
    // 0x2ee810: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2ee810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2ee814: 0x3483d478  ori         $v1, $a0, 0xD478
    ctx->pc = 0x2ee814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54392);
    // 0x2ee818: 0x12030015  beq         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE818u;
    {
        const bool branch_taken_0x2ee818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee818) {
            ctx->pc = 0x2EE870u;
            goto label_2ee870;
        }
    }
    ctx->pc = 0x2EE820u;
    // 0x2ee820: 0x34a389b0  ori         $v1, $a1, 0x89B0
    ctx->pc = 0x2ee820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35248);
    // 0x2ee824: 0x52030010  beql        $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE824u;
    {
        const bool branch_taken_0x2ee824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee824) {
            ctx->pc = 0x2EE828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE824u;
            // 0x2ee828: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE868u;
            goto label_2ee868;
        }
    }
    ctx->pc = 0x2EE82Cu;
    // 0x2ee82c: 0x3483dc48  ori         $v1, $a0, 0xDC48
    ctx->pc = 0x2ee82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56392);
    // 0x2ee830: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE830u;
    {
        const bool branch_taken_0x2ee830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee830) {
            ctx->pc = 0x2EE864u;
            goto label_2ee864;
        }
    }
    ctx->pc = 0x2EE838u;
    // 0x2ee838: 0x34a37df8  ori         $v1, $a1, 0x7DF8
    ctx->pc = 0x2ee838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32248);
    // 0x2ee83c: 0x52030007  beql        $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE83Cu;
    {
        const bool branch_taken_0x2ee83c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee83c) {
            ctx->pc = 0x2EE840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE83Cu;
            // 0x2ee840: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE85Cu;
            goto label_2ee85c;
        }
    }
    ctx->pc = 0x2EE844u;
    // 0x2ee844: 0x3483d090  ori         $v1, $a0, 0xD090
    ctx->pc = 0x2ee844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53392);
    // 0x2ee848: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE848u;
    {
        const bool branch_taken_0x2ee848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee848) {
            ctx->pc = 0x2EE858u;
            goto label_2ee858;
        }
    }
    ctx->pc = 0x2EE850u;
    // 0x2ee850: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EE850u;
    {
        const bool branch_taken_0x2ee850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee850) {
            ctx->pc = 0x2EE87Cu;
            goto label_2ee87c;
        }
    }
    ctx->pc = 0x2EE858u;
label_2ee858:
    // 0x2ee858: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ee858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ee85c:
    // 0x2ee85c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EE85Cu;
    {
        const bool branch_taken_0x2ee85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE85Cu;
            // 0x2ee860: 0xa2430055  sb          $v1, 0x55($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee85c) {
            ctx->pc = 0x2EE88Cu;
            goto label_2ee88c;
        }
    }
    ctx->pc = 0x2EE864u;
label_2ee864:
    // 0x2ee864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee868:
    // 0x2ee868: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE868u;
    {
        const bool branch_taken_0x2ee868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE868u;
            // 0x2ee86c: 0xa2430055  sb          $v1, 0x55($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee868) {
            ctx->pc = 0x2EE88Cu;
            goto label_2ee88c;
        }
    }
    ctx->pc = 0x2EE870u;
label_2ee870:
    // 0x2ee870: 0xa2400055  sb          $zero, 0x55($s2)
    ctx->pc = 0x2ee870u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee874: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE874u;
    {
        const bool branch_taken_0x2ee874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee874) {
            ctx->pc = 0x2EE88Cu;
            goto label_2ee88c;
        }
    }
    ctx->pc = 0x2EE87Cu;
label_2ee87c:
    // 0x2ee87c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE87Cu;
    {
        const bool branch_taken_0x2ee87c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee87c) {
            ctx->pc = 0x2EE88Cu;
            goto label_2ee88c;
        }
    }
    ctx->pc = 0x2EE884u;
    // 0x2ee884: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ee884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ee888: 0xa2430055  sb          $v1, 0x55($s2)
    ctx->pc = 0x2ee888u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 3));
label_2ee88c:
    // 0x2ee88c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2ee88cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ee890: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ee890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ee894: 0x10000333  b           . + 4 + (0x333 << 2)
    ctx->pc = 0x2EE894u;
    {
        const bool branch_taken_0x2ee894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE894u;
            // 0x2ee898: 0xa6830000  sh          $v1, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee894) {
            ctx->pc = 0x2EF564u;
            goto label_2ef564;
        }
    }
    ctx->pc = 0x2EE89Cu;
label_2ee89c:
    // 0x2ee89c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ee89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ee8a0: 0x327e00ff  andi        $fp, $s3, 0xFF
    ctx->pc = 0x2ee8a0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2ee8a4: 0x172880  sll         $a1, $s7, 2
    ctx->pc = 0x2ee8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2ee8a8: 0x248414e8  addiu       $a0, $a0, 0x14E8
    ctx->pc = 0x2ee8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5352));
    // 0x2ee8ac: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x2ee8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x2ee8b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ee8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ee8b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ee8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee8b8: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x2ee8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
    // 0x2ee8bc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2ee8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ee8c0: 0x5460005e  bnel        $v1, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x2EE8C0u;
    {
        const bool branch_taken_0x2ee8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee8c0) {
            ctx->pc = 0x2EE8C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE8C0u;
            // 0x2ee8c4: 0x8fa301e0  lw          $v1, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA3Cu;
            goto label_2eea3c;
        }
    }
    ctx->pc = 0x2EE8C8u;
    // 0x2ee8c8: 0x1e1140  sll         $v0, $fp, 5
    ctx->pc = 0x2ee8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x2ee8cc: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2ee8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ee8d0: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x2ee8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2ee8d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ee8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ee8d8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2ee8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2ee8dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ee8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ee8e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ee8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ee8e4: 0xc040180  jal         func_100600
    ctx->pc = 0x2EE8E4u;
    SET_GPR_U32(ctx, 31, 0x2EE8ECu);
    ctx->pc = 0x2EE8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE8E4u;
            // 0x2ee8e8: 0x2454000a  addiu       $s4, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE8ECu; }
        if (ctx->pc != 0x2EE8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE8ECu; }
        if (ctx->pc != 0x2EE8ECu) { return; }
    }
    ctx->pc = 0x2EE8ECu;
label_2ee8ec:
    // 0x2ee8ec: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2EE8ECu;
    {
        const bool branch_taken_0x2ee8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE8ECu;
            // 0x2ee8f0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8ec) {
            ctx->pc = 0x2EEA38u;
            goto label_2eea38;
        }
    }
    ctx->pc = 0x2EE8F4u;
    // 0x2ee8f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ee8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ee8f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ee8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8fc: 0x8c4214d8  lw          $v0, 0x14D8($v0)
    ctx->pc = 0x2ee8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ee900: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ee900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee908: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ee908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee90c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ee90cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee910: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2EE910u;
    SET_GPR_U32(ctx, 31, 0x2EE918u);
    ctx->pc = 0x2EE914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE910u;
            // 0x2ee914: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE918u; }
        if (ctx->pc != 0x2EE918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE918u; }
        if (ctx->pc != 0x2EE918u) { return; }
    }
    ctx->pc = 0x2EE918u;
label_2ee918:
    // 0x2ee918: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2ee918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2ee91c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ee91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ee920: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x2ee920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
    // 0x2ee924: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x2ee924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
    // 0x2ee928: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x2ee928u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x2ee92c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2ee92cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2ee930: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ee930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee934: 0xa2b10054  sb          $s1, 0x54($s5)
    ctx->pc = 0x2ee934u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ee938: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x2ee938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2ee93c: 0xa2a00056  sb          $zero, 0x56($s5)
    ctx->pc = 0x2ee93cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee940: 0xa2b30057  sb          $s3, 0x57($s5)
    ctx->pc = 0x2ee940u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 87), (uint8_t)GPR_U32(ctx, 19));
    // 0x2ee944: 0xa2a40058  sb          $a0, 0x58($s5)
    ctx->pc = 0x2ee944u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 88), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ee948: 0xa6a3005a  sh          $v1, 0x5A($s5)
    ctx->pc = 0x2ee948u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 90), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ee94c: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x2ee94cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2ee950: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE950u;
    {
        const bool branch_taken_0x2ee950 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE950u;
            // 0x2ee954: 0xaea3005c  sw          $v1, 0x5C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee950) {
            ctx->pc = 0x2EE968u;
            goto label_2ee968;
        }
    }
    ctx->pc = 0x2EE958u;
    // 0x2ee958: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x2ee958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x2ee95c: 0x34638208  ori         $v1, $v1, 0x8208
    ctx->pc = 0x2ee95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33288);
    // 0x2ee960: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE960u;
    {
        const bool branch_taken_0x2ee960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE960u;
            // 0x2ee964: 0x2833021  addu        $a2, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee960) {
            ctx->pc = 0x2EE974u;
            goto label_2ee974;
        }
    }
    ctx->pc = 0x2EE968u;
label_2ee968:
    // 0x2ee968: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x2ee968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x2ee96c: 0x34632f70  ori         $v1, $v1, 0x2F70
    ctx->pc = 0x2ee96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12144);
    // 0x2ee970: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x2ee970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2ee974:
    // 0x2ee974: 0x28c303e8  slti        $v1, $a2, 0x3E8
    ctx->pc = 0x2ee974u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2ee978: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE978u;
    {
        const bool branch_taken_0x2ee978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee978) {
            ctx->pc = 0x2EE97Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE978u;
            // 0x2ee97c: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE988u;
            goto label_2ee988;
        }
    }
    ctx->pc = 0x2EE980u;
    // 0x2ee980: 0x24c6fc18  addiu       $a2, $a2, -0x3E8
    ctx->pc = 0x2ee980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966296));
    // 0x2ee984: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ee984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ee988:
    // 0x2ee988: 0x34a381e0  ori         $v1, $a1, 0x81E0
    ctx->pc = 0x2ee988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33248);
    // 0x2ee98c: 0x5283002a  beql        $s4, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2EE98Cu;
    {
        const bool branch_taken_0x2ee98c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee98c) {
            ctx->pc = 0x2EE990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE98Cu;
            // 0x2ee990: 0xa2a00055  sb          $zero, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA38u;
            goto label_2eea38;
        }
    }
    ctx->pc = 0x2EE994u;
    // 0x2ee994: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2ee994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2ee998: 0x3483d478  ori         $v1, $a0, 0xD478
    ctx->pc = 0x2ee998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54392);
    // 0x2ee99c: 0x12830015  beq         $s4, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE99Cu;
    {
        const bool branch_taken_0x2ee99c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee99c) {
            ctx->pc = 0x2EE9F4u;
            goto label_2ee9f4;
        }
    }
    ctx->pc = 0x2EE9A4u;
    // 0x2ee9a4: 0x34a389b0  ori         $v1, $a1, 0x89B0
    ctx->pc = 0x2ee9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35248);
    // 0x2ee9a8: 0x52830010  beql        $s4, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE9A8u;
    {
        const bool branch_taken_0x2ee9a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee9a8) {
            ctx->pc = 0x2EE9ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE9A8u;
            // 0x2ee9ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE9ECu;
            goto label_2ee9ec;
        }
    }
    ctx->pc = 0x2EE9B0u;
    // 0x2ee9b0: 0x3483dc48  ori         $v1, $a0, 0xDC48
    ctx->pc = 0x2ee9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56392);
    // 0x2ee9b4: 0x1283000c  beq         $s4, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE9B4u;
    {
        const bool branch_taken_0x2ee9b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee9b4) {
            ctx->pc = 0x2EE9E8u;
            goto label_2ee9e8;
        }
    }
    ctx->pc = 0x2EE9BCu;
    // 0x2ee9bc: 0x34a37df8  ori         $v1, $a1, 0x7DF8
    ctx->pc = 0x2ee9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32248);
    // 0x2ee9c0: 0x52830007  beql        $s4, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE9C0u;
    {
        const bool branch_taken_0x2ee9c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee9c0) {
            ctx->pc = 0x2EE9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE9C0u;
            // 0x2ee9c4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE9E0u;
            goto label_2ee9e0;
        }
    }
    ctx->pc = 0x2EE9C8u;
    // 0x2ee9c8: 0x3483d090  ori         $v1, $a0, 0xD090
    ctx->pc = 0x2ee9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53392);
    // 0x2ee9cc: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE9CCu;
    {
        const bool branch_taken_0x2ee9cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee9cc) {
            ctx->pc = 0x2EE9DCu;
            goto label_2ee9dc;
        }
    }
    ctx->pc = 0x2EE9D4u;
    // 0x2ee9d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EE9D4u;
    {
        const bool branch_taken_0x2ee9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee9d4) {
            ctx->pc = 0x2EEA00u;
            goto label_2eea00;
        }
    }
    ctx->pc = 0x2EE9DCu;
label_2ee9dc:
    // 0x2ee9dc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ee9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ee9e0:
    // 0x2ee9e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE9E0u;
    {
        const bool branch_taken_0x2ee9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE9E0u;
            // 0x2ee9e4: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9e0) {
            ctx->pc = 0x2EEA38u;
            goto label_2eea38;
        }
    }
    ctx->pc = 0x2EE9E8u;
label_2ee9e8:
    // 0x2ee9e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee9ec:
    // 0x2ee9ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EE9ECu;
    {
        const bool branch_taken_0x2ee9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE9ECu;
            // 0x2ee9f0: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9ec) {
            ctx->pc = 0x2EEA38u;
            goto label_2eea38;
        }
    }
    ctx->pc = 0x2EE9F4u;
label_2ee9f4:
    // 0x2ee9f4: 0xa2a00055  sb          $zero, 0x55($s5)
    ctx->pc = 0x2ee9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee9f8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EE9F8u;
    {
        const bool branch_taken_0x2ee9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee9f8) {
            ctx->pc = 0x2EEA38u;
            goto label_2eea38;
        }
    }
    ctx->pc = 0x2EEA00u;
label_2eea00:
    // 0x2eea00: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2EEA00u;
    {
        const bool branch_taken_0x2eea00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eea00) {
            ctx->pc = 0x2EEA38u;
            goto label_2eea38;
        }
    }
    ctx->pc = 0x2EEA08u;
    // 0x2eea08: 0x92a40058  lbu         $a0, 0x58($s5)
    ctx->pc = 0x2eea08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x2eea0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2eea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eea10: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEA10u;
    {
        const bool branch_taken_0x2eea10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eea10) {
            ctx->pc = 0x2EEA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEA10u;
            // 0x2eea14: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA34u;
            goto label_2eea34;
        }
    }
    ctx->pc = 0x2EEA18u;
    // 0x2eea18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eea18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eea1c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEA1Cu;
    {
        const bool branch_taken_0x2eea1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eea1c) {
            ctx->pc = 0x2EEA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEA1Cu;
            // 0x2eea20: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA2Cu;
            goto label_2eea2c;
        }
    }
    ctx->pc = 0x2EEA24u;
    // 0x2eea24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEA24u;
    {
        const bool branch_taken_0x2eea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eea24) {
            ctx->pc = 0x2EEA38u;
            goto label_2eea38;
        }
    }
    ctx->pc = 0x2EEA2Cu;
label_2eea2c:
    // 0x2eea2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EEA2Cu;
    {
        const bool branch_taken_0x2eea2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEA2Cu;
            // 0x2eea30: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea2c) {
            ctx->pc = 0x2EEA38u;
            goto label_2eea38;
        }
    }
    ctx->pc = 0x2EEA34u;
label_2eea34:
    // 0x2eea34: 0xa2a30055  sb          $v1, 0x55($s5)
    ctx->pc = 0x2eea34u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
label_2eea38:
    // 0x2eea38: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2eea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2eea3c:
    // 0x2eea3c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2eea3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eea40: 0x7ba301a0  lq          $v1, 0x1A0($sp)
    ctx->pc = 0x2eea40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2eea44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2eea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2eea48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2eea48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2eea4c: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x2eea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x2eea50: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2eea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2eea54: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2eea54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2eea58: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x2eea58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2eea5c: 0x186002c1  blez        $v1, . + 4 + (0x2C1 << 2)
    ctx->pc = 0x2EEA5Cu;
    {
        const bool branch_taken_0x2eea5c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2eea5c) {
            ctx->pc = 0x2EF564u;
            goto label_2ef564;
        }
    }
    ctx->pc = 0x2EEA64u;
    // 0x2eea64: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x2eea64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2eea68: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2eea68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x2eea6c: 0x24a51630  addiu       $a1, $a1, 0x1630
    ctx->pc = 0x2eea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5680));
    // 0x2eea70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2eea70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2eea74: 0x2403035c  addiu       $v1, $zero, 0x35C
    ctx->pc = 0x2eea74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2eea78: 0x2e33018  mult        $a2, $s7, $v1
    ctx->pc = 0x2eea78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2eea7c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2eea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eea80: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2eea80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2eea84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eea84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eea88: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2eea88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2eea8c: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x2eea8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    // 0x2eea90: 0x240301ae  addiu       $v1, $zero, 0x1AE
    ctx->pc = 0x2eea90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2eea94: 0x73c32018  mult1       $a0, $fp, $v1
    ctx->pc = 0x2eea94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2eea98: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2eea98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2eea9c: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x2eea9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2eeaa0: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x2eeaa0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2eeaa4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2eeaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2eeaa8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2eeaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2eeaac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2eeaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eeab0: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x2eeab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
    // 0x2eeab4: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2eeab4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eeab8: 0x5480006a  bnel        $a0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x2EEAB8u;
    {
        const bool branch_taken_0x2eeab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeab8) {
            ctx->pc = 0x2EEABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEAB8u;
            // 0x2eeabc: 0x8fa301d0  lw          $v1, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEC64u;
            goto label_2eec64;
        }
    }
    ctx->pc = 0x2EEAC0u;
    // 0x2eeac0: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x2eeac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2eeac4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2eeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2eeac8: 0x62140  sll         $a0, $a2, 5
    ctx->pc = 0x2eeac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2eeacc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2eeaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2eead0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2eead0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2eead4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2eead4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2eead8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2eead8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eeadc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2eeadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2eeae0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2eeae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2eeae4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2eeae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2eeae8: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x2eeae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2eeaec: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2eeaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2eeaf0: 0xc040180  jal         func_100600
    ctx->pc = 0x2EEAF0u;
    SET_GPR_U32(ctx, 31, 0x2EEAF8u);
    ctx->pc = 0x2EEAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEAF0u;
            // 0x2eeaf4: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEAF8u; }
        if (ctx->pc != 0x2EEAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEAF8u; }
        if (ctx->pc != 0x2EEAF8u) { return; }
    }
    ctx->pc = 0x2EEAF8u;
label_2eeaf8:
    // 0x2eeaf8: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2EEAF8u;
    {
        const bool branch_taken_0x2eeaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEAF8u;
            // 0x2eeafc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeaf8) {
            ctx->pc = 0x2EEC60u;
            goto label_2eec60;
        }
    }
    ctx->pc = 0x2EEB00u;
    // 0x2eeb00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eeb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eeb04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eeb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb08: 0x8c4214d8  lw          $v0, 0x14D8($v0)
    ctx->pc = 0x2eeb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eeb0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2eeb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eeb10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eeb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eeb18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eeb18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb1c: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2EEB1Cu;
    SET_GPR_U32(ctx, 31, 0x2EEB24u);
    ctx->pc = 0x2EEB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEB1Cu;
            // 0x2eeb20: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB24u; }
        if (ctx->pc != 0x2EEB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB24u; }
        if (ctx->pc != 0x2EEB24u) { return; }
    }
    ctx->pc = 0x2EEB24u;
label_2eeb24:
    // 0x2eeb24: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2eeb24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2eeb28: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2eeb28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2eeb2c: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x2eeb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
    // 0x2eeb30: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x2eeb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
    // 0x2eeb34: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x2eeb34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x2eeb38: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2eeb38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2eeb3c: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x2eeb3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2eeb40: 0x7ba301a0  lq          $v1, 0x1A0($sp)
    ctx->pc = 0x2eeb40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2eeb44: 0xa2b10054  sb          $s1, 0x54($s5)
    ctx->pc = 0x2eeb44u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 17));
    // 0x2eeb48: 0xa2a30056  sb          $v1, 0x56($s5)
    ctx->pc = 0x2eeb48u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x2eeb4c: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x2eeb4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2eeb50: 0xa2b30057  sb          $s3, 0x57($s5)
    ctx->pc = 0x2eeb50u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 87), (uint8_t)GPR_U32(ctx, 19));
    // 0x2eeb54: 0xa2a30058  sb          $v1, 0x58($s5)
    ctx->pc = 0x2eeb54u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x2eeb58: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x2eeb58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2eeb5c: 0xa6a4005a  sh          $a0, 0x5A($s5)
    ctx->pc = 0x2eeb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 90), (uint16_t)GPR_U32(ctx, 4));
    // 0x2eeb60: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEB60u;
    {
        const bool branch_taken_0x2eeb60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEB60u;
            // 0x2eeb64: 0xaea3005c  sw          $v1, 0x5C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb60) {
            ctx->pc = 0x2EEB78u;
            goto label_2eeb78;
        }
    }
    ctx->pc = 0x2EEB68u;
    // 0x2eeb68: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x2eeb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x2eeb6c: 0x34638208  ori         $v1, $v1, 0x8208
    ctx->pc = 0x2eeb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33288);
    // 0x2eeb70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEB70u;
    {
        const bool branch_taken_0x2eeb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEB70u;
            // 0x2eeb74: 0x2833021  addu        $a2, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb70) {
            ctx->pc = 0x2EEB84u;
            goto label_2eeb84;
        }
    }
    ctx->pc = 0x2EEB78u;
label_2eeb78:
    // 0x2eeb78: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x2eeb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x2eeb7c: 0x34632f70  ori         $v1, $v1, 0x2F70
    ctx->pc = 0x2eeb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12144);
    // 0x2eeb80: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x2eeb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2eeb84:
    // 0x2eeb84: 0x28c303e8  slti        $v1, $a2, 0x3E8
    ctx->pc = 0x2eeb84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2eeb88: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEB88u;
    {
        const bool branch_taken_0x2eeb88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeb88) {
            ctx->pc = 0x2EEB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEB88u;
            // 0x2eeb8c: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEB98u;
            goto label_2eeb98;
        }
    }
    ctx->pc = 0x2EEB90u;
    // 0x2eeb90: 0x24c6fc18  addiu       $a2, $a2, -0x3E8
    ctx->pc = 0x2eeb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966296));
    // 0x2eeb94: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2eeb94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2eeb98:
    // 0x2eeb98: 0x34a381e0  ori         $v1, $a1, 0x81E0
    ctx->pc = 0x2eeb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33248);
    // 0x2eeb9c: 0x52830030  beql        $s4, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2EEB9Cu;
    {
        const bool branch_taken_0x2eeb9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eeb9c) {
            ctx->pc = 0x2EEBA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEB9Cu;
            // 0x2eeba0: 0xa2a00055  sb          $zero, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEC60u;
            goto label_2eec60;
        }
    }
    ctx->pc = 0x2EEBA4u;
    // 0x2eeba4: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2eeba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2eeba8: 0x3483d478  ori         $v1, $a0, 0xD478
    ctx->pc = 0x2eeba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54392);
    // 0x2eebac: 0x12830015  beq         $s4, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EEBACu;
    {
        const bool branch_taken_0x2eebac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eebac) {
            ctx->pc = 0x2EEC04u;
            goto label_2eec04;
        }
    }
    ctx->pc = 0x2EEBB4u;
    // 0x2eebb4: 0x34a389b0  ori         $v1, $a1, 0x89B0
    ctx->pc = 0x2eebb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35248);
    // 0x2eebb8: 0x52830010  beql        $s4, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EEBB8u;
    {
        const bool branch_taken_0x2eebb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eebb8) {
            ctx->pc = 0x2EEBBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEBB8u;
            // 0x2eebbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEBC0u;
    // 0x2eebc0: 0x3483dc48  ori         $v1, $a0, 0xDC48
    ctx->pc = 0x2eebc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56392);
    // 0x2eebc4: 0x1283000c  beq         $s4, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EEBC4u;
    {
        const bool branch_taken_0x2eebc4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eebc4) {
            ctx->pc = 0x2EEBF8u;
            goto label_2eebf8;
        }
    }
    ctx->pc = 0x2EEBCCu;
    // 0x2eebcc: 0x34a37df8  ori         $v1, $a1, 0x7DF8
    ctx->pc = 0x2eebccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32248);
    // 0x2eebd0: 0x52830007  beql        $s4, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EEBD0u;
    {
        const bool branch_taken_0x2eebd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eebd0) {
            ctx->pc = 0x2EEBD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEBD0u;
            // 0x2eebd4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEBF0u;
            goto label_2eebf0;
        }
    }
    ctx->pc = 0x2EEBD8u;
    // 0x2eebd8: 0x3483d090  ori         $v1, $a0, 0xD090
    ctx->pc = 0x2eebd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53392);
    // 0x2eebdc: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEBDCu;
    {
        const bool branch_taken_0x2eebdc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eebdc) {
            ctx->pc = 0x2EEBECu;
            goto label_2eebec;
        }
    }
    ctx->pc = 0x2EEBE4u;
    // 0x2eebe4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EEBE4u;
    {
        const bool branch_taken_0x2eebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eebe4) {
            ctx->pc = 0x2EEC10u;
            goto label_2eec10;
        }
    }
    ctx->pc = 0x2EEBECu;
label_2eebec:
    // 0x2eebec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2eebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2eebf0:
    // 0x2eebf0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2EEBF0u;
    {
        const bool branch_taken_0x2eebf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEBF0u;
            // 0x2eebf4: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebf0) {
            ctx->pc = 0x2EEC60u;
            goto label_2eec60;
        }
    }
    ctx->pc = 0x2EEBF8u;
label_2eebf8:
    // 0x2eebf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eebfc:
    // 0x2eebfc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2EEBFCu;
    {
        const bool branch_taken_0x2eebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEBFCu;
            // 0x2eec00: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebfc) {
            ctx->pc = 0x2EEC60u;
            goto label_2eec60;
        }
    }
    ctx->pc = 0x2EEC04u;
label_2eec04:
    // 0x2eec04: 0xa2a00055  sb          $zero, 0x55($s5)
    ctx->pc = 0x2eec04u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eec08: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EEC08u;
    {
        const bool branch_taken_0x2eec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eec08) {
            ctx->pc = 0x2EEC60u;
            goto label_2eec60;
        }
    }
    ctx->pc = 0x2EEC10u;
label_2eec10:
    // 0x2eec10: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EEC10u;
    {
        const bool branch_taken_0x2eec10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eec10) {
            ctx->pc = 0x2EEC60u;
            goto label_2eec60;
        }
    }
    ctx->pc = 0x2EEC18u;
    // 0x2eec18: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x2eec18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2eec1c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEC1Cu;
    {
        const bool branch_taken_0x2eec1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eec1c) {
            ctx->pc = 0x2EEC20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC1Cu;
            // 0x2eec20: 0x92a40058  lbu         $a0, 0x58($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEC2Cu;
            goto label_2eec2c;
        }
    }
    ctx->pc = 0x2EEC24u;
    // 0x2eec24: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EEC24u;
    {
        const bool branch_taken_0x2eec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC24u;
            // 0x2eec28: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec24) {
            ctx->pc = 0x2EEC5Cu;
            goto label_2eec5c;
        }
    }
    ctx->pc = 0x2EEC2Cu;
label_2eec2c:
    // 0x2eec2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2eec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eec30: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEC30u;
    {
        const bool branch_taken_0x2eec30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eec30) {
            ctx->pc = 0x2EEC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC30u;
            // 0x2eec34: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEC54u;
            goto label_2eec54;
        }
    }
    ctx->pc = 0x2EEC38u;
    // 0x2eec38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eec38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eec3c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEC3Cu;
    {
        const bool branch_taken_0x2eec3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eec3c) {
            ctx->pc = 0x2EEC40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC3Cu;
            // 0x2eec40: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEC4Cu;
            goto label_2eec4c;
        }
    }
    ctx->pc = 0x2EEC44u;
    // 0x2eec44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EEC44u;
    {
        const bool branch_taken_0x2eec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eec44) {
            ctx->pc = 0x2EEC60u;
            goto label_2eec60;
        }
    }
    ctx->pc = 0x2EEC4Cu;
label_2eec4c:
    // 0x2eec4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEC4Cu;
    {
        const bool branch_taken_0x2eec4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC4Cu;
            // 0x2eec50: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec4c) {
            ctx->pc = 0x2EEC60u;
            goto label_2eec60;
        }
    }
    ctx->pc = 0x2EEC54u;
label_2eec54:
    // 0x2eec54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EEC54u;
    {
        const bool branch_taken_0x2eec54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC54u;
            // 0x2eec58: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec54) {
            ctx->pc = 0x2EEC60u;
            goto label_2eec60;
        }
    }
    ctx->pc = 0x2EEC5Cu;
label_2eec5c:
    // 0x2eec5c: 0xa2a30055  sb          $v1, 0x55($s5)
    ctx->pc = 0x2eec5cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
label_2eec60:
    // 0x2eec60: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x2eec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_2eec64:
    // 0x2eec64: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2eec64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x2eec68: 0x24a51638  addiu       $a1, $a1, 0x1638
    ctx->pc = 0x2eec68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5688));
    // 0x2eec6c: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x2eec6cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eec70: 0x2403035c  addiu       $v1, $zero, 0x35C
    ctx->pc = 0x2eec70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2eec74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2eec74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2eec78: 0x2e33018  mult        $a2, $s7, $v1
    ctx->pc = 0x2eec78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2eec7c: 0x240301ae  addiu       $v1, $zero, 0x1AE
    ctx->pc = 0x2eec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2eec80: 0x73c32018  mult1       $a0, $fp, $v1
    ctx->pc = 0x2eec80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2eec84: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x2eec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2eec88: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x2eec88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2eec8c: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2eec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2eec90: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2eec90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2eec94: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x2eec94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2eec98: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x2eec98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eec9c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2eec9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2eeca0: 0x14600230  bnez        $v1, . + 4 + (0x230 << 2)
    ctx->pc = 0x2EECA0u;
    {
        const bool branch_taken_0x2eeca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeca0) {
            ctx->pc = 0x2EF564u;
            goto label_2ef564;
        }
    }
    ctx->pc = 0x2EECA8u;
    // 0x2eeca8: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x2eeca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2eecac: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2eecacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2eecb0: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2eecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2eecb4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2eecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2eecb8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2eecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2eecbc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2eecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2eecc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eecc4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2eecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2eecc8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2eecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2eeccc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2eecccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2eecd0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2eecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2eecd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2eecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eecd8: 0xc040180  jal         func_100600
    ctx->pc = 0x2EECD8u;
    SET_GPR_U32(ctx, 31, 0x2EECE0u);
    ctx->pc = 0x2EECDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EECD8u;
            // 0x2eecdc: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EECE0u; }
        if (ctx->pc != 0x2EECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EECE0u; }
        if (ctx->pc != 0x2EECE0u) { return; }
    }
    ctx->pc = 0x2EECE0u;
label_2eece0:
    // 0x2eece0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2EECE0u;
    {
        const bool branch_taken_0x2eece0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EECE0u;
            // 0x2eece4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eece0) {
            ctx->pc = 0x2EEE00u;
            goto label_2eee00;
        }
    }
    ctx->pc = 0x2EECE8u;
    // 0x2eece8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eece8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eecec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eececu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eecf0: 0x8c5514d8  lw          $s5, 0x14D8($v0)
    ctx->pc = 0x2eecf0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eecf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eecf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eecf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eecf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eecfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eecfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eed00: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2EED00u;
    SET_GPR_U32(ctx, 31, 0x2EED08u);
    ctx->pc = 0x2EED04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED00u;
            // 0x2eed04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED08u; }
        if (ctx->pc != 0x2EED08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED08u; }
        if (ctx->pc != 0x2EED08u) { return; }
    }
    ctx->pc = 0x2EED08u;
label_2eed08:
    // 0x2eed08: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2eed08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2eed0c: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x2eed0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2eed10: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2eed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2eed14: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2eed14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2eed18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2eed18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2eed1c: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x2eed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
    // 0x2eed20: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2eed20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2eed24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2eed24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eed28: 0xa2510054  sb          $s1, 0x54($s2)
    ctx->pc = 0x2eed28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 17));
    // 0x2eed2c: 0xa2430056  sb          $v1, 0x56($s2)
    ctx->pc = 0x2eed2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x2eed30: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x2eed30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2eed34: 0xa2530057  sb          $s3, 0x57($s2)
    ctx->pc = 0x2eed34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 87), (uint8_t)GPR_U32(ctx, 19));
    // 0x2eed38: 0xa2430058  sb          $v1, 0x58($s2)
    ctx->pc = 0x2eed38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x2eed3c: 0xa644005a  sh          $a0, 0x5A($s2)
    ctx->pc = 0x2eed3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 90), (uint16_t)GPR_U32(ctx, 4));
    // 0x2eed40: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EED40u;
    {
        const bool branch_taken_0x2eed40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED40u;
            // 0x2eed44: 0xae55005c  sw          $s5, 0x5C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed40) {
            ctx->pc = 0x2EED58u;
            goto label_2eed58;
        }
    }
    ctx->pc = 0x2EED48u;
    // 0x2eed48: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x2eed48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x2eed4c: 0x34638208  ori         $v1, $v1, 0x8208
    ctx->pc = 0x2eed4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33288);
    // 0x2eed50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EED50u;
    {
        const bool branch_taken_0x2eed50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED50u;
            // 0x2eed54: 0x2033021  addu        $a2, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed50) {
            ctx->pc = 0x2EED64u;
            goto label_2eed64;
        }
    }
    ctx->pc = 0x2EED58u;
label_2eed58:
    // 0x2eed58: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x2eed58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x2eed5c: 0x34632f70  ori         $v1, $v1, 0x2F70
    ctx->pc = 0x2eed5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12144);
    // 0x2eed60: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x2eed60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2eed64:
    // 0x2eed64: 0x28c303e8  slti        $v1, $a2, 0x3E8
    ctx->pc = 0x2eed64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2eed68: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EED68u;
    {
        const bool branch_taken_0x2eed68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eed68) {
            ctx->pc = 0x2EED6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED68u;
            // 0x2eed6c: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EED78u;
            goto label_2eed78;
        }
    }
    ctx->pc = 0x2EED70u;
    // 0x2eed70: 0x24c6fc18  addiu       $a2, $a2, -0x3E8
    ctx->pc = 0x2eed70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966296));
    // 0x2eed74: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2eed74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2eed78:
    // 0x2eed78: 0x34a381e0  ori         $v1, $a1, 0x81E0
    ctx->pc = 0x2eed78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33248);
    // 0x2eed7c: 0x52030020  beql        $s0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EED7Cu;
    {
        const bool branch_taken_0x2eed7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eed7c) {
            ctx->pc = 0x2EED80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED7Cu;
            // 0x2eed80: 0xa2400055  sb          $zero, 0x55($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEE00u;
            goto label_2eee00;
        }
    }
    ctx->pc = 0x2EED84u;
    // 0x2eed84: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2eed84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2eed88: 0x3483d478  ori         $v1, $a0, 0xD478
    ctx->pc = 0x2eed88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54392);
    // 0x2eed8c: 0x12030015  beq         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EED8Cu;
    {
        const bool branch_taken_0x2eed8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eed8c) {
            ctx->pc = 0x2EEDE4u;
            goto label_2eede4;
        }
    }
    ctx->pc = 0x2EED94u;
    // 0x2eed94: 0x34a389b0  ori         $v1, $a1, 0x89B0
    ctx->pc = 0x2eed94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35248);
    // 0x2eed98: 0x52030010  beql        $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EED98u;
    {
        const bool branch_taken_0x2eed98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eed98) {
            ctx->pc = 0x2EED9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED98u;
            // 0x2eed9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEDDCu;
            goto label_2eeddc;
        }
    }
    ctx->pc = 0x2EEDA0u;
    // 0x2eeda0: 0x3483dc48  ori         $v1, $a0, 0xDC48
    ctx->pc = 0x2eeda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56392);
    // 0x2eeda4: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EEDA4u;
    {
        const bool branch_taken_0x2eeda4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eeda4) {
            ctx->pc = 0x2EEDD8u;
            goto label_2eedd8;
        }
    }
    ctx->pc = 0x2EEDACu;
    // 0x2eedac: 0x34a37df8  ori         $v1, $a1, 0x7DF8
    ctx->pc = 0x2eedacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32248);
    // 0x2eedb0: 0x52030007  beql        $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EEDB0u;
    {
        const bool branch_taken_0x2eedb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eedb0) {
            ctx->pc = 0x2EEDB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEDB0u;
            // 0x2eedb4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEDD0u;
            goto label_2eedd0;
        }
    }
    ctx->pc = 0x2EEDB8u;
    // 0x2eedb8: 0x3483d090  ori         $v1, $a0, 0xD090
    ctx->pc = 0x2eedb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53392);
    // 0x2eedbc: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEDBCu;
    {
        const bool branch_taken_0x2eedbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eedbc) {
            ctx->pc = 0x2EEDCCu;
            goto label_2eedcc;
        }
    }
    ctx->pc = 0x2EEDC4u;
    // 0x2eedc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EEDC4u;
    {
        const bool branch_taken_0x2eedc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eedc4) {
            ctx->pc = 0x2EEDF0u;
            goto label_2eedf0;
        }
    }
    ctx->pc = 0x2EEDCCu;
label_2eedcc:
    // 0x2eedcc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2eedccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2eedd0:
    // 0x2eedd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EEDD0u;
    {
        const bool branch_taken_0x2eedd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEDD0u;
            // 0x2eedd4: 0xa2430055  sb          $v1, 0x55($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eedd0) {
            ctx->pc = 0x2EEE00u;
            goto label_2eee00;
        }
    }
    ctx->pc = 0x2EEDD8u;
label_2eedd8:
    // 0x2eedd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eeddc:
    // 0x2eeddc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEDDCu;
    {
        const bool branch_taken_0x2eeddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEDDCu;
            // 0x2eede0: 0xa2430055  sb          $v1, 0x55($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeddc) {
            ctx->pc = 0x2EEE00u;
            goto label_2eee00;
        }
    }
    ctx->pc = 0x2EEDE4u;
label_2eede4:
    // 0x2eede4: 0xa2400055  sb          $zero, 0x55($s2)
    ctx->pc = 0x2eede4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eede8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEDE8u;
    {
        const bool branch_taken_0x2eede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eede8) {
            ctx->pc = 0x2EEE00u;
            goto label_2eee00;
        }
    }
    ctx->pc = 0x2EEDF0u;
label_2eedf0:
    // 0x2eedf0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEDF0u;
    {
        const bool branch_taken_0x2eedf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eedf0) {
            ctx->pc = 0x2EEE00u;
            goto label_2eee00;
        }
    }
    ctx->pc = 0x2EEDF8u;
    // 0x2eedf8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2eedf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2eedfc: 0xa2430055  sb          $v1, 0x55($s2)
    ctx->pc = 0x2eedfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 3));
label_2eee00:
    // 0x2eee00: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2eee00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2eee04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2eee04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2eee08: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x2EEE08u;
    {
        const bool branch_taken_0x2eee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEE08u;
            // 0x2eee0c: 0xa6830000  sh          $v1, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee08) {
            ctx->pc = 0x2EF564u;
            goto label_2ef564;
        }
    }
    ctx->pc = 0x2EEE10u;
label_2eee10:
    // 0x2eee10: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2eee10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2eee14: 0x327e00ff  andi        $fp, $s3, 0xFF
    ctx->pc = 0x2eee14u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2eee18: 0x172880  sll         $a1, $s7, 2
    ctx->pc = 0x2eee18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2eee1c: 0x248414e8  addiu       $a0, $a0, 0x14E8
    ctx->pc = 0x2eee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5352));
    // 0x2eee20: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x2eee20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x2eee24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2eee24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2eee28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eee2c: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x2eee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x2eee30: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2eee30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eee34: 0x5460005e  bnel        $v1, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x2EEE34u;
    {
        const bool branch_taken_0x2eee34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eee34) {
            ctx->pc = 0x2EEE38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEE34u;
            // 0x2eee38: 0x7ba30100  lq          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEFB0u;
            goto label_2eefb0;
        }
    }
    ctx->pc = 0x2EEE3Cu;
    // 0x2eee3c: 0x1e1140  sll         $v0, $fp, 5
    ctx->pc = 0x2eee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x2eee40: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2eee40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2eee44: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x2eee44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2eee48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eee48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eee4c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2eee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2eee50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2eee50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2eee54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2eee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2eee58: 0xc040180  jal         func_100600
    ctx->pc = 0x2EEE58u;
    SET_GPR_U32(ctx, 31, 0x2EEE60u);
    ctx->pc = 0x2EEE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEE58u;
            // 0x2eee5c: 0x2454000a  addiu       $s4, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE60u; }
        if (ctx->pc != 0x2EEE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE60u; }
        if (ctx->pc != 0x2EEE60u) { return; }
    }
    ctx->pc = 0x2EEE60u;
label_2eee60:
    // 0x2eee60: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2EEE60u;
    {
        const bool branch_taken_0x2eee60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEE60u;
            // 0x2eee64: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee60) {
            ctx->pc = 0x2EEFACu;
            goto label_2eefac;
        }
    }
    ctx->pc = 0x2EEE68u;
    // 0x2eee68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eee6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eee6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee70: 0x8c4214d8  lw          $v0, 0x14D8($v0)
    ctx->pc = 0x2eee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2eee74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2eee74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eee78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eee7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eee80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eee80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee84: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2EEE84u;
    SET_GPR_U32(ctx, 31, 0x2EEE8Cu);
    ctx->pc = 0x2EEE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEE84u;
            // 0x2eee88: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE8Cu; }
        if (ctx->pc != 0x2EEE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEE8Cu; }
        if (ctx->pc != 0x2EEE8Cu) { return; }
    }
    ctx->pc = 0x2EEE8Cu;
label_2eee8c:
    // 0x2eee8c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2eee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2eee90: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2eee90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2eee94: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x2eee94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
    // 0x2eee98: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x2eee98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
    // 0x2eee9c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x2eee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x2eeea0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2eeea0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2eeea4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2eeea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eeea8: 0xa2b10054  sb          $s1, 0x54($s5)
    ctx->pc = 0x2eeea8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 17));
    // 0x2eeeac: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x2eeeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2eeeb0: 0xa2a00056  sb          $zero, 0x56($s5)
    ctx->pc = 0x2eeeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eeeb4: 0xa2b30057  sb          $s3, 0x57($s5)
    ctx->pc = 0x2eeeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 87), (uint8_t)GPR_U32(ctx, 19));
    // 0x2eeeb8: 0xa2a40058  sb          $a0, 0x58($s5)
    ctx->pc = 0x2eeeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 88), (uint8_t)GPR_U32(ctx, 4));
    // 0x2eeebc: 0xa6a3005a  sh          $v1, 0x5A($s5)
    ctx->pc = 0x2eeebcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 90), (uint16_t)GPR_U32(ctx, 3));
    // 0x2eeec0: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x2eeec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2eeec4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEEC4u;
    {
        const bool branch_taken_0x2eeec4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEEC4u;
            // 0x2eeec8: 0xaea3005c  sw          $v1, 0x5C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeec4) {
            ctx->pc = 0x2EEEDCu;
            goto label_2eeedc;
        }
    }
    ctx->pc = 0x2EEECCu;
    // 0x2eeecc: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x2eeeccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x2eeed0: 0x34638208  ori         $v1, $v1, 0x8208
    ctx->pc = 0x2eeed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33288);
    // 0x2eeed4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEED4u;
    {
        const bool branch_taken_0x2eeed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEED4u;
            // 0x2eeed8: 0x2833021  addu        $a2, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeed4) {
            ctx->pc = 0x2EEEE8u;
            goto label_2eeee8;
        }
    }
    ctx->pc = 0x2EEEDCu;
label_2eeedc:
    // 0x2eeedc: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x2eeedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x2eeee0: 0x34632f70  ori         $v1, $v1, 0x2F70
    ctx->pc = 0x2eeee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12144);
    // 0x2eeee4: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x2eeee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2eeee8:
    // 0x2eeee8: 0x28c303e8  slti        $v1, $a2, 0x3E8
    ctx->pc = 0x2eeee8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2eeeec: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEEECu;
    {
        const bool branch_taken_0x2eeeec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeeec) {
            ctx->pc = 0x2EEEF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEEECu;
            // 0x2eeef0: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEEFCu;
            goto label_2eeefc;
        }
    }
    ctx->pc = 0x2EEEF4u;
    // 0x2eeef4: 0x24c6fc18  addiu       $a2, $a2, -0x3E8
    ctx->pc = 0x2eeef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966296));
    // 0x2eeef8: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2eeef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2eeefc:
    // 0x2eeefc: 0x34a381e0  ori         $v1, $a1, 0x81E0
    ctx->pc = 0x2eeefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33248);
    // 0x2eef00: 0x5283002a  beql        $s4, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2EEF00u;
    {
        const bool branch_taken_0x2eef00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eef00) {
            ctx->pc = 0x2EEF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF00u;
            // 0x2eef04: 0xa2a00055  sb          $zero, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEFACu;
            goto label_2eefac;
        }
    }
    ctx->pc = 0x2EEF08u;
    // 0x2eef08: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2eef08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2eef0c: 0x3483d478  ori         $v1, $a0, 0xD478
    ctx->pc = 0x2eef0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54392);
    // 0x2eef10: 0x12830015  beq         $s4, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EEF10u;
    {
        const bool branch_taken_0x2eef10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eef10) {
            ctx->pc = 0x2EEF68u;
            goto label_2eef68;
        }
    }
    ctx->pc = 0x2EEF18u;
    // 0x2eef18: 0x34a389b0  ori         $v1, $a1, 0x89B0
    ctx->pc = 0x2eef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35248);
    // 0x2eef1c: 0x52830010  beql        $s4, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EEF1Cu;
    {
        const bool branch_taken_0x2eef1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eef1c) {
            ctx->pc = 0x2EEF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF1Cu;
            // 0x2eef20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF60u;
            goto label_2eef60;
        }
    }
    ctx->pc = 0x2EEF24u;
    // 0x2eef24: 0x3483dc48  ori         $v1, $a0, 0xDC48
    ctx->pc = 0x2eef24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56392);
    // 0x2eef28: 0x1283000c  beq         $s4, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EEF28u;
    {
        const bool branch_taken_0x2eef28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eef28) {
            ctx->pc = 0x2EEF5Cu;
            goto label_2eef5c;
        }
    }
    ctx->pc = 0x2EEF30u;
    // 0x2eef30: 0x34a37df8  ori         $v1, $a1, 0x7DF8
    ctx->pc = 0x2eef30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32248);
    // 0x2eef34: 0x52830007  beql        $s4, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EEF34u;
    {
        const bool branch_taken_0x2eef34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eef34) {
            ctx->pc = 0x2EEF38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF34u;
            // 0x2eef38: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF54u;
            goto label_2eef54;
        }
    }
    ctx->pc = 0x2EEF3Cu;
    // 0x2eef3c: 0x3483d090  ori         $v1, $a0, 0xD090
    ctx->pc = 0x2eef3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53392);
    // 0x2eef40: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEF40u;
    {
        const bool branch_taken_0x2eef40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eef40) {
            ctx->pc = 0x2EEF50u;
            goto label_2eef50;
        }
    }
    ctx->pc = 0x2EEF48u;
    // 0x2eef48: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EEF48u;
    {
        const bool branch_taken_0x2eef48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eef48) {
            ctx->pc = 0x2EEF74u;
            goto label_2eef74;
        }
    }
    ctx->pc = 0x2EEF50u;
label_2eef50:
    // 0x2eef50: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2eef50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2eef54:
    // 0x2eef54: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EEF54u;
    {
        const bool branch_taken_0x2eef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF54u;
            // 0x2eef58: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef54) {
            ctx->pc = 0x2EEFACu;
            goto label_2eefac;
        }
    }
    ctx->pc = 0x2EEF5Cu;
label_2eef5c:
    // 0x2eef5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eef60:
    // 0x2eef60: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EEF60u;
    {
        const bool branch_taken_0x2eef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF60u;
            // 0x2eef64: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef60) {
            ctx->pc = 0x2EEFACu;
            goto label_2eefac;
        }
    }
    ctx->pc = 0x2EEF68u;
label_2eef68:
    // 0x2eef68: 0xa2a00055  sb          $zero, 0x55($s5)
    ctx->pc = 0x2eef68u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EEF6Cu;
    {
        const bool branch_taken_0x2eef6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eef6c) {
            ctx->pc = 0x2EEFACu;
            goto label_2eefac;
        }
    }
    ctx->pc = 0x2EEF74u;
label_2eef74:
    // 0x2eef74: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2EEF74u;
    {
        const bool branch_taken_0x2eef74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eef74) {
            ctx->pc = 0x2EEFACu;
            goto label_2eefac;
        }
    }
    ctx->pc = 0x2EEF7Cu;
    // 0x2eef7c: 0x92a40058  lbu         $a0, 0x58($s5)
    ctx->pc = 0x2eef7cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x2eef80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2eef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eef84: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEF84u;
    {
        const bool branch_taken_0x2eef84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eef84) {
            ctx->pc = 0x2EEF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF84u;
            // 0x2eef88: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEFA8u;
            goto label_2eefa8;
        }
    }
    ctx->pc = 0x2EEF8Cu;
    // 0x2eef8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eef90: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEF90u;
    {
        const bool branch_taken_0x2eef90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eef90) {
            ctx->pc = 0x2EEF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEF90u;
            // 0x2eef94: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEFA0u;
            goto label_2eefa0;
        }
    }
    ctx->pc = 0x2EEF98u;
    // 0x2eef98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEF98u;
    {
        const bool branch_taken_0x2eef98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eef98) {
            ctx->pc = 0x2EEFACu;
            goto label_2eefac;
        }
    }
    ctx->pc = 0x2EEFA0u;
label_2eefa0:
    // 0x2eefa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EEFA0u;
    {
        const bool branch_taken_0x2eefa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEFA0u;
            // 0x2eefa4: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefa0) {
            ctx->pc = 0x2EEFACu;
            goto label_2eefac;
        }
    }
    ctx->pc = 0x2EEFA8u;
label_2eefa8:
    // 0x2eefa8: 0xa2a30055  sb          $v1, 0x55($s5)
    ctx->pc = 0x2eefa8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
label_2eefac:
    // 0x2eefac: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x2eefacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2eefb0:
    // 0x2eefb0: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x2eefb0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eefb4: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x2eefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2eefb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2eefb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2eefbc: 0x772021  addu        $a0, $v1, $s7
    ctx->pc = 0x2eefbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2eefc0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2eefc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2eefc4: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x2eefc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2eefc8: 0x246314f0  addiu       $v1, $v1, 0x14F0
    ctx->pc = 0x2eefc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5360));
    // 0x2eefcc: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x2eefccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x2eefd0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2eefd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2eefd4: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x2eefd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2eefd8: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x2eefd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2eefdc: 0x9e1821  addu        $v1, $a0, $fp
    ctx->pc = 0x2eefdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x2eefe0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2eefe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2eefe4: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x2eefe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2eefe8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2eefe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2eefec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2eefecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2eeff0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2eeff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2eeff4: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x2eeff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x2eeff8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2eeff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eeffc: 0x54600063  bnel        $v1, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x2EEFFCu;
    {
        const bool branch_taken_0x2eeffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeffc) {
            ctx->pc = 0x2EF000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEFFCu;
            // 0x2ef000: 0x8fa301c0  lw          $v1, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF18Cu;
            goto label_2ef18c;
        }
    }
    ctx->pc = 0x2EF004u;
    // 0x2ef004: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2ef004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2ef008: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x2ef008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2ef00c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ef00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ef010: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x2ef010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2ef014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ef014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef018: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x2ef018u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ef01c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ef01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ef020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ef020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ef024: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2ef024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ef028: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ef028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ef02c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ef02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ef030: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2ef030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ef034: 0xc040180  jal         func_100600
    ctx->pc = 0x2EF034u;
    SET_GPR_U32(ctx, 31, 0x2EF03Cu);
    ctx->pc = 0x2EF038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF034u;
            // 0x2ef038: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF03Cu; }
        if (ctx->pc != 0x2EF03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF03Cu; }
        if (ctx->pc != 0x2EF03Cu) { return; }
    }
    ctx->pc = 0x2EF03Cu;
label_2ef03c:
    // 0x2ef03c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2EF03Cu;
    {
        const bool branch_taken_0x2ef03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF03Cu;
            // 0x2ef040: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef03c) {
            ctx->pc = 0x2EF188u;
            goto label_2ef188;
        }
    }
    ctx->pc = 0x2EF044u;
    // 0x2ef044: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ef044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ef048: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef04c: 0x8c4214d8  lw          $v0, 0x14D8($v0)
    ctx->pc = 0x2ef04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ef050: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ef050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef058: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ef058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef05c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ef05cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef060: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2EF060u;
    SET_GPR_U32(ctx, 31, 0x2EF068u);
    ctx->pc = 0x2EF064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF060u;
            // 0x2ef064: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF068u; }
        if (ctx->pc != 0x2EF068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF068u; }
        if (ctx->pc != 0x2EF068u) { return; }
    }
    ctx->pc = 0x2EF068u;
label_2ef068:
    // 0x2ef068: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2ef068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2ef06c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ef06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ef070: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x2ef070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
    // 0x2ef074: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x2ef074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
    // 0x2ef078: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x2ef078u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x2ef07c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2ef07cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2ef080: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x2ef080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2ef084: 0xa2b10054  sb          $s1, 0x54($s5)
    ctx->pc = 0x2ef084u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ef088: 0xa2a00056  sb          $zero, 0x56($s5)
    ctx->pc = 0x2ef088u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef08c: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x2ef08cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2ef090: 0xa2b30057  sb          $s3, 0x57($s5)
    ctx->pc = 0x2ef090u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 87), (uint8_t)GPR_U32(ctx, 19));
    // 0x2ef094: 0xa2a30058  sb          $v1, 0x58($s5)
    ctx->pc = 0x2ef094u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef098: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x2ef098u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ef09c: 0xa6a4005a  sh          $a0, 0x5A($s5)
    ctx->pc = 0x2ef09cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 90), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ef0a0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF0A0u;
    {
        const bool branch_taken_0x2ef0a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF0A0u;
            // 0x2ef0a4: 0xaea3005c  sw          $v1, 0x5C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef0a0) {
            ctx->pc = 0x2EF0B8u;
            goto label_2ef0b8;
        }
    }
    ctx->pc = 0x2EF0A8u;
    // 0x2ef0a8: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x2ef0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x2ef0ac: 0x34638208  ori         $v1, $v1, 0x8208
    ctx->pc = 0x2ef0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33288);
    // 0x2ef0b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF0B0u;
    {
        const bool branch_taken_0x2ef0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF0B0u;
            // 0x2ef0b4: 0x2833021  addu        $a2, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef0b0) {
            ctx->pc = 0x2EF0C4u;
            goto label_2ef0c4;
        }
    }
    ctx->pc = 0x2EF0B8u;
label_2ef0b8:
    // 0x2ef0b8: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x2ef0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x2ef0bc: 0x34632f70  ori         $v1, $v1, 0x2F70
    ctx->pc = 0x2ef0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12144);
    // 0x2ef0c0: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x2ef0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2ef0c4:
    // 0x2ef0c4: 0x28c303e8  slti        $v1, $a2, 0x3E8
    ctx->pc = 0x2ef0c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2ef0c8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF0C8u;
    {
        const bool branch_taken_0x2ef0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef0c8) {
            ctx->pc = 0x2EF0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF0C8u;
            // 0x2ef0cc: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF0D8u;
            goto label_2ef0d8;
        }
    }
    ctx->pc = 0x2EF0D0u;
    // 0x2ef0d0: 0x24c6fc18  addiu       $a2, $a2, -0x3E8
    ctx->pc = 0x2ef0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966296));
    // 0x2ef0d4: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ef0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ef0d8:
    // 0x2ef0d8: 0x34a381e0  ori         $v1, $a1, 0x81E0
    ctx->pc = 0x2ef0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33248);
    // 0x2ef0dc: 0x5283002a  beql        $s4, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2EF0DCu;
    {
        const bool branch_taken_0x2ef0dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef0dc) {
            ctx->pc = 0x2EF0E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF0DCu;
            // 0x2ef0e0: 0xa2a00055  sb          $zero, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF188u;
            goto label_2ef188;
        }
    }
    ctx->pc = 0x2EF0E4u;
    // 0x2ef0e4: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2ef0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2ef0e8: 0x3483d478  ori         $v1, $a0, 0xD478
    ctx->pc = 0x2ef0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54392);
    // 0x2ef0ec: 0x12830015  beq         $s4, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EF0ECu;
    {
        const bool branch_taken_0x2ef0ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef0ec) {
            ctx->pc = 0x2EF144u;
            goto label_2ef144;
        }
    }
    ctx->pc = 0x2EF0F4u;
    // 0x2ef0f4: 0x34a389b0  ori         $v1, $a1, 0x89B0
    ctx->pc = 0x2ef0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35248);
    // 0x2ef0f8: 0x52830010  beql        $s4, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EF0F8u;
    {
        const bool branch_taken_0x2ef0f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef0f8) {
            ctx->pc = 0x2EF0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF0F8u;
            // 0x2ef0fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF13Cu;
            goto label_2ef13c;
        }
    }
    ctx->pc = 0x2EF100u;
    // 0x2ef100: 0x3483dc48  ori         $v1, $a0, 0xDC48
    ctx->pc = 0x2ef100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56392);
    // 0x2ef104: 0x1283000c  beq         $s4, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EF104u;
    {
        const bool branch_taken_0x2ef104 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef104) {
            ctx->pc = 0x2EF138u;
            goto label_2ef138;
        }
    }
    ctx->pc = 0x2EF10Cu;
    // 0x2ef10c: 0x34a37df8  ori         $v1, $a1, 0x7DF8
    ctx->pc = 0x2ef10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32248);
    // 0x2ef110: 0x52830007  beql        $s4, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF110u;
    {
        const bool branch_taken_0x2ef110 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef110) {
            ctx->pc = 0x2EF114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF110u;
            // 0x2ef114: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF130u;
            goto label_2ef130;
        }
    }
    ctx->pc = 0x2EF118u;
    // 0x2ef118: 0x3483d090  ori         $v1, $a0, 0xD090
    ctx->pc = 0x2ef118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53392);
    // 0x2ef11c: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF11Cu;
    {
        const bool branch_taken_0x2ef11c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef11c) {
            ctx->pc = 0x2EF12Cu;
            goto label_2ef12c;
        }
    }
    ctx->pc = 0x2EF124u;
    // 0x2ef124: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EF124u;
    {
        const bool branch_taken_0x2ef124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef124) {
            ctx->pc = 0x2EF150u;
            goto label_2ef150;
        }
    }
    ctx->pc = 0x2EF12Cu;
label_2ef12c:
    // 0x2ef12c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ef12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ef130:
    // 0x2ef130: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EF130u;
    {
        const bool branch_taken_0x2ef130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF130u;
            // 0x2ef134: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef130) {
            ctx->pc = 0x2EF188u;
            goto label_2ef188;
        }
    }
    ctx->pc = 0x2EF138u;
label_2ef138:
    // 0x2ef138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ef138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef13c:
    // 0x2ef13c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EF13Cu;
    {
        const bool branch_taken_0x2ef13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF13Cu;
            // 0x2ef140: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef13c) {
            ctx->pc = 0x2EF188u;
            goto label_2ef188;
        }
    }
    ctx->pc = 0x2EF144u;
label_2ef144:
    // 0x2ef144: 0xa2a00055  sb          $zero, 0x55($s5)
    ctx->pc = 0x2ef144u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef148: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EF148u;
    {
        const bool branch_taken_0x2ef148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef148) {
            ctx->pc = 0x2EF188u;
            goto label_2ef188;
        }
    }
    ctx->pc = 0x2EF150u;
label_2ef150:
    // 0x2ef150: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2EF150u;
    {
        const bool branch_taken_0x2ef150 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef150) {
            ctx->pc = 0x2EF188u;
            goto label_2ef188;
        }
    }
    ctx->pc = 0x2EF158u;
    // 0x2ef158: 0x92a40058  lbu         $a0, 0x58($s5)
    ctx->pc = 0x2ef158u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x2ef15c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ef15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef160: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EF160u;
    {
        const bool branch_taken_0x2ef160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef160) {
            ctx->pc = 0x2EF164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF160u;
            // 0x2ef164: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF184u;
            goto label_2ef184;
        }
    }
    ctx->pc = 0x2EF168u;
    // 0x2ef168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ef168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef16c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF16Cu;
    {
        const bool branch_taken_0x2ef16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef16c) {
            ctx->pc = 0x2EF170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF16Cu;
            // 0x2ef170: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF17Cu;
            goto label_2ef17c;
        }
    }
    ctx->pc = 0x2EF174u;
    // 0x2ef174: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF174u;
    {
        const bool branch_taken_0x2ef174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef174) {
            ctx->pc = 0x2EF188u;
            goto label_2ef188;
        }
    }
    ctx->pc = 0x2EF17Cu;
label_2ef17c:
    // 0x2ef17c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF17Cu;
    {
        const bool branch_taken_0x2ef17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF17Cu;
            // 0x2ef180: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef17c) {
            ctx->pc = 0x2EF188u;
            goto label_2ef188;
        }
    }
    ctx->pc = 0x2EF184u;
label_2ef184:
    // 0x2ef184: 0xa2a30055  sb          $v1, 0x55($s5)
    ctx->pc = 0x2ef184u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
label_2ef188:
    // 0x2ef188: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x2ef188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_2ef18c:
    // 0x2ef18c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2ef18cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ef190: 0x7ba301a0  lq          $v1, 0x1A0($sp)
    ctx->pc = 0x2ef190u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2ef194: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ef194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ef198: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ef198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ef19c: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x2ef19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x2ef1a0: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x2ef1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2ef1a4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x2ef1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ef1a8: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x2ef1a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ef1ac: 0x186000ed  blez        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x2EF1ACu;
    {
        const bool branch_taken_0x2ef1ac = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2ef1ac) {
            ctx->pc = 0x2EF564u;
            goto label_2ef564;
        }
    }
    ctx->pc = 0x2EF1B4u;
    // 0x2ef1b4: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x2ef1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2ef1b8: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2ef1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x2ef1bc: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x2ef1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x2ef1c0: 0x24a51630  addiu       $a1, $a1, 0x1630
    ctx->pc = 0x2ef1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5680));
    // 0x2ef1c4: 0x2403035c  addiu       $v1, $zero, 0x35C
    ctx->pc = 0x2ef1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2ef1c8: 0x2e33018  mult        $a2, $s7, $v1
    ctx->pc = 0x2ef1c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2ef1cc: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x2ef1ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ef1d0: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x2ef1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ef1d4: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2ef1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2ef1d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ef1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ef1dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ef1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ef1e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ef1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ef1e4: 0x240401ae  addiu       $a0, $zero, 0x1AE
    ctx->pc = 0x2ef1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2ef1e8: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x2ef1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x2ef1ec: 0x73c42018  mult1       $a0, $fp, $a0
    ctx->pc = 0x2ef1ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ef1f0: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x2ef1f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ef1f4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2ef1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2ef1f8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2ef1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ef1fc: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2ef1fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ef200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ef200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ef204: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ef204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ef208: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x2ef208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x2ef20c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2ef20cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ef210: 0x54600068  bnel        $v1, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x2EF210u;
    {
        const bool branch_taken_0x2ef210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef210) {
            ctx->pc = 0x2EF214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF210u;
            // 0x2ef214: 0x7ba300c0  lq          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF3B4u;
            goto label_2ef3b4;
        }
    }
    ctx->pc = 0x2EF218u;
    // 0x2ef218: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2ef218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2ef21c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2ef21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ef220: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2ef220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2ef224: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ef224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ef228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ef22c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ef22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef230: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ef230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ef234: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2ef234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ef238: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2ef238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ef23c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ef23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ef240: 0xc040180  jal         func_100600
    ctx->pc = 0x2EF240u;
    SET_GPR_U32(ctx, 31, 0x2EF248u);
    ctx->pc = 0x2EF244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF240u;
            // 0x2ef244: 0xa2a021  addu        $s4, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF248u; }
        if (ctx->pc != 0x2EF248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF248u; }
        if (ctx->pc != 0x2EF248u) { return; }
    }
    ctx->pc = 0x2EF248u;
label_2ef248:
    // 0x2ef248: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2EF248u;
    {
        const bool branch_taken_0x2ef248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF248u;
            // 0x2ef24c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef248) {
            ctx->pc = 0x2EF3B0u;
            goto label_2ef3b0;
        }
    }
    ctx->pc = 0x2EF250u;
    // 0x2ef250: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ef250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ef254: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ef254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef258: 0x8c4214d8  lw          $v0, 0x14D8($v0)
    ctx->pc = 0x2ef258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ef25c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ef25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef264: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ef264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef268: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ef268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef26c: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2EF26Cu;
    SET_GPR_U32(ctx, 31, 0x2EF274u);
    ctx->pc = 0x2EF270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF26Cu;
            // 0x2ef270: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF274u; }
        if (ctx->pc != 0x2EF274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF274u; }
        if (ctx->pc != 0x2EF274u) { return; }
    }
    ctx->pc = 0x2EF274u;
label_2ef274:
    // 0x2ef274: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2ef274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2ef278: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ef278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ef27c: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x2ef27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
    // 0x2ef280: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x2ef280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
    // 0x2ef284: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x2ef284u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x2ef288: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2ef288u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2ef28c: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x2ef28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2ef290: 0x7ba301a0  lq          $v1, 0x1A0($sp)
    ctx->pc = 0x2ef290u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2ef294: 0xa2b10054  sb          $s1, 0x54($s5)
    ctx->pc = 0x2ef294u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ef298: 0xa2a30056  sb          $v1, 0x56($s5)
    ctx->pc = 0x2ef298u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef29c: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x2ef29cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2ef2a0: 0xa2b30057  sb          $s3, 0x57($s5)
    ctx->pc = 0x2ef2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 87), (uint8_t)GPR_U32(ctx, 19));
    // 0x2ef2a4: 0xa2a30058  sb          $v1, 0x58($s5)
    ctx->pc = 0x2ef2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef2a8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2ef2a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ef2ac: 0xa6a4005a  sh          $a0, 0x5A($s5)
    ctx->pc = 0x2ef2acu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 90), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ef2b0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF2B0u;
    {
        const bool branch_taken_0x2ef2b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF2B0u;
            // 0x2ef2b4: 0xaea3005c  sw          $v1, 0x5C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2b0) {
            ctx->pc = 0x2EF2C8u;
            goto label_2ef2c8;
        }
    }
    ctx->pc = 0x2EF2B8u;
    // 0x2ef2b8: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x2ef2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x2ef2bc: 0x34638208  ori         $v1, $v1, 0x8208
    ctx->pc = 0x2ef2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33288);
    // 0x2ef2c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF2C0u;
    {
        const bool branch_taken_0x2ef2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF2C0u;
            // 0x2ef2c4: 0x2833021  addu        $a2, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2c0) {
            ctx->pc = 0x2EF2D4u;
            goto label_2ef2d4;
        }
    }
    ctx->pc = 0x2EF2C8u;
label_2ef2c8:
    // 0x2ef2c8: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x2ef2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x2ef2cc: 0x34632f70  ori         $v1, $v1, 0x2F70
    ctx->pc = 0x2ef2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12144);
    // 0x2ef2d0: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x2ef2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2ef2d4:
    // 0x2ef2d4: 0x28c303e8  slti        $v1, $a2, 0x3E8
    ctx->pc = 0x2ef2d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2ef2d8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF2D8u;
    {
        const bool branch_taken_0x2ef2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef2d8) {
            ctx->pc = 0x2EF2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF2D8u;
            // 0x2ef2dc: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF2E8u;
            goto label_2ef2e8;
        }
    }
    ctx->pc = 0x2EF2E0u;
    // 0x2ef2e0: 0x24c6fc18  addiu       $a2, $a2, -0x3E8
    ctx->pc = 0x2ef2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966296));
    // 0x2ef2e4: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ef2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ef2e8:
    // 0x2ef2e8: 0x34a381e0  ori         $v1, $a1, 0x81E0
    ctx->pc = 0x2ef2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33248);
    // 0x2ef2ec: 0x52830030  beql        $s4, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2EF2ECu;
    {
        const bool branch_taken_0x2ef2ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef2ec) {
            ctx->pc = 0x2EF2F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF2ECu;
            // 0x2ef2f0: 0xa2a00055  sb          $zero, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF3B0u;
            goto label_2ef3b0;
        }
    }
    ctx->pc = 0x2EF2F4u;
    // 0x2ef2f4: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2ef2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2ef2f8: 0x3483d478  ori         $v1, $a0, 0xD478
    ctx->pc = 0x2ef2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54392);
    // 0x2ef2fc: 0x12830015  beq         $s4, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EF2FCu;
    {
        const bool branch_taken_0x2ef2fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef2fc) {
            ctx->pc = 0x2EF354u;
            goto label_2ef354;
        }
    }
    ctx->pc = 0x2EF304u;
    // 0x2ef304: 0x34a389b0  ori         $v1, $a1, 0x89B0
    ctx->pc = 0x2ef304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35248);
    // 0x2ef308: 0x52830010  beql        $s4, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EF308u;
    {
        const bool branch_taken_0x2ef308 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef308) {
            ctx->pc = 0x2EF30Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF308u;
            // 0x2ef30c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF34Cu;
            goto label_2ef34c;
        }
    }
    ctx->pc = 0x2EF310u;
    // 0x2ef310: 0x3483dc48  ori         $v1, $a0, 0xDC48
    ctx->pc = 0x2ef310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56392);
    // 0x2ef314: 0x1283000c  beq         $s4, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EF314u;
    {
        const bool branch_taken_0x2ef314 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef314) {
            ctx->pc = 0x2EF348u;
            goto label_2ef348;
        }
    }
    ctx->pc = 0x2EF31Cu;
    // 0x2ef31c: 0x34a37df8  ori         $v1, $a1, 0x7DF8
    ctx->pc = 0x2ef31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32248);
    // 0x2ef320: 0x52830007  beql        $s4, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF320u;
    {
        const bool branch_taken_0x2ef320 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef320) {
            ctx->pc = 0x2EF324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF320u;
            // 0x2ef324: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF340u;
            goto label_2ef340;
        }
    }
    ctx->pc = 0x2EF328u;
    // 0x2ef328: 0x3483d090  ori         $v1, $a0, 0xD090
    ctx->pc = 0x2ef328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53392);
    // 0x2ef32c: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF32Cu;
    {
        const bool branch_taken_0x2ef32c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef32c) {
            ctx->pc = 0x2EF33Cu;
            goto label_2ef33c;
        }
    }
    ctx->pc = 0x2EF334u;
    // 0x2ef334: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EF334u;
    {
        const bool branch_taken_0x2ef334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef334) {
            ctx->pc = 0x2EF360u;
            goto label_2ef360;
        }
    }
    ctx->pc = 0x2EF33Cu;
label_2ef33c:
    // 0x2ef33c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ef33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ef340:
    // 0x2ef340: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2EF340u;
    {
        const bool branch_taken_0x2ef340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF340u;
            // 0x2ef344: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef340) {
            ctx->pc = 0x2EF3B0u;
            goto label_2ef3b0;
        }
    }
    ctx->pc = 0x2EF348u;
label_2ef348:
    // 0x2ef348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ef348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef34c:
    // 0x2ef34c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2EF34Cu;
    {
        const bool branch_taken_0x2ef34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF34Cu;
            // 0x2ef350: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef34c) {
            ctx->pc = 0x2EF3B0u;
            goto label_2ef3b0;
        }
    }
    ctx->pc = 0x2EF354u;
label_2ef354:
    // 0x2ef354: 0xa2a00055  sb          $zero, 0x55($s5)
    ctx->pc = 0x2ef354u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef358: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EF358u;
    {
        const bool branch_taken_0x2ef358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef358) {
            ctx->pc = 0x2EF3B0u;
            goto label_2ef3b0;
        }
    }
    ctx->pc = 0x2EF360u;
label_2ef360:
    // 0x2ef360: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EF360u;
    {
        const bool branch_taken_0x2ef360 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef360) {
            ctx->pc = 0x2EF3B0u;
            goto label_2ef3b0;
        }
    }
    ctx->pc = 0x2EF368u;
    // 0x2ef368: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x2ef368u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ef36c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF36Cu;
    {
        const bool branch_taken_0x2ef36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef36c) {
            ctx->pc = 0x2EF370u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF36Cu;
            // 0x2ef370: 0x92a40058  lbu         $a0, 0x58($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF37Cu;
            goto label_2ef37c;
        }
    }
    ctx->pc = 0x2EF374u;
    // 0x2ef374: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EF374u;
    {
        const bool branch_taken_0x2ef374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF374u;
            // 0x2ef378: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef374) {
            ctx->pc = 0x2EF3ACu;
            goto label_2ef3ac;
        }
    }
    ctx->pc = 0x2EF37Cu;
label_2ef37c:
    // 0x2ef37c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ef37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef380: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EF380u;
    {
        const bool branch_taken_0x2ef380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef380) {
            ctx->pc = 0x2EF384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF380u;
            // 0x2ef384: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF3A4u;
            goto label_2ef3a4;
        }
    }
    ctx->pc = 0x2EF388u;
    // 0x2ef388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ef388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef38c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF38Cu;
    {
        const bool branch_taken_0x2ef38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef38c) {
            ctx->pc = 0x2EF390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF38Cu;
            // 0x2ef390: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF39Cu;
            goto label_2ef39c;
        }
    }
    ctx->pc = 0x2EF394u;
    // 0x2ef394: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF394u;
    {
        const bool branch_taken_0x2ef394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef394) {
            ctx->pc = 0x2EF3B0u;
            goto label_2ef3b0;
        }
    }
    ctx->pc = 0x2EF39Cu;
label_2ef39c:
    // 0x2ef39c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF39Cu;
    {
        const bool branch_taken_0x2ef39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF39Cu;
            // 0x2ef3a0: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef39c) {
            ctx->pc = 0x2EF3B0u;
            goto label_2ef3b0;
        }
    }
    ctx->pc = 0x2EF3A4u;
label_2ef3a4:
    // 0x2ef3a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF3A4u;
    {
        const bool branch_taken_0x2ef3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF3A4u;
            // 0x2ef3a8: 0xa2a30055  sb          $v1, 0x55($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3a4) {
            ctx->pc = 0x2EF3B0u;
            goto label_2ef3b0;
        }
    }
    ctx->pc = 0x2EF3ACu;
label_2ef3ac:
    // 0x2ef3ac: 0xa2a30055  sb          $v1, 0x55($s5)
    ctx->pc = 0x2ef3acu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
label_2ef3b0:
    // 0x2ef3b0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x2ef3b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ef3b4:
    // 0x2ef3b4: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x2ef3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x2ef3b8: 0x24c61638  addiu       $a2, $a2, 0x1638
    ctx->pc = 0x2ef3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5688));
    // 0x2ef3bc: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x2ef3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2ef3c0: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2ef3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2ef3c4: 0x94680000  lhu         $t0, 0x0($v1)
    ctx->pc = 0x2ef3c4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ef3c8: 0x2403035c  addiu       $v1, $zero, 0x35C
    ctx->pc = 0x2ef3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
    // 0x2ef3cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ef3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ef3d0: 0x2e33818  mult        $a3, $s7, $v1
    ctx->pc = 0x2ef3d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2ef3d4: 0x240301ae  addiu       $v1, $zero, 0x1AE
    ctx->pc = 0x2ef3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x2ef3d8: 0x73c32818  mult1       $a1, $fp, $v1
    ctx->pc = 0x2ef3d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ef3dc: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2ef3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2ef3e0: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x2ef3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x2ef3e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ef3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ef3e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ef3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ef3ec: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x2ef3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2ef3f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ef3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ef3f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2ef3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ef3f8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x2ef3f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ef3fc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x2ef3fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ef400: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x2EF400u;
    {
        const bool branch_taken_0x2ef400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef400) {
            ctx->pc = 0x2EF564u;
            goto label_2ef564;
        }
    }
    ctx->pc = 0x2EF408u;
    // 0x2ef408: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2ef408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2ef40c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2ef40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ef410: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2ef410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2ef414: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ef414u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ef418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ef41c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ef41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef420: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ef420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ef424: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x2ef424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ef428: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2ef428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ef42c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ef42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ef430: 0xc040180  jal         func_100600
    ctx->pc = 0x2EF430u;
    SET_GPR_U32(ctx, 31, 0x2EF438u);
    ctx->pc = 0x2EF434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF430u;
            // 0x2ef434: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF438u; }
        if (ctx->pc != 0x2EF438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF438u; }
        if (ctx->pc != 0x2EF438u) { return; }
    }
    ctx->pc = 0x2EF438u;
label_2ef438:
    // 0x2ef438: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2EF438u;
    {
        const bool branch_taken_0x2ef438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF438u;
            // 0x2ef43c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef438) {
            ctx->pc = 0x2EF558u;
            goto label_2ef558;
        }
    }
    ctx->pc = 0x2EF440u;
    // 0x2ef440: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ef440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ef444: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ef444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef448: 0x8c5514d8  lw          $s5, 0x14D8($v0)
    ctx->pc = 0x2ef448u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ef44c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ef44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef454: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ef454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef458: 0xc10ca38  jal         func_4328E0
    ctx->pc = 0x2EF458u;
    SET_GPR_U32(ctx, 31, 0x2EF460u);
    ctx->pc = 0x2EF45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF458u;
            // 0x2ef45c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF460u; }
        if (ctx->pc != 0x2EF460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF460u; }
        if (ctx->pc != 0x2EF460u) { return; }
    }
    ctx->pc = 0x2EF460u;
label_2ef460:
    // 0x2ef460: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ef460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ef464: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x2ef464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2ef468: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2ef468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2ef46c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2ef46cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2ef470: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ef470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ef474: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x2ef474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
    // 0x2ef478: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2ef478u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2ef47c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ef47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ef480: 0xa2910054  sb          $s1, 0x54($s4)
    ctx->pc = 0x2ef480u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 84), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ef484: 0xa2830056  sb          $v1, 0x56($s4)
    ctx->pc = 0x2ef484u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef488: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x2ef488u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2ef48c: 0xa2930057  sb          $s3, 0x57($s4)
    ctx->pc = 0x2ef48cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 87), (uint8_t)GPR_U32(ctx, 19));
    // 0x2ef490: 0xa2830058  sb          $v1, 0x58($s4)
    ctx->pc = 0x2ef490u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef494: 0xa684005a  sh          $a0, 0x5A($s4)
    ctx->pc = 0x2ef494u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 90), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ef498: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF498u;
    {
        const bool branch_taken_0x2ef498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF498u;
            // 0x2ef49c: 0xae95005c  sw          $s5, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef498) {
            ctx->pc = 0x2EF4B0u;
            goto label_2ef4b0;
        }
    }
    ctx->pc = 0x2EF4A0u;
    // 0x2ef4a0: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x2ef4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x2ef4a4: 0x34638208  ori         $v1, $v1, 0x8208
    ctx->pc = 0x2ef4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33288);
    // 0x2ef4a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF4A8u;
    {
        const bool branch_taken_0x2ef4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF4A8u;
            // 0x2ef4ac: 0x2033021  addu        $a2, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4a8) {
            ctx->pc = 0x2EF4BCu;
            goto label_2ef4bc;
        }
    }
    ctx->pc = 0x2EF4B0u;
label_2ef4b0:
    // 0x2ef4b0: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x2ef4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x2ef4b4: 0x34632f70  ori         $v1, $v1, 0x2F70
    ctx->pc = 0x2ef4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12144);
    // 0x2ef4b8: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x2ef4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2ef4bc:
    // 0x2ef4bc: 0x28c303e8  slti        $v1, $a2, 0x3E8
    ctx->pc = 0x2ef4bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2ef4c0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF4C0u;
    {
        const bool branch_taken_0x2ef4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef4c0) {
            ctx->pc = 0x2EF4C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF4C0u;
            // 0x2ef4c4: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF4D0u;
            goto label_2ef4d0;
        }
    }
    ctx->pc = 0x2EF4C8u;
    // 0x2ef4c8: 0x24c6fc18  addiu       $a2, $a2, -0x3E8
    ctx->pc = 0x2ef4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966296));
    // 0x2ef4cc: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2ef4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
label_2ef4d0:
    // 0x2ef4d0: 0x34a381e0  ori         $v1, $a1, 0x81E0
    ctx->pc = 0x2ef4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33248);
    // 0x2ef4d4: 0x52030020  beql        $s0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EF4D4u;
    {
        const bool branch_taken_0x2ef4d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef4d4) {
            ctx->pc = 0x2EF4D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF4D4u;
            // 0x2ef4d8: 0xa2800055  sb          $zero, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF558u;
            goto label_2ef558;
        }
    }
    ctx->pc = 0x2EF4DCu;
    // 0x2ef4dc: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x2ef4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x2ef4e0: 0x3483d478  ori         $v1, $a0, 0xD478
    ctx->pc = 0x2ef4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54392);
    // 0x2ef4e4: 0x12030015  beq         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EF4E4u;
    {
        const bool branch_taken_0x2ef4e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef4e4) {
            ctx->pc = 0x2EF53Cu;
            goto label_2ef53c;
        }
    }
    ctx->pc = 0x2EF4ECu;
    // 0x2ef4ec: 0x34a389b0  ori         $v1, $a1, 0x89B0
    ctx->pc = 0x2ef4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35248);
    // 0x2ef4f0: 0x52030010  beql        $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EF4F0u;
    {
        const bool branch_taken_0x2ef4f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef4f0) {
            ctx->pc = 0x2EF4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF4F0u;
            // 0x2ef4f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF534u;
            goto label_2ef534;
        }
    }
    ctx->pc = 0x2EF4F8u;
    // 0x2ef4f8: 0x3483dc48  ori         $v1, $a0, 0xDC48
    ctx->pc = 0x2ef4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)56392);
    // 0x2ef4fc: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EF4FCu;
    {
        const bool branch_taken_0x2ef4fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef4fc) {
            ctx->pc = 0x2EF530u;
            goto label_2ef530;
        }
    }
    ctx->pc = 0x2EF504u;
    // 0x2ef504: 0x34a37df8  ori         $v1, $a1, 0x7DF8
    ctx->pc = 0x2ef504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32248);
    // 0x2ef508: 0x52030007  beql        $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF508u;
    {
        const bool branch_taken_0x2ef508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef508) {
            ctx->pc = 0x2EF50Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF508u;
            // 0x2ef50c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF528u;
            goto label_2ef528;
        }
    }
    ctx->pc = 0x2EF510u;
    // 0x2ef510: 0x3483d090  ori         $v1, $a0, 0xD090
    ctx->pc = 0x2ef510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53392);
    // 0x2ef514: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF514u;
    {
        const bool branch_taken_0x2ef514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ef514) {
            ctx->pc = 0x2EF524u;
            goto label_2ef524;
        }
    }
    ctx->pc = 0x2EF51Cu;
    // 0x2ef51c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EF51Cu;
    {
        const bool branch_taken_0x2ef51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef51c) {
            ctx->pc = 0x2EF548u;
            goto label_2ef548;
        }
    }
    ctx->pc = 0x2EF524u;
label_2ef524:
    // 0x2ef524: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ef524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ef528:
    // 0x2ef528: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EF528u;
    {
        const bool branch_taken_0x2ef528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF528u;
            // 0x2ef52c: 0xa2830055  sb          $v1, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef528) {
            ctx->pc = 0x2EF558u;
            goto label_2ef558;
        }
    }
    ctx->pc = 0x2EF530u;
label_2ef530:
    // 0x2ef530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ef530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef534:
    // 0x2ef534: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EF534u;
    {
        const bool branch_taken_0x2ef534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF534u;
            // 0x2ef538: 0xa2830055  sb          $v1, 0x55($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef534) {
            ctx->pc = 0x2EF558u;
            goto label_2ef558;
        }
    }
    ctx->pc = 0x2EF53Cu;
label_2ef53c:
    // 0x2ef53c: 0xa2800055  sb          $zero, 0x55($s4)
    ctx->pc = 0x2ef53cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef540: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF540u;
    {
        const bool branch_taken_0x2ef540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef540) {
            ctx->pc = 0x2EF558u;
            goto label_2ef558;
        }
    }
    ctx->pc = 0x2EF548u;
label_2ef548:
    // 0x2ef548: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF548u;
    {
        const bool branch_taken_0x2ef548 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef548) {
            ctx->pc = 0x2EF558u;
            goto label_2ef558;
        }
    }
    ctx->pc = 0x2EF550u;
    // 0x2ef550: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ef550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ef554: 0xa2830055  sb          $v1, 0x55($s4)
    ctx->pc = 0x2ef554u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 85), (uint8_t)GPR_U32(ctx, 3));
label_2ef558:
    // 0x2ef558: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x2ef558u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ef55c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ef55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ef560: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x2ef560u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
label_2ef564:
    // 0x2ef564: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ef564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2ef568:
    // 0x2ef568: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2ef568u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ef56c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ef56cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ef570: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ef570u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ef574: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ef574u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef578: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ef578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef57c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ef57cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef580: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ef580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef58c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF58Cu;
            // 0x2ef590: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EF594u;
    // 0x2ef594: 0x0  nop
    ctx->pc = 0x2ef594u;
    // NOP
    // 0x2ef598: 0x0  nop
    ctx->pc = 0x2ef598u;
    // NOP
    // 0x2ef59c: 0x0  nop
    ctx->pc = 0x2ef59cu;
    // NOP
    // 0x2ef5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ef5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ef5a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ef5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ef5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef5ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef5b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ef5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef5b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EF5B4u;
    {
        const bool branch_taken_0x2ef5b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF5B4u;
            // 0x2ef5b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5b4) {
            ctx->pc = 0x2EF5F8u;
            goto label_2ef5f8;
        }
    }
    ctx->pc = 0x2EF5BCu;
    // 0x2ef5bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ef5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ef5c0: 0x24423110  addiu       $v0, $v0, 0x3110
    ctx->pc = 0x2ef5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
    // 0x2ef5c4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF5C4u;
    {
        const bool branch_taken_0x2ef5c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF5C4u;
            // 0x2ef5c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5c4) {
            ctx->pc = 0x2EF5E0u;
            goto label_2ef5e0;
        }
    }
    ctx->pc = 0x2EF5CCu;
    // 0x2ef5cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ef5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ef5d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef5d4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2ef5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2ef5d8: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x2EF5D8u;
    SET_GPR_U32(ctx, 31, 0x2EF5E0u);
    ctx->pc = 0x2EF5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF5D8u;
            // 0x2ef5dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF5E0u; }
        if (ctx->pc != 0x2EF5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF5E0u; }
        if (ctx->pc != 0x2EF5E0u) { return; }
    }
    ctx->pc = 0x2EF5E0u;
label_2ef5e0:
    // 0x2ef5e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ef5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2ef5e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ef5e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ef5e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF5E8u;
    {
        const bool branch_taken_0x2ef5e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ef5e8) {
            ctx->pc = 0x2EF5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF5E8u;
            // 0x2ef5ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF5FCu;
            goto label_2ef5fc;
        }
    }
    ctx->pc = 0x2EF5F0u;
    // 0x2ef5f0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2EF5F0u;
    SET_GPR_U32(ctx, 31, 0x2EF5F8u);
    ctx->pc = 0x2EF5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF5F0u;
            // 0x2ef5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF5F8u; }
        if (ctx->pc != 0x2EF5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF5F8u; }
        if (ctx->pc != 0x2EF5F8u) { return; }
    }
    ctx->pc = 0x2EF5F8u;
label_2ef5f8:
    // 0x2ef5f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ef5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef5fc:
    // 0x2ef5fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ef5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef608: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF608u;
            // 0x2ef60c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EF610u;
    // 0x2ef610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ef610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ef614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ef614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ef618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef61c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ef620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef624: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EF624u;
    {
        const bool branch_taken_0x2ef624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF624u;
            // 0x2ef628: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef624) {
            ctx->pc = 0x2EF668u;
            goto label_2ef668;
        }
    }
    ctx->pc = 0x2EF62Cu;
    // 0x2ef62c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ef62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ef630: 0x24423140  addiu       $v0, $v0, 0x3140
    ctx->pc = 0x2ef630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12608));
    // 0x2ef634: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF634u;
    {
        const bool branch_taken_0x2ef634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF634u;
            // 0x2ef638: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef634) {
            ctx->pc = 0x2EF650u;
            goto label_2ef650;
        }
    }
    ctx->pc = 0x2EF63Cu;
    // 0x2ef63c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ef63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ef640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef644: 0x24423060  addiu       $v0, $v0, 0x3060
    ctx->pc = 0x2ef644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
    // 0x2ef648: 0xc075bf8  jal         func_1D6FE0
    ctx->pc = 0x2EF648u;
    SET_GPR_U32(ctx, 31, 0x2EF650u);
    ctx->pc = 0x2EF64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF648u;
            // 0x2ef64c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF650u; }
        if (ctx->pc != 0x2EF650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF650u; }
        if (ctx->pc != 0x2EF650u) { return; }
    }
    ctx->pc = 0x2EF650u;
label_2ef650:
    // 0x2ef650: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ef650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2ef654: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ef654u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ef658: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF658u;
    {
        const bool branch_taken_0x2ef658 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ef658) {
            ctx->pc = 0x2EF65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF658u;
            // 0x2ef65c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF66Cu;
            goto label_2ef66c;
        }
    }
    ctx->pc = 0x2EF660u;
    // 0x2ef660: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2EF660u;
    SET_GPR_U32(ctx, 31, 0x2EF668u);
    ctx->pc = 0x2EF664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF660u;
            // 0x2ef664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF668u; }
        if (ctx->pc != 0x2EF668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF668u; }
        if (ctx->pc != 0x2EF668u) { return; }
    }
    ctx->pc = 0x2EF668u;
label_2ef668:
    // 0x2ef668: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ef668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef66c:
    // 0x2ef66c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ef66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef678: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF678u;
            // 0x2ef67c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EF680u;
    // 0x2ef680: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ef680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ef684: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ef684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ef688: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ef688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ef68c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ef68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ef690: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ef690u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef694: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ef694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ef698: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ef698u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef69c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ef69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ef6a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ef6a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef6a8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ef6a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef6b0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2ef6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6b4: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x2ef6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x2ef6b8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2ef6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ef6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6c0: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x2ef6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2ef6c4: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x2ef6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef6c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ef6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6cc: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2EF6CCu;
    SET_GPR_U32(ctx, 31, 0x2EF6D4u);
    ctx->pc = 0x2EF6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF6CCu;
            // 0x2ef6d0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF6D4u; }
        if (ctx->pc != 0x2EF6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF6D4u; }
        if (ctx->pc != 0x2EF6D4u) { return; }
    }
    ctx->pc = 0x2EF6D4u;
label_2ef6d4:
    // 0x2ef6d4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2ef6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef6d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ef6d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ef6dc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ef6dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ef6e0: 0xc04ce84  jal         func_133A10
    ctx->pc = 0x2EF6E0u;
    SET_GPR_U32(ctx, 31, 0x2EF6E8u);
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF6E8u; }
        if (ctx->pc != 0x2EF6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF6E8u; }
        if (ctx->pc != 0x2EF6E8u) { return; }
    }
    ctx->pc = 0x2EF6E8u;
label_2ef6e8:
    // 0x2ef6e8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2ef6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef6ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef6f0: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2ef6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2ef6f4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2ef6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef6f8: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x2ef6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2ef6fc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2ef6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef700: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ef700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ef704: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ef704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ef708: 0xc04ceac  jal         func_133AB0
    ctx->pc = 0x2EF708u;
    SET_GPR_U32(ctx, 31, 0x2EF710u);
    ctx->pc = 0x133AB0u;
    if (runtime->hasFunction(0x133AB0u)) {
        auto targetFn = runtime->lookupFunction(0x133AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF710u; }
        if (ctx->pc != 0x2EF710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AB0_0x133ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF710u; }
        if (ctx->pc != 0x2EF710u) { return; }
    }
    ctx->pc = 0x2EF710u;
label_2ef710:
    // 0x2ef710: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2ef710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef714: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ef714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ef718: 0x26a50080  addiu       $a1, $s5, 0x80
    ctx->pc = 0x2ef718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x2ef71c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ef71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef720: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ef720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef724: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef728: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x2ef728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2ef72c: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x2EF72Cu;
    SET_GPR_U32(ctx, 31, 0x2EF734u);
    ctx->pc = 0x2EF730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF72Cu;
            // 0x2ef730: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF734u; }
        if (ctx->pc != 0x2EF734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF734u; }
        if (ctx->pc != 0x2EF734u) { return; }
    }
    ctx->pc = 0x2EF734u;
label_2ef734:
    // 0x2ef734: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2EF734u;
    {
        const bool branch_taken_0x2ef734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef734) {
            ctx->pc = 0x2EF738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF734u;
            // 0x2ef738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF764u;
            goto label_2ef764;
        }
    }
    ctx->pc = 0x2EF73Cu;
    // 0x2ef73c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ef73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef740: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ef740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef744: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x2EF744u;
    SET_GPR_U32(ctx, 31, 0x2EF74Cu);
    ctx->pc = 0x2EF748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF744u;
            // 0x2ef748: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF74Cu; }
        if (ctx->pc != 0x2EF74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF74Cu; }
        if (ctx->pc != 0x2EF74Cu) { return; }
    }
    ctx->pc = 0x2EF74Cu;
label_2ef74c:
    // 0x2ef74c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ef74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef750: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2ef750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2ef754: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x2EF754u;
    SET_GPR_U32(ctx, 31, 0x2EF75Cu);
    ctx->pc = 0x2EF758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF754u;
            // 0x2ef758: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF75Cu; }
        if (ctx->pc != 0x2EF75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF75Cu; }
        if (ctx->pc != 0x2EF75Cu) { return; }
    }
    ctx->pc = 0x2EF75Cu;
label_2ef75c:
    // 0x2ef75c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF75Cu;
    {
        const bool branch_taken_0x2ef75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF75Cu;
            // 0x2ef760: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef75c) {
            ctx->pc = 0x2EF774u;
            goto label_2ef774;
        }
    }
    ctx->pc = 0x2EF764u;
label_2ef764:
    // 0x2ef764: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2ef764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2ef768: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x2EF768u;
    SET_GPR_U32(ctx, 31, 0x2EF770u);
    ctx->pc = 0x2EF76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF768u;
            // 0x2ef76c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF770u; }
        if (ctx->pc != 0x2EF770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF770u; }
        if (ctx->pc != 0x2EF770u) { return; }
    }
    ctx->pc = 0x2EF770u;
label_2ef770:
    // 0x2ef770: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ef770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ef774:
    // 0x2ef774: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ef774u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef778: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ef778u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef77c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ef77cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef780: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ef780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef78c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF78Cu;
            // 0x2ef790: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EF794u;
    // 0x2ef794: 0x0  nop
    ctx->pc = 0x2ef794u;
    // NOP
    // 0x2ef798: 0x0  nop
    ctx->pc = 0x2ef798u;
    // NOP
    // 0x2ef79c: 0x0  nop
    ctx->pc = 0x2ef79cu;
    // NOP
    // 0x2ef7a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ef7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ef7a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ef7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ef7a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ef7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ef7ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef7b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef7b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ef7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7b8: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x2ef7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x2ef7bc: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x2EF7BCu;
    SET_GPR_U32(ctx, 31, 0x2EF7C4u);
    ctx->pc = 0x2EF7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF7BCu;
            // 0x2ef7c0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF7C4u; }
        if (ctx->pc != 0x2EF7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF7C4u; }
        if (ctx->pc != 0x2EF7C4u) { return; }
    }
    ctx->pc = 0x2EF7C4u;
label_2ef7c4:
    // 0x2ef7c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2ef7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2ef7c8: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x2EF7C8u;
    SET_GPR_U32(ctx, 31, 0x2EF7D0u);
    ctx->pc = 0x2EF7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF7C8u;
            // 0x2ef7cc: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF7D0u; }
        if (ctx->pc != 0x2EF7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF7D0u; }
        if (ctx->pc != 0x2EF7D0u) { return; }
    }
    ctx->pc = 0x2EF7D0u;
label_2ef7d0:
    // 0x2ef7d0: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x2ef7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
    // 0x2ef7d4: 0x522825  or          $a1, $v0, $s2
    ctx->pc = 0x2ef7d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x2ef7d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ef7d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef7dc: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF7DCu;
    {
        const bool branch_taken_0x2ef7dc = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2ef7dc) {
            ctx->pc = 0x2EF7E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF7DCu;
            // 0x2ef7e0: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF7F0u;
            goto label_2ef7f0;
        }
    }
    ctx->pc = 0x2EF7E4u;
    // 0x2ef7e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ef7e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef7e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF7E8u;
    {
        const bool branch_taken_0x2ef7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF7E8u;
            // 0x2ef7ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7e8) {
            ctx->pc = 0x2EF808u;
            goto label_2ef808;
        }
    }
    ctx->pc = 0x2EF7F0u;
label_2ef7f0:
    // 0x2ef7f0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2ef7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2ef7f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ef7f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2ef7f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ef7f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef7fc: 0x0  nop
    ctx->pc = 0x2ef7fcu;
    // NOP
    // 0x2ef800: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ef800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ef804: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ef804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ef808:
    // 0x2ef808: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ef808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef80c: 0x3c0543b4  lui         $a1, 0x43B4
    ctx->pc = 0x2ef80cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17332 << 16));
    // 0x2ef810: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x2ef810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
    // 0x2ef814: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x2ef814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
    // 0x2ef818: 0x34840007  ori         $a0, $a0, 0x7
    ctx->pc = 0x2ef818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7);
    // 0x2ef81c: 0x34630b60  ori         $v1, $v1, 0xB60
    ctx->pc = 0x2ef81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
    // 0x2ef820: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ef820u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef824: 0x0  nop
    ctx->pc = 0x2ef824u;
    // NOP
    // 0x2ef828: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2ef828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ef82c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ef82cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef830: 0x0  nop
    ctx->pc = 0x2ef830u;
    // NOP
    // 0x2ef834: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ef834u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ef838: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef83c: 0x0  nop
    ctx->pc = 0x2ef83cu;
    // NOP
    // 0x2ef840: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ef840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ef844: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ef844u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ef848: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ef848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ef84c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2ef84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2ef850: 0x86230034  lh          $v1, 0x34($s1)
    ctx->pc = 0x2ef850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2ef854: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2ef854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef858: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ef858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef85c: 0x0  nop
    ctx->pc = 0x2ef85cu;
    // NOP
    // 0x2ef860: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ef860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ef864: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ef864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ef868: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2ef868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2ef86c: 0x86230034  lh          $v1, 0x34($s1)
    ctx->pc = 0x2ef86cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2ef870: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2ef870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef874: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ef874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef878: 0x0  nop
    ctx->pc = 0x2ef878u;
    // NOP
    // 0x2ef87c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ef87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ef880: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ef880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ef884: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2ef884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2ef888: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2ef888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef88c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ef88cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ef890: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2ef890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2ef894: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2ef894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef898: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ef898u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ef89c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2ef89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2ef8a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ef8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef8a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ef8a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef8a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef8a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef8ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF8B0u;
            // 0x2ef8b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EF8B8u;
    // 0x2ef8b8: 0x0  nop
    ctx->pc = 0x2ef8b8u;
    // NOP
    // 0x2ef8bc: 0x0  nop
    ctx->pc = 0x2ef8bcu;
    // NOP
    // 0x2ef8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ef8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ef8c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ef8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ef8c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef8cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef8d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ef8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EF8D4u;
    {
        const bool branch_taken_0x2ef8d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF8D4u;
            // 0x2ef8d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8d4) {
            ctx->pc = 0x2EF918u;
            goto label_2ef918;
        }
    }
    ctx->pc = 0x2EF8DCu;
    // 0x2ef8dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ef8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ef8e0: 0x24423180  addiu       $v0, $v0, 0x3180
    ctx->pc = 0x2ef8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12672));
    // 0x2ef8e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF8E4u;
    {
        const bool branch_taken_0x2ef8e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF8E4u;
            // 0x2ef8e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8e4) {
            ctx->pc = 0x2EF900u;
            goto label_2ef900;
        }
    }
    ctx->pc = 0x2EF8ECu;
    // 0x2ef8ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ef8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ef8f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8f4: 0x24423060  addiu       $v0, $v0, 0x3060
    ctx->pc = 0x2ef8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
    // 0x2ef8f8: 0xc075bf8  jal         func_1D6FE0
    ctx->pc = 0x2EF8F8u;
    SET_GPR_U32(ctx, 31, 0x2EF900u);
    ctx->pc = 0x2EF8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF8F8u;
            // 0x2ef8fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF900u; }
        if (ctx->pc != 0x2EF900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF900u; }
        if (ctx->pc != 0x2EF900u) { return; }
    }
    ctx->pc = 0x2EF900u;
label_2ef900:
    // 0x2ef900: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ef900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2ef904: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ef904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ef908: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF908u;
    {
        const bool branch_taken_0x2ef908 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ef908) {
            ctx->pc = 0x2EF90Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF908u;
            // 0x2ef90c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EF91Cu;
            goto label_2ef91c;
        }
    }
    ctx->pc = 0x2EF910u;
    // 0x2ef910: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2EF910u;
    SET_GPR_U32(ctx, 31, 0x2EF918u);
    ctx->pc = 0x2EF914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF910u;
            // 0x2ef914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF918u; }
        if (ctx->pc != 0x2EF918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF918u; }
        if (ctx->pc != 0x2EF918u) { return; }
    }
    ctx->pc = 0x2EF918u;
label_2ef918:
    // 0x2ef918: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ef918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef91c:
    // 0x2ef91c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ef91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef928: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF928u;
            // 0x2ef92c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EF930u;
    // 0x2ef930: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ef930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ef934: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ef934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ef938: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ef938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ef93c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ef93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ef940: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ef940u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef944: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ef944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ef948: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ef948u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef94c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ef94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ef950: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ef950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef954: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef958: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ef958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef960: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2ef960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef964: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x2ef964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x2ef968: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2ef968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef96c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ef96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef970: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x2ef970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2ef974: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x2ef974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ef978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef97c: 0xc04cc7c  jal         func_1331F0
    ctx->pc = 0x2EF97Cu;
    SET_GPR_U32(ctx, 31, 0x2EF984u);
    ctx->pc = 0x2EF980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF97Cu;
            // 0x2ef980: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF984u; }
        if (ctx->pc != 0x2EF984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF984u; }
        if (ctx->pc != 0x2EF984u) { return; }
    }
    ctx->pc = 0x2EF984u;
label_2ef984:
    // 0x2ef984: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2ef984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef988: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ef988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ef98c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ef98cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ef990: 0xc04ce84  jal         func_133A10
    ctx->pc = 0x2EF990u;
    SET_GPR_U32(ctx, 31, 0x2EF998u);
    ctx->pc = 0x133A10u;
    if (runtime->hasFunction(0x133A10u)) {
        auto targetFn = runtime->lookupFunction(0x133A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF998u; }
        if (ctx->pc != 0x2EF998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A10_0x133a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF998u; }
        if (ctx->pc != 0x2EF998u) { return; }
    }
    ctx->pc = 0x2EF998u;
label_2ef998:
    // 0x2ef998: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2ef998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef99c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef99cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef9a0: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2ef9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2ef9a4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2ef9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef9a8: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x2ef9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2ef9ac: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2ef9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef9b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ef9b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ef9b4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ef9b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ef9b8: 0xc04ceac  jal         func_133AB0
    ctx->pc = 0x2EF9B8u;
    SET_GPR_U32(ctx, 31, 0x2EF9C0u);
    ctx->pc = 0x133AB0u;
    if (runtime->hasFunction(0x133AB0u)) {
        auto targetFn = runtime->lookupFunction(0x133AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF9C0u; }
        if (ctx->pc != 0x2EF9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AB0_0x133ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF9C0u; }
        if (ctx->pc != 0x2EF9C0u) { return; }
    }
    ctx->pc = 0x2EF9C0u;
label_2ef9c0:
    // 0x2ef9c0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2ef9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef9c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ef9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ef9c8: 0x26a50080  addiu       $a1, $s5, 0x80
    ctx->pc = 0x2ef9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x2ef9cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ef9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9d0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ef9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ef9d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef9d8: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x2ef9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2ef9dc: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x2EF9DCu;
    SET_GPR_U32(ctx, 31, 0x2EF9E4u);
    ctx->pc = 0x2EF9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF9DCu;
            // 0x2ef9e0: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF9E4u; }
        if (ctx->pc != 0x2EF9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF9E4u; }
        if (ctx->pc != 0x2EF9E4u) { return; }
    }
    ctx->pc = 0x2EF9E4u;
label_2ef9e4:
    // 0x2ef9e4: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2EF9E4u;
    {
        const bool branch_taken_0x2ef9e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef9e4) {
            ctx->pc = 0x2EF9E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF9E4u;
            // 0x2ef9e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFA14u;
            goto label_2efa14;
        }
    }
    ctx->pc = 0x2EF9ECu;
    // 0x2ef9ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ef9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ef9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef9f4: 0xc04ccc4  jal         func_133310
    ctx->pc = 0x2EF9F4u;
    SET_GPR_U32(ctx, 31, 0x2EF9FCu);
    ctx->pc = 0x2EF9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF9F4u;
            // 0x2ef9f8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF9FCu; }
        if (ctx->pc != 0x2EF9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF9FCu; }
        if (ctx->pc != 0x2EF9FCu) { return; }
    }
    ctx->pc = 0x2EF9FCu;
label_2ef9fc:
    // 0x2ef9fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ef9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa00: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2efa00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2efa04: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x2EFA04u;
    SET_GPR_U32(ctx, 31, 0x2EFA0Cu);
    ctx->pc = 0x2EFA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFA04u;
            // 0x2efa08: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA0Cu; }
        if (ctx->pc != 0x2EFA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA0Cu; }
        if (ctx->pc != 0x2EFA0Cu) { return; }
    }
    ctx->pc = 0x2EFA0Cu;
label_2efa0c:
    // 0x2efa0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFA0Cu;
    {
        const bool branch_taken_0x2efa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFA0Cu;
            // 0x2efa10: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efa0c) {
            ctx->pc = 0x2EFA24u;
            goto label_2efa24;
        }
    }
    ctx->pc = 0x2EFA14u;
label_2efa14:
    // 0x2efa14: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2efa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2efa18: 0xc04cbe0  jal         func_132F80
    ctx->pc = 0x2EFA18u;
    SET_GPR_U32(ctx, 31, 0x2EFA20u);
    ctx->pc = 0x2EFA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFA18u;
            // 0x2efa1c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA20u; }
        if (ctx->pc != 0x2EFA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA20u; }
        if (ctx->pc != 0x2EFA20u) { return; }
    }
    ctx->pc = 0x2EFA20u;
label_2efa20:
    // 0x2efa20: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2efa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2efa24:
    // 0x2efa24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2efa24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2efa28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2efa28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2efa2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2efa2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2efa30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2efa30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2efa34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2efa34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efa38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2efa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFA3Cu;
            // 0x2efa40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EFA44u;
    // 0x2efa44: 0x0  nop
    ctx->pc = 0x2efa44u;
    // NOP
    // 0x2efa48: 0x0  nop
    ctx->pc = 0x2efa48u;
    // NOP
    // 0x2efa4c: 0x0  nop
    ctx->pc = 0x2efa4cu;
    // NOP
    // 0x2efa50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2efa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2efa54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2efa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2efa58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2efa58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2efa5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2efa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2efa60: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2efa60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2efa64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2efa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2efa68: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2efa68u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2efa6c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2efa6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa70: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2EFA70u;
    SET_GPR_U32(ctx, 31, 0x2EFA78u);
    ctx->pc = 0x2EFA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFA70u;
            // 0x2efa74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA78u; }
        if (ctx->pc != 0x2EFA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA78u; }
        if (ctx->pc != 0x2EFA78u) { return; }
    }
    ctx->pc = 0x2EFA78u;
label_2efa78:
    // 0x2efa78: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x2EFA78u;
    SET_GPR_U32(ctx, 31, 0x2EFA80u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA80u; }
        if (ctx->pc != 0x2EFA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA80u; }
        if (ctx->pc != 0x2EFA80u) { return; }
    }
    ctx->pc = 0x2EFA80u;
label_2efa80:
    // 0x2efa80: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2efa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2efa84: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x2EFA84u;
    SET_GPR_U32(ctx, 31, 0x2EFA8Cu);
    ctx->pc = 0x2EFA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFA84u;
            // 0x2efa88: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA8Cu; }
        if (ctx->pc != 0x2EFA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFA8Cu; }
        if (ctx->pc != 0x2EFA8Cu) { return; }
    }
    ctx->pc = 0x2EFA8Cu;
label_2efa8c:
    // 0x2efa8c: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x2efa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
    // 0x2efa90: 0x512825  or          $a1, $v0, $s1
    ctx->pc = 0x2efa90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x2efa94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2efa94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2efa98: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFA98u;
    {
        const bool branch_taken_0x2efa98 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2efa98) {
            ctx->pc = 0x2EFA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFA98u;
            // 0x2efa9c: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFAACu;
            goto label_2efaac;
        }
    }
    ctx->pc = 0x2EFAA0u;
    // 0x2efaa0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2efaa0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efaa4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EFAA4u;
    {
        const bool branch_taken_0x2efaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFAA4u;
            // 0x2efaa8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efaa4) {
            ctx->pc = 0x2EFAC4u;
            goto label_2efac4;
        }
    }
    ctx->pc = 0x2EFAACu;
label_2efaac:
    // 0x2efaac: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2efaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2efab0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2efab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2efab4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2efab4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efab8: 0x0  nop
    ctx->pc = 0x2efab8u;
    // NOP
    // 0x2efabc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2efabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2efac0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2efac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2efac4:
    // 0x2efac4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2efac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2efac8: 0x3c0543b4  lui         $a1, 0x43B4
    ctx->pc = 0x2efac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17332 << 16));
    // 0x2efacc: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x2efaccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
    // 0x2efad0: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x2efad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
    // 0x2efad4: 0x34840007  ori         $a0, $a0, 0x7
    ctx->pc = 0x2efad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7);
    // 0x2efad8: 0x34630b60  ori         $v1, $v1, 0xB60
    ctx->pc = 0x2efad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
    // 0x2efadc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2efadcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efae0: 0x0  nop
    ctx->pc = 0x2efae0u;
    // NOP
    // 0x2efae4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2efae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2efae8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2efae8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efaec: 0x0  nop
    ctx->pc = 0x2efaecu;
    // NOP
    // 0x2efaf0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2efaf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2efaf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2efaf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efaf8: 0x0  nop
    ctx->pc = 0x2efaf8u;
    // NOP
    // 0x2efafc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2efafcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2efb00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efb00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2efb04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2efb04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2efb08: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2efb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2efb0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2efb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2efb10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2efb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2efb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efb18: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFB18u;
            // 0x2efb1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EFB20u;
}
