#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018FAA8
// Address: 0x18faa8 - 0x18fdd0
void sub_0018FAA8_0x18faa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FAA8_0x18faa8");
#endif

    switch (ctx->pc) {
        case 0x18fc94u: goto label_18fc94;
        case 0x18fcc4u: goto label_18fcc4;
        case 0x18fcd8u: goto label_18fcd8;
        case 0x18fd58u: goto label_18fd58;
        case 0x18fd60u: goto label_18fd60;
        case 0x18fd70u: goto label_18fd70;
        case 0x18fda8u: goto label_18fda8;
        default: break;
    }

    ctx->pc = 0x18faa8u;

    // 0x18faa8: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18faac: 0x3c18005f  lui         $t8, 0x5F
    ctx->pc = 0x18faacu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)95 << 16));
    // 0x18fab0: 0x2442fc60  addiu       $v0, $v0, -0x3A0
    ctx->pc = 0x18fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966368));
    // 0x18fab4: 0x3c19005f  lui         $t9, 0x5F
    ctx->pc = 0x18fab4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)95 << 16));
    // 0x18fab8: 0xaf0269ec  sw          $v0, 0x69EC($t8)
    ctx->pc = 0x18fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 27116), GPR_U32(ctx, 2));
    // 0x18fabc: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fac0: 0x2442fc70  addiu       $v0, $v0, -0x390
    ctx->pc = 0x18fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966384));
    // 0x18fac4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18fac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18fac8: 0xaf2269f0  sw          $v0, 0x69F0($t9)
    ctx->pc = 0x18fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 27120), GPR_U32(ctx, 2));
    // 0x18facc: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18faccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fad0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x18fad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x18fad4: 0x3c1e005f  lui         $fp, 0x5F
    ctx->pc = 0x18fad4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)95 << 16));
    // 0x18fad8: 0x2442fd20  addiu       $v0, $v0, -0x2E0
    ctx->pc = 0x18fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x18fadc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18fadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18fae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18fae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18fae4: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x18fae4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x18fae8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18faec: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x18faecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    // 0x18faf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18faf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18faf4: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x18faf4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
    // 0x18faf8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18fafc: 0x3c14005f  lui         $s4, 0x5F
    ctx->pc = 0x18fafcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)95 << 16));
    // 0x18fb00: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x18fb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x18fb04: 0x3c15005f  lui         $s5, 0x5F
    ctx->pc = 0x18fb04u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
    // 0x18fb08: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x18fb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x18fb0c: 0x3c16005f  lui         $s6, 0x5F
    ctx->pc = 0x18fb0cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)95 << 16));
    // 0x18fb10: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x18fb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x18fb14: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x18fb14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fb18: 0xafc269f4  sw          $v0, 0x69F4($fp)
    ctx->pc = 0x18fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 27124), GPR_U32(ctx, 2));
    // 0x18fb1c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fb20: 0x2442ff20  addiu       $v0, $v0, -0xE0
    ctx->pc = 0x18fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967072));
    // 0x18fb24: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x18fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x18fb28: 0xaec269f8  sw          $v0, 0x69F8($s6)
    ctx->pc = 0x18fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 27128), GPR_U32(ctx, 2));
    // 0x18fb2c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fb30: 0x2442ff28  addiu       $v0, $v0, -0xD8
    ctx->pc = 0x18fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967080));
    // 0x18fb34: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x18fb34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x18fb38: 0xaea269fc  sw          $v0, 0x69FC($s5)
    ctx->pc = 0x18fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 27132), GPR_U32(ctx, 2));
    // 0x18fb3c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fb40: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x18fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x18fb44: 0x3c0f005f  lui         $t7, 0x5F
    ctx->pc = 0x18fb44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)95 << 16));
    // 0x18fb48: 0xae826a00  sw          $v0, 0x6A00($s4)
    ctx->pc = 0x18fb48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 27136), GPR_U32(ctx, 2));
    // 0x18fb4c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18fb4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fb50: 0x244200d8  addiu       $v0, $v0, 0xD8
    ctx->pc = 0x18fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x18fb54: 0x3c0e005f  lui         $t6, 0x5F
    ctx->pc = 0x18fb54u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)95 << 16));
    // 0x18fb58: 0xae626a04  sw          $v0, 0x6A04($s3)
    ctx->pc = 0x18fb58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 27140), GPR_U32(ctx, 2));
    // 0x18fb5c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fb60: 0x244201c8  addiu       $v0, $v0, 0x1C8
    ctx->pc = 0x18fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
    // 0x18fb64: 0x3c0d005f  lui         $t5, 0x5F
    ctx->pc = 0x18fb64u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)95 << 16));
    // 0x18fb68: 0xae426a08  sw          $v0, 0x6A08($s2)
    ctx->pc = 0x18fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 27144), GPR_U32(ctx, 2));
    // 0x18fb6c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fb70: 0x2442a638  addiu       $v0, $v0, -0x59C8
    ctx->pc = 0x18fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944312));
    // 0x18fb74: 0x3c0c005f  lui         $t4, 0x5F
    ctx->pc = 0x18fb74u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)95 << 16));
    // 0x18fb78: 0xae226a0c  sw          $v0, 0x6A0C($s1)
    ctx->pc = 0x18fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 27148), GPR_U32(ctx, 2));
    // 0x18fb7c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fb80: 0x2442a6a8  addiu       $v0, $v0, -0x5958
    ctx->pc = 0x18fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944424));
    // 0x18fb84: 0x3c0b005f  lui         $t3, 0x5F
    ctx->pc = 0x18fb84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)95 << 16));
    // 0x18fb88: 0xae026a10  sw          $v0, 0x6A10($s0)
    ctx->pc = 0x18fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27152), GPR_U32(ctx, 2));
    // 0x18fb8c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fb90: 0x2442a868  addiu       $v0, $v0, -0x5798
    ctx->pc = 0x18fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944872));
    // 0x18fb94: 0x3c0a005f  lui         $t2, 0x5F
    ctx->pc = 0x18fb94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)95 << 16));
    // 0x18fb98: 0xade26a14  sw          $v0, 0x6A14($t7)
    ctx->pc = 0x18fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 27156), GPR_U32(ctx, 2));
    // 0x18fb9c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fba0: 0x2442a7b0  addiu       $v0, $v0, -0x5850
    ctx->pc = 0x18fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944688));
    // 0x18fba4: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x18fba4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
    // 0x18fba8: 0xadc26a18  sw          $v0, 0x6A18($t6)
    ctx->pc = 0x18fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 27160), GPR_U32(ctx, 2));
    // 0x18fbac: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fbb0: 0x2442abe0  addiu       $v0, $v0, -0x5420
    ctx->pc = 0x18fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945760));
    // 0x18fbb4: 0x3c08005f  lui         $t0, 0x5F
    ctx->pc = 0x18fbb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)95 << 16));
    // 0x18fbb8: 0xada26a1c  sw          $v0, 0x6A1C($t5)
    ctx->pc = 0x18fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 27164), GPR_U32(ctx, 2));
    // 0x18fbbc: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fbc0: 0x2442ac08  addiu       $v0, $v0, -0x53F8
    ctx->pc = 0x18fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945800));
    // 0x18fbc4: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x18fbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x18fbc8: 0xad826a20  sw          $v0, 0x6A20($t4)
    ctx->pc = 0x18fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 27168), GPR_U32(ctx, 2));
    // 0x18fbcc: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fbd0: 0x2442ac18  addiu       $v0, $v0, -0x53E8
    ctx->pc = 0x18fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945816));
    // 0x18fbd4: 0x3c06005f  lui         $a2, 0x5F
    ctx->pc = 0x18fbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
    // 0x18fbd8: 0xad626a24  sw          $v0, 0x6A24($t3)
    ctx->pc = 0x18fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 27172), GPR_U32(ctx, 2));
    // 0x18fbdc: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fbe0: 0x2442ac40  addiu       $v0, $v0, -0x53C0
    ctx->pc = 0x18fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945856));
    // 0x18fbe4: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x18fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x18fbe8: 0xad426a28  sw          $v0, 0x6A28($t2)
    ctx->pc = 0x18fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 27176), GPR_U32(ctx, 2));
    // 0x18fbec: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fbf0: 0x2442a8c0  addiu       $v0, $v0, -0x5740
    ctx->pc = 0x18fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
    // 0x18fbf4: 0xac9769e8  sw          $s7, 0x69E8($a0)
    ctx->pc = 0x18fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27112), GPR_U32(ctx, 23));
    // 0x18fbf8: 0xad226a2c  sw          $v0, 0x6A2C($t1)
    ctx->pc = 0x18fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 27180), GPR_U32(ctx, 2));
    // 0x18fbfc: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fc00: 0x2442a9c0  addiu       $v0, $v0, -0x5640
    ctx->pc = 0x18fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945216));
    // 0x18fc04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18fc04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fc08: 0xad026a30  sw          $v0, 0x6A30($t0)
    ctx->pc = 0x18fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 27184), GPR_U32(ctx, 2));
    // 0x18fc0c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fc10: 0x2442aa20  addiu       $v0, $v0, -0x55E0
    ctx->pc = 0x18fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945312));
    // 0x18fc14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18fc14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18fc18: 0xace26a34  sw          $v0, 0x6A34($a3)
    ctx->pc = 0x18fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 27188), GPR_U32(ctx, 2));
    // 0x18fc1c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fc20: 0x2442aab0  addiu       $v0, $v0, -0x5550
    ctx->pc = 0x18fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945456));
    // 0x18fc24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18fc24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fc28: 0xacc26a38  sw          $v0, 0x6A38($a2)
    ctx->pc = 0x18fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 27192), GPR_U32(ctx, 2));
    // 0x18fc2c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18fc30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18fc30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18fc34: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x18fc34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x18fc38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18fc38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fc3c: 0x2442a870  addiu       $v0, $v0, -0x5790
    ctx->pc = 0x18fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944880));
    // 0x18fc40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18fc40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18fc44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x18fc44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18fc48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x18fc48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18fc4c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x18fc4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18fc50: 0xaca26a3c  sw          $v0, 0x6A3C($a1)
    ctx->pc = 0x18fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27196), GPR_U32(ctx, 2));
    // 0x18fc54: 0x3e00008  jr          $ra
    ctx->pc = 0x18FC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC54u;
            // 0x18fc58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FC5Cu;
    // 0x18fc5c: 0x0  nop
    ctx->pc = 0x18fc5cu;
    // NOP
    // 0x18fc60: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x18fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x18fc64: 0x3e00008  jr          $ra
    ctx->pc = 0x18FC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC64u;
            // 0x18fc68: 0x24428248  addiu       $v0, $v0, -0x7DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FC6Cu;
    // 0x18fc6c: 0x0  nop
    ctx->pc = 0x18fc6cu;
    // NOP
    // 0x18fc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18fc74: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x18fc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18fc78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18fc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18fc7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18fc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18fc80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18fc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18fc88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18fc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18fc8c: 0xc064bc8  jal         func_192F20
    ctx->pc = 0x18FC8Cu;
    SET_GPR_U32(ctx, 31, 0x18FC94u);
    ctx->pc = 0x18FC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC8Cu;
            // 0x18fc90: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC94u; }
        if (ctx->pc != 0x18FC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC94u; }
        if (ctx->pc != 0x18FC94u) { return; }
    }
    ctx->pc = 0x18FC94u;
