#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131760
// Address: 0x131760 - 0x131940
void sub_00131760_0x131760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131760_0x131760");
#endif

    switch (ctx->pc) {
        case 0x131788u: goto label_131788;
        case 0x1317c0u: goto label_1317c0;
        case 0x131800u: goto label_131800;
        case 0x131840u: goto label_131840;
        case 0x131880u: goto label_131880;
        case 0x1318c4u: goto label_1318c4;
        default: break;
    }

    ctx->pc = 0x131760u;

label_131760:
    // 0x131760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x131760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x131764: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x131764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x131768: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x131768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13176c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13176cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x131770: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x131770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x131774: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x131774u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x131778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13177c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131780: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131784: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x131784u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_131788:
    // 0x131788: 0x8f838094  lw          $v1, -0x7F6C($gp)
    ctx->pc = 0x131788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934676)));
    // 0x13178c: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x13178cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x131790: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x131790u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x131794: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x131794u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x131798: 0x8f848090  lw          $a0, -0x7F70($gp)
    ctx->pc = 0x131798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x13179c: 0x66a821  addu        $s5, $v1, $a2
    ctx->pc = 0x13179cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1317a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1317a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1317a4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1317a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1317a8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1317a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1317ac: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x1317acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x1317b0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1317b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1317b4: 0x86a40008  lh          $a0, 0x8($s5)
    ctx->pc = 0x1317b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1317b8: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1317B8u;
    {
        const bool branch_taken_0x1317b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1317b8) {
            ctx->pc = 0x131908u;
            goto label_131908;
        }
    }
    ctx->pc = 0x1317C0u;
label_1317c0:
    // 0x1317c0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1317c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1317c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1317c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1317c8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1317c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1317cc: 0x8f848090  lw          $a0, -0x7F70($gp)
    ctx->pc = 0x1317ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x1317d0: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x1317d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1317d4: 0x8f868094  lw          $a2, -0x7F6C($gp)
    ctx->pc = 0x1317d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934676)));
    // 0x1317d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1317d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1317dc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1317dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1317e0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1317e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1317e4: 0xc79821  addu        $s3, $a2, $a3
    ctx->pc = 0x1317e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1317e8: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x1317e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x1317ec: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1317ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1317f0: 0x86640008  lh          $a0, 0x8($s3)
    ctx->pc = 0x1317f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1317f4: 0x10830040  beq         $a0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1317F4u;
    {
        const bool branch_taken_0x1317f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1317f4) {
            ctx->pc = 0x1318F8u;
            goto label_1318f8;
        }
    }
    ctx->pc = 0x1317FCu;
    // 0x1317fc: 0x0  nop
    ctx->pc = 0x1317fcu;
    // NOP
label_131800:
    // 0x131800: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x131800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x131804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x131804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x131808: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x131808u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13180c: 0x8f848090  lw          $a0, -0x7F70($gp)
    ctx->pc = 0x13180cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x131810: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x131810u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x131814: 0x8f868094  lw          $a2, -0x7F6C($gp)
    ctx->pc = 0x131814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934676)));
    // 0x131818: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x131818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13181c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x13181cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x131820: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x131820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131824: 0xc79021  addu        $s2, $a2, $a3
    ctx->pc = 0x131824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x131828: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x131828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x13182c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x13182cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x131830: 0x86440008  lh          $a0, 0x8($s2)
    ctx->pc = 0x131830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x131834: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x131834u;
    {
        const bool branch_taken_0x131834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x131834) {
            ctx->pc = 0x1318E8u;
            goto label_1318e8;
        }
    }
    ctx->pc = 0x13183Cu;
    // 0x13183c: 0x0  nop
    ctx->pc = 0x13183cu;
    // NOP
label_131840:
    // 0x131840: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x131840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x131844: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x131844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x131848: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x131848u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13184c: 0x8f848090  lw          $a0, -0x7F70($gp)
    ctx->pc = 0x13184cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x131850: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x131850u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x131854: 0x8f868094  lw          $a2, -0x7F6C($gp)
    ctx->pc = 0x131854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934676)));
    // 0x131858: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x131858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13185c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x13185cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x131860: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x131860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131864: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x131864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x131868: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x131868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x13186c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x13186cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x131870: 0x86240008  lh          $a0, 0x8($s1)
    ctx->pc = 0x131870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x131874: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x131874u;
    {
        const bool branch_taken_0x131874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x131874) {
            ctx->pc = 0x1318D8u;
            goto label_1318d8;
        }
    }
    ctx->pc = 0x13187Cu;
    // 0x13187c: 0x0  nop
    ctx->pc = 0x13187cu;
    // NOP