label_18fc94:
    // 0x18fc94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18fc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc98: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18FC98u;
    {
        const bool branch_taken_0x18fc98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FC98u;
            // 0x18fc9c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc98) {
            ctx->pc = 0x18FD08u;
            goto label_18fd08;
        }
    }
    ctx->pc = 0x18FCA0u;
    // 0x18fca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fca4: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x18fca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x18fca8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18fca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fcac: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x18fcacu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18fcb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18fcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fcb4: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x18FCB4u;
    {
        const bool branch_taken_0x18fcb4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x18FCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCB4u;
            // 0x18fcb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcb4) {
            ctx->pc = 0x18FD08u;
            goto label_18fd08;
        }
    }
    ctx->pc = 0x18FCBCu;
    // 0x18fcbc: 0xc064bc8  jal         func_192F20
    ctx->pc = 0x18FCBCu;
    SET_GPR_U32(ctx, 31, 0x18FCC4u);
    ctx->pc = 0x18FCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCBCu;
            // 0x18fcc0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCC4u; }
        if (ctx->pc != 0x18FCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCC4u; }
        if (ctx->pc != 0x18FCC4u) { return; }
    }
    ctx->pc = 0x18FCC4u;
label_18fcc4:
    // 0x18fcc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18fcc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fcc8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x18FCC8u;
    {
        const bool branch_taken_0x18fcc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCC8u;
            // 0x18fccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcc8) {
            ctx->pc = 0x18FD08u;
            goto label_18fd08;
        }
    }
    ctx->pc = 0x18FCD0u;
    // 0x18fcd0: 0xc064b62  jal         func_192D88
    ctx->pc = 0x18FCD0u;
    SET_GPR_U32(ctx, 31, 0x18FCD8u);
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCD8u; }
        if (ctx->pc != 0x18FCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FCD8u; }
        if (ctx->pc != 0x18FCD8u) { return; }
    }
    ctx->pc = 0x18FCD8u;
label_18fcd8:
    // 0x18fcd8: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x18fcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18fcdc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18FCDCu;
    {
        const bool branch_taken_0x18fcdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCDCu;
            // 0x18fce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcdc) {
            ctx->pc = 0x18FD08u;
            goto label_18fd08;
        }
    }
    ctx->pc = 0x18FCE4u;
    // 0x18fce4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x18fce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x18fce8: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x18fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x18fcec: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x18fcecu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18fcf0: 0x5a200006  blezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FCF0u;
    {
        const bool branch_taken_0x18fcf0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x18fcf0) {
            ctx->pc = 0x18FCF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18FCF0u;
            // 0x18fcf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18FD0Cu;
            goto label_18fd0c;
        }
    }
    ctx->pc = 0x18FCF8u;
    // 0x18fcf8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18fcf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18fcfc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x18fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x18fd00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18fd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x18fd04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18fd04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18fd08:
    // 0x18fd08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18fd08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fd0c:
    // 0x18fd0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18fd0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18fd10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18fd10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fd14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18fd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18fd18: 0x3e00008  jr          $ra
    ctx->pc = 0x18FD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD18u;
            // 0x18fd1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FD20u;
    // 0x18fd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18fd24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18fd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18fd28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18fd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18fd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18fd30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18fd30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18fd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18fd38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18fd38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x18fd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x18fd40: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x18fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x18fd44: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x18fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x18fd48: 0x2463fe58  addiu       $v1, $v1, -0x1A8
    ctx->pc = 0x18fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966872));
    // 0x18fd4c: 0x24428248  addiu       $v0, $v0, -0x7DB8
    ctx->pc = 0x18fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935112));
    // 0x18fd50: 0xc062980  jal         func_18A600
    ctx->pc = 0x18FD50u;
    SET_GPR_U32(ctx, 31, 0x18FD58u);
    ctx->pc = 0x18FD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD50u;
            // 0x18fd54: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A600u;
    if (runtime->hasFunction(0x18A600u)) {
        auto targetFn = runtime->lookupFunction(0x18A600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD58u; }
        if (ctx->pc != 0x18FD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A600_0x18a600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD58u; }
        if (ctx->pc != 0x18FD58u) { return; }
    }
    ctx->pc = 0x18FD58u;