label_131880:
    // 0x131880: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x131880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x131884: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x131884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x131888: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x131888u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13188c: 0x8f848090  lw          $a0, -0x7F70($gp)
    ctx->pc = 0x13188cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934672)));
    // 0x131890: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x131890u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x131894: 0x8f868094  lw          $a2, -0x7F6C($gp)
    ctx->pc = 0x131894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934676)));
    // 0x131898: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x131898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13189c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x13189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1318a0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1318a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1318a4: 0xc78021  addu        $s0, $a2, $a3
    ctx->pc = 0x1318a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1318a8: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x1318a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x1318ac: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1318acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1318b0: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x1318b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1318b4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1318B4u;
    {
        const bool branch_taken_0x1318b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1318b4) {
            ctx->pc = 0x1318C8u;
            goto label_1318c8;
        }
    }
    ctx->pc = 0x1318BCu;
    // 0x1318bc: 0xc04c5d8  jal         func_131760
    ctx->pc = 0x1318BCu;
    SET_GPR_U32(ctx, 31, 0x1318C4u);
    ctx->pc = 0x1318C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1318BCu;
            // 0x1318c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131760u;
    goto label_131760;
    ctx->pc = 0x1318C4u;
label_1318c4:
    // 0x1318c4: 0x0  nop
    ctx->pc = 0x1318c4u;
    // NOP
label_1318c8:
    // 0x1318c8: 0x8604000a  lh          $a0, 0xA($s0)
    ctx->pc = 0x1318c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1318cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1318ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1318d0: 0x1483ffeb  bne         $a0, $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1318D0u;
    {
        const bool branch_taken_0x1318d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1318d0) {
            ctx->pc = 0x131880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131880;
        }
    }
    ctx->pc = 0x1318D8u;
label_1318d8:
    // 0x1318d8: 0x8624000a  lh          $a0, 0xA($s1)
    ctx->pc = 0x1318d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1318dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1318dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1318e0: 0x1483ffd7  bne         $a0, $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1318E0u;
    {
        const bool branch_taken_0x1318e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1318e0) {
            ctx->pc = 0x131840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131840;
        }
    }
    ctx->pc = 0x1318E8u;
label_1318e8:
    // 0x1318e8: 0x8644000a  lh          $a0, 0xA($s2)
    ctx->pc = 0x1318e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1318ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1318ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1318f0: 0x1483ffc3  bne         $a0, $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1318F0u;
    {
        const bool branch_taken_0x1318f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1318f0) {
            ctx->pc = 0x131800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131800;
        }
    }
    ctx->pc = 0x1318F8u;
label_1318f8:
    // 0x1318f8: 0x8664000a  lh          $a0, 0xA($s3)
    ctx->pc = 0x1318f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1318fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1318fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x131900: 0x1483ffaf  bne         $a0, $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x131900u;
    {
        const bool branch_taken_0x131900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x131900) {
            ctx->pc = 0x1317C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1317c0;
        }
    }
    ctx->pc = 0x131908u;
label_131908:
    // 0x131908: 0x86a4000a  lh          $a0, 0xA($s5)
    ctx->pc = 0x131908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x13190c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x131910: 0x5483ff9d  bnel        $a0, $v1, . + 4 + (-0x63 << 2)
    ctx->pc = 0x131910u;
    {
        const bool branch_taken_0x131910 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x131910) {
            ctx->pc = 0x131914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131910u;
            // 0x131914: 0x428c0  sll         $a1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131788;
        }
    }
    ctx->pc = 0x131918u;
    // 0x131918: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x131918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13191c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13191cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x131920: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x131920u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131924: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x131924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131928: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13192c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13192cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131934: 0x3e00008  jr          $ra
    ctx->pc = 0x131934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131934u;
            // 0x131938: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13193Cu;
    // 0x13193c: 0x0  nop
    ctx->pc = 0x13193cu;
    // NOP
}