label_18fd58:
    // 0x18fd58: 0xc062aca  jal         func_18AB28
    ctx->pc = 0x18FD58u;
    SET_GPR_U32(ctx, 31, 0x18FD60u);
    ctx->pc = 0x18AB28u;
    if (runtime->hasFunction(0x18AB28u)) {
        auto targetFn = runtime->lookupFunction(0x18AB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD60u; }
        if (ctx->pc != 0x18FD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AB28_0x18ab28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD60u; }
        if (ctx->pc != 0x18FD60u) { return; }
    }
    ctx->pc = 0x18FD60u;
label_18fd60:
    // 0x18fd60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18fd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18fd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd68: 0xc063f74  jal         func_18FDD0
    ctx->pc = 0x18FD68u;
    SET_GPR_U32(ctx, 31, 0x18FD70u);
    ctx->pc = 0x18FD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD68u;
            // 0x18fd6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18FDD0u;
    if (runtime->hasFunction(0x18FDD0u)) {
        auto targetFn = runtime->lookupFunction(0x18FDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD70u; }
        if (ctx->pc != 0x18FD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDD0_0x18fdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD70u; }
        if (ctx->pc != 0x18FD70u) { return; }
    }
    ctx->pc = 0x18FD70u;
label_18fd70:
    // 0x18fd70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18fd70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fd74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18fd74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18fd78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18fd78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fd7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x18fd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18fd80: 0x8063f62  j           func_18FD88
    ctx->pc = 0x18FD80u;
    ctx->pc = 0x18FD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD80u;
            // 0x18fd84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18FD88u;
    goto label_18fd88;
    ctx->pc = 0x18FD88u;
label_18fd88:
    // 0x18fd88: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x18fd8c: 0x2442fe60  addiu       $v0, $v0, -0x1A0
    ctx->pc = 0x18fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966880));
    // 0x18fd90: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x18fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x18fd94: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x18FD94u;
    {
        const bool branch_taken_0x18fd94 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x18FD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FD94u;
            // 0x18fd98: 0x8c430044  lw          $v1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd94) {
            ctx->pc = 0x18FDC4u;
            goto label_18fdc4;
        }
    }
    ctx->pc = 0x18FD9Cu;
    // 0x18fd9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18fd9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fda0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fda4: 0x0  nop
    ctx->pc = 0x18fda4u;
    // NOP
label_18fda8:
    // 0x18fda8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18fdac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x18fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x18fdb0: 0x0  nop
    ctx->pc = 0x18fdb0u;
    // NOP
    // 0x18fdb4: 0x0  nop
    ctx->pc = 0x18fdb4u;
    // NOP
    // 0x18fdb8: 0x0  nop
    ctx->pc = 0x18fdb8u;
    // NOP
    // 0x18fdbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18FDBCu;
    {
        const bool branch_taken_0x18fdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FDBCu;
            // 0x18fdc0: 0x24630660  addiu       $v1, $v1, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdbc) {
            ctx->pc = 0x18FDA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18fda8;
        }
    }
    ctx->pc = 0x18FDC4u;
label_18fdc4:
    // 0x18fdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x18FDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FDCCu;
    // 0x18fdcc: 0x0  nop
    ctx->pc = 0x18fdccu;
    // NOP
}
